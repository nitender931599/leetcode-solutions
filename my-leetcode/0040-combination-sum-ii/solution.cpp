class Solution {
public:
    void combine(int ind, int target, vector<int>& ds,
                 vector<vector<int>>& ans, vector<int>& arr) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > ind && arr[i] == arr[i - 1]) continue;

            // Pruning
            if (arr[i] > target) break;

            ds.push_back(arr[i]);
            combine(i + 1, target - arr[i], ds, ans, arr);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());   // VERY IMPORTANT
        vector<vector<int>> ans;
        vector<int> ds;
        combine(0, target, ds, ans, arr);
        return ans;
    }
};

