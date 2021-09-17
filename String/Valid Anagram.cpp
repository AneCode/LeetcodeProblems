class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(26,0);
        int flag=0,i=0;
        while(s[i]){
            v[s[i]-'a']++;
            i++;
        }
        i=0;
        while(t[i]){
           if(v[t[i]-'a']==0){
               return false;
           }
           else{
               v[t[i]-'a']--;
           } 
           i++; 
        }
        for(auto i:v){
            if(i!=0)
             return false; 
        }
      return true;      
    }
};
