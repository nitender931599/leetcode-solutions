class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
    for(int i=0;i<asteroids.size();i++){
        while(!st.empty() && asteroids[i]<0 && st.top()>0){
            int sum = asteroids[i] + st.top();
            if(sum<0){
                st.pop();
            }
            else if(sum>0){
                asteroids[i] = 0;
            }
            else{
                st.pop();
                asteroids[i] = 0;
            }
        }
        if(asteroids[i]!=0){
            st.push(asteroids[i]);
        }
    }
    int j = st.size();
    vector<int>result(j);
    int i = j-1;
    while(!st.empty()){
        result[i] = st.top();
        st.pop();
        i--;
    }
    return result;
    }
};
