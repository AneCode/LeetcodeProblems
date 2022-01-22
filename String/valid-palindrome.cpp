class Solution {
   
public:
    bool isPalindrome(string s) {
        string n;
        for(char i:s){
            if(iswalnum(i)){
              if(isupper(i)){
                  i=i+32;
                  cout<<"i:"<<i<<endl;
                  n.push_back(i);
              }
                else
                    n.push_back(i);
            }
        }
        cout<<"E:\n"<<n;
       string x=n;
        reverse(x.begin(),x.end());
        return x==n ;
    }
};
