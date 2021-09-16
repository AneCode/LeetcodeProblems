class Solution {
public:
    string position(int j){
          
          if(j==0)
          {
              return "Gold Medal";
          }  
          else if(j==1){
           return "Silver Medal"; 
          }
          else if( j==2){
              return "Bronze Medal"; 
          }
          else{
              string c=to_string(j+1); 
                return c;
          }
         

    }
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>p;
        vector<string>v(score.size());
        int count=0;
        for(int i=0;i<score.size();i++){
            p.push(make_pair(score[i],i));
        }
     while(p.size()){
         cout<<p.top().first<<"--"<<p.top().second<<endl;
           string s=position(count++);
           v[p.top().second]=s;
            p.pop();
         
     }
    
        return v;
    }
};
