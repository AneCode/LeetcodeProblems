class Solution {
// isupper islower 
    
    public:
    string makeGood(string s) {
       stack<char>s1;
       string res;
        int i=1;
        s1.push(s[0]);
        for(;i<s.size();i++){
            if(!s1.empty() && abs((int)s[i]-  (int)s1.top())==32){
               s1.pop();
              cout<<"YES";   
            }
            else
                s1.push(s[i]);
        }
        while(!s1.empty()){
            res.push_back(s1.top());
                s1.pop();
        }
        reverse(res.begin(),res.end());
      char a,b;
        a='e';
        b='E';
        cout<< (int)a-(int)b;
        return  res;
    }
};
