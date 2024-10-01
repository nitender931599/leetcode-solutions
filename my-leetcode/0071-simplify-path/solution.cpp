class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        for(int i=0;i<path.size();i++){
            string str;
            if(path[i] == '/'){
                continue;
            }
            while(i<path.size() && path[i] != '/'){
                str+=path[i++];
            }
            if(str == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(str == "."){
                continue;
            }
            else{
                st.push(str);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = "/"+st.top()+ans;
            st.pop();
        }
        return ans.size()>0?ans:"/";
    }
};
