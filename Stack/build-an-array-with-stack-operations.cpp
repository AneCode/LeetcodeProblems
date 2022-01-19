class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        stack<int>s;
         s.push(1);
        res.push_back("Push");
        int i=1;
        if( s.top()!=target[0]){
               // s.push(s.top()+1);
                    res.push_back("Pop"); 
            i=0;
            }
        while(s.top()!=target[target.size()-1])
        {
            
             if((s.top()+1)!=target[i]){
                    cout<<"YES";
                while((s.top()+1)!=target[i]){
                    s.push(s.top()+1);
                    res.push_back("Push");
                    res.push_back("Pop");
                }
                
            }
            else{
                s.push(target[i]);
                 res.push_back("Push");
                i++;
            }
            
        }
        return res;
    }
};
