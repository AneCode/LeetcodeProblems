class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int>p;
        while(stones.size()){
            p.push(stones[stones.size()-1]);
            stones.pop_back();
        }
        while(p.size()>1){
            int y=p.top();
            p.pop();
            int x=p.top();
            p.pop();
            if(x!=y){
                p.push(y-x);
            }
        }
       if(p.size())
           return p.top();
        return 0;
           
    }
};
