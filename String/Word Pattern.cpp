class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,bool>m2;
        vector<string>v;
        string n;
        for(int i=0;i<s.size();i++){
            if(s[i]==32){
                // cout<<n;
                v.push_back(n);
                n="";
            }
            if(s[i]!=32)
            n+=s[i];
        }
        v.push_back(n);
        if(pattern.size()!=v.size()){
            return false;
        }
        for(int i=0;i<v.size();i++){
            char c=pattern[i];
            if(m1.find(c)==m1.end()){
                if(m2.find(v[i])!=m2.end()){
                    return false;
                }
                else{
                    m1[c]=v[i];
                    m2[v[i]]=true;
                } 
            }
            else{
                 auto m=m1.find(c);
                if(m->second!=v[i])
                return false;
            }
            
            
        } 
        
        return true; 
    }
};
