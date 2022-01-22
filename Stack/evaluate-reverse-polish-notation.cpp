class Solution {
        bool check(string x){
            if(x=="*" || x=="/" || x=="-" || x=="+")
                return true;
            else 
           return  false;
        }
    int cals(int a,int b,string x){
        if(x=="*")
        return a*b;
        if(x=="/")
        return a/b;
        if(x=="+")
        return a+b;
        else 
        return a-b;
         
    }
public:
    int evalRPN(vector<string>& tokens) {
    int res=0,x=0,y=0;
        stack<int>s;
        for(int i=0;i<tokens.size();i++){
         stringstream my(tokens[i]);
            int x;
            my>>x;
           if(check(tokens[i])){
               if(s.size()>=2)
                {
                    int b=s.top();
                    s.pop();
                    int a=s.top();
                    s.pop();
                    int result =cals(a,b,tokens[i]);
                    s.push(result);
                }
           }
            else{
               s.push(x);              
                
            } 
        }
       return s.top(); 
        
    }
};
