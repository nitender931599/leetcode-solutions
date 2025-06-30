class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int g;
        int n= arr.size();
	sort(arr.begin(), arr.end());
	for(int i=0;i<n;i++){
		if(arr[i] == arr[i+1]){
			g = arr[i];
			break;
		}
	}
	return g;
    }
};
