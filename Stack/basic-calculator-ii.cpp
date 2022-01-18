class Solution {
public:
int evulation(char op,int a,int b) 
{
    switch(op)
    {
       case '*':
        return a*b;
        break;
       case '+':
        return a+b;
        break;
       case '-':
        return a-b;
        break;
       case '/':
        if(b==0){
           cout<<"divided by zero";
           return -1;
        }
      return a/b; 
       default :
       return -1;
    } 
}
int isoperand(char x)
{
    if((x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x>='0'&&x<='9')||(x=='.'))
     return 1;
     else return 0; 
} 
int isoperator(char x)
{
    if(x=='*'||x=='/'||x=='%'||x=='+'||x=='-')
    return 1;
    else 
    return 0;
}
int priorty(char x)
{
    if(x=='('||x=='{'||x=='[')
    return 3;
    if(x=='*'||x=='/'||x=='%')
    return 2;
    if(x=='+'||x=='-')
    return 1;
    return 0; 
}
int isclosebraces(char x)
{
     if(x==')'||x=='}'||x==']')
    return 1;
    return 0;
}
int evulationOFpostfix(string infix)
{
    int i=0;
    stack<char>oprt;
    stack<int>opernd;
    while(infix[i]!='\0')
    {
        if(isoperand(infix[i]))
        {
        //    cout<<"operand"<<endl;
            // opernd.push(infix[i]);   
            int num=(infix[i]-'0');
            // cout<<"i:"<<i<<endl;
            while(!(isoperator(infix[i+1]))&&infix[i+1]!='\0'&&(!isclosebraces(infix[i+1])))
            {
                //  cout<<"i:"<<i<<endl;
                //    cout<<"tendigit"<<endl;
        
                   i++;
                  num=num*10+(infix[i]-'0');
 
            } 
            opernd.push(num);
            //  cout<<"opn.top"<<opernd.top()<<endl;      
        }
        else if(isclosebraces(infix[i]))
        {
            //  cout<<")"<<endl;
            while(priorty(oprt.top())!=3)
            {
                //  cout<<")prior"<<endl;
                char op=oprt.top();
                oprt.pop();
                int b=opernd.top();
                opernd.pop(); 
                int a=opernd.top();
                opernd.pop();
                opernd.push(evulation(op,a,b));
                // cout<<")last:"<<opernd.top();
            } 
            oprt.pop();
            // cout<<"elseif finish"<<endl;
        }
        else 
        {
            //  cout<<"else"<<endl;
               while((!oprt.empty())&&priorty(oprt.top())>=priorty(infix[i])&&priorty(oprt.top())!=3)
               {
                //    cout<<"prior"<<endl;
                        char op=oprt.top();
                        oprt.pop();
                        int b=opernd.top();
                        opernd.pop(); 
                        int a=opernd.top();
                        opernd.pop();
                        opernd.push(evulation(op,a,b));
                    }
               oprt.push(infix[i]); 
                // cout<<"opt.top :"<<oprt.top()<<endl;              
        }

    //    cout<<"Next_infix:"<<infix[i]<<endl;
        i++;
    //    cout<<"Next_infix:"<<infix[i]<<endl;
    }
    // cout<<"opt.top :"<<oprt.top()<<endl;
    // cout<<"opn.top"<<opernd.top()<<endl;

    while(!oprt.empty())
    {
        //  cout<<"last check"<<endl;
                      char op=oprt.top();
                        oprt.pop();
                        int b=opernd.top();
                        opernd.pop(); 
                        int a=opernd.top();
                        opernd.pop();
                        opernd.push(evulation(op,a,b));
    }
    //  cout<<"function last i"<<endl;

  return opernd.top();
}
    int calculate(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return evulationOFpostfix(s);
    }
};
