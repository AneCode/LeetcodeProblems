class Solution {
public:
    string addBinary(string a, string b) {
       char acc='0';
        string res;
        while(!a.empty() && !b.empty()){
            char x =a[a.size()-1];
            char y=b[b.size()-1];
            b.pop_back();
            a.pop_back();
            if( x=='1' && y=='1' && acc=='0'){
                res.push_back('0'); 
                acc='1';
            }
            else if(x=='1' &&  y=='1' && acc=='1' ){
                res.push_back('1');
                acc='1';
            }
            else if(x=='0' && y=='0' &&  acc=='1'){
                 res.push_back('1');
                acc='0';
            }
            else if(x=='0' && y=='0' && acc=='0')
            {
                res.push_back('0');
            }
            else if(acc=='1')
            {
            res.push_back('0');
            acc='1';
            }
            else if(acc=='0'){
                res.push_back('1');
              acc='0';
            } 
        }
        int flag=(a.empty())?0:1;
        if(flag==0){
            char x;
            while(!b.empty()){
                x=b[b.size()-1];
                if(acc=='0'){
                   res.push_back(x);
                   
                } 
                else{
                    if(x=='0')
                     {
                        res.push_back('1');
                        acc='0';
                    }
                    else
                    {
                        res.push_back('0');
                        acc='1';
                    }
                }
                 b.pop_back();
            } 
        }
        else{
             char x;
            while(!a.empty()){
                x=a[a.size()-1];
                if(acc=='0'){
                   res.push_back(x);
                   
                } 
                else{
                    if(x=='0')
                     {
                        res.push_back('1');
                        acc='0';
                    }
                    else
                    {
                        res.push_back('0');
                        acc='1';
                    }
                }
                 a.pop_back();
            }  
        }
        if(acc=='1')
        res.push_back(acc);
        reverse(res.begin(),res.end());
        return res;
    }
};
