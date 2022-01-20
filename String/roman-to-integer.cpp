class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'&& (i+1)<s.size() && s[i+1]=='V'){
                res+=4;
                i++;
            }
             else if(s[i]=='I'&& (i+1)<s.size() && s[i+1]=='X'){
                res+=9;
                i++;
            }
           else   if(s[i]=='X'&& (i+1)<s.size() && s[i+1]=='L'){
                res+=40;
                i++;
            }
           else   if(s[i]=='X'&& (i+1)<s.size() && s[i+1]=='C'){
                res+=90;
                i++;
            }
            else  if(s[i]=='C'&& (i+1)<s.size() && s[i+1]=='D'){
                res+=400;
                i++;
            }
           else   if(s[i]=='C'&& (i+1)<s.size() && s[i+1]=='M'){
                res+=900;
                i++;
            }
            else 
               res+=m[s[i]]; 
            
        }
        return res;
    }
};
