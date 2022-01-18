class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int>s;
        
        for(string i: ops){
           stringstream  oop(i);
            int x=0;
            oop >> x;
            // cout<<"x:"<<x<<endl;
            if(x==0){
                if(i=="C")
                {
                    s.pop();
                }
                else if(i=="D"){
                    int y=s.top();
                    s.push(2*y);
                }
                else {
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.pop();
                    s.push(b);
                    s.push(a);
                    s.push(a+b);
                }
            }
            else{
                s.push(x);
            }
        }
       int sum=0;
        while(!s.empty()){
            cout<<s.top()<<endl;
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};
