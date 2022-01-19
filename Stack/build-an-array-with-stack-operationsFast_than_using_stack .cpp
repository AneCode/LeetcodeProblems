class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
       int count=0;
        int i=1 ,j=0;
        for(int j=0;j<target.size();j++){
            if(j==0){
                i=1;
                if(target[j]==1){
                res.push_back("Push");
                continue;
                }
                count=target[j]-i;
                while(count--){
                    res.push_back("Push");
                    res.push_back("Pop");
                }
                res.push_back("Push");
                count=0;
            }
            else{
                i=j-1;
                count=target[j]-target[i]-1;
                 while(count--){
                    res.push_back("Push");
                    res.push_back("Pop");
                }
                res.push_back("Push");
                count=0;
            }
        }
        return res;
    }
};
