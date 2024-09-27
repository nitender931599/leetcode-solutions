class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>finalprices;
        int price,discount;
        for(int i=0;i<prices.size();i++){
            price = prices[i];
            discount = 0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    discount = prices[j];
                    break;
                }
            }
            finalprices.push_back(price-discount);
        }
        return finalprices;
    }
};
