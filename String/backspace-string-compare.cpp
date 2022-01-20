class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char>st;
        string s1,t1;
        for(char i:s){
            if(st.empty() && i!='#')
                st.push(i);
            else if(st.empty() && i=='#'){
                continue;
            }
            else if(i=='#'){
                      st.pop();
                    }
             else
                st.push(i);    
        }
       while(!st.empty()){
           s1.push_back(st.top());
           st.pop();
       } 
        for(char i:t){
            if(st.empty() && i!='#')
                st.push(i);
            else if(st.empty() && i=='#'){
                continue;
            }
            else if(i=='#'){
                      st.pop();
                    }
             else
                st.push(i);    
        }
       while(!st.empty()){
           t1.push_back(st.top());
           st.pop();
       }  
       reverse(t1.begin(),t1.end());
       reverse(s1.begin(),s1.end());
       cout<<"s1:"<<s1<<endl;             
       cout<<"t1:"<<t1;             
       return (s1==t1); 
    }
};
