class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>res(prices.size(),0);
        stack<int>s;
        for(int i=0;i<prices.size();i++){
            if(s.empty())
               s.push(i);
             else if( !s.empty() && prices[i]<=prices[s.top()]){
                 while(!s.empty() && prices[i]<=prices[s.top()]){
                     res[s.top()]=prices[s.top()]-prices[i];
                     s.pop();
                 }
                 s.push(i);
             }
            else{
                s.push(i);
            }
        }
        while(!s.empty()){
          res[s.top()]=prices[s.top()];
            s.pop();
        }
        return res;
    }
};
