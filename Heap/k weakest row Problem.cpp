class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int ,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        vector<int>v;
        int count=0;
        for(int i=mat.size()-1;i>=0;i--){
              count++; 
            for(int j=mat[i].size()-1;j>=0;j--){
              if(mat[i][j]==1){
                  p.push(make_pair(j+1,i));
                  break;
              } 
              if(mat[i][0]==0){
                 p.push(make_pair(0,i)); 
                  break;
              }
            }
        }
        while(k--){
         cout<<p.top().first<<p.top().second<<endl; 
            v.push_back(p.top().second);
            p.pop();
        }
        
        return v; 
        
    }
};
