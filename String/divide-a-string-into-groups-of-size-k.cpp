class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        string n="";
        if(s.size()<k)
        {
          n=s;
           while(n.size()!=k){
               n.push_back(fill);
           }
            v.push_back(n);
            return v;
        } 
       
         n=s.substr(0,k);
         
          v.push_back(n);
          n="";
         
        for(int i=k;i<s.size();i++){
           
            if(n.size()==k)
             {
                
              v.push_back(n);  
               n="";
             }
            
                n.push_back(s[i]);
           
        }
        if(n.size()>0)
        {
            while(n.size()!=k){
                n.push_back(fill);
            }
         v.push_back(n);
        }
        
        return v;
    }
};
