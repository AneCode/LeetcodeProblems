class Solution {
public:
    string removeDuplicates(string str) {
     stack<char>s;
      string res="";
       for(int i=0;i<str.size();i++){
          if(s.empty()){
            cout<<str[i];
              s.push(str[i]);
              continue;
          } 
           if(s.top()==str[i]){
              while(!s.empty() && s.top()==str[i])
              {
                  s.pop();
              }
               continue;
           }
           s.push(str[i]);
       } 
        cout<<"s:"<<s.size()<<endl;
      while(!s.empty()){
         res.push_back(s.top());
          // cout<<s.top();
          s.pop();
      }  
        reverse(res.begin(),res.end());
        return res;
    }
};
