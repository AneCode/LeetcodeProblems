class Solution {
public:
    int minOperations(vector<string>& logs) {
     stack<int>s;
        int j=1;
      for(string i:logs){
          if(i=="../" &&  !s.empty()){
              s.pop();
          }
          else if(i=="../" && s.empty())
          {
              continue;
          }
          else if(i=="./"){
              continue;
          }
          else{
              s.push(j++);
          }
      }  
      return s.size();
    }
};
