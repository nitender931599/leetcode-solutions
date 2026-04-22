const fetch = require("node-fetch");
const fs = require("fs");

const LEETCODE_SESSION = process.env.LEETCODE_SESSION;

async function getSubmissions() {
  const res = await fetch("https://leetcode.com/api/submissions/", {
    headers: {
      cookie: `LEETCODE_SESSION=${LEETCODE_SESSION}`,
      "User-Agent": "Mozilla/5.0",
    },
  });

  const data = await res.json();
  return data.submissions_dump;
}

async function saveSolutions() {
  const submissions = await getSubmissions();

  if (!submissions) {
    console.log("❌ Invalid cookie or no data");
    return;
  }

  fs.mkdirSync("solutions", { recursive: true });

  submissions.forEach((sub) => {
    if (sub.status_display === "Accepted") {
      const file = `solutions/${sub.title_slug}.txt`;
      fs.writeFileSync(file, sub.code || "// code not available");
    }
  });

  console.log("✅ Solutions saved");
}

saveSolutions();