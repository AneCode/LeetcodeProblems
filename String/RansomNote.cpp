class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(26,0);
        int i=0;
        while(magazine[i]){
            v[magazine[i]-'a']++;
            i++;
        }
        int flag=0;
        i=0;
        while(ransomNote[i]){
            if(v[ransomNote[i]-'a']==0){
                flag=1;
               break; 
            }
            else{
               v[ransomNote[i]-'a']--; 
            }
          i++;
        }
            if(flag==1)
              return false;
           else 
        return true;
    }
};
