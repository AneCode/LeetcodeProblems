
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    cout<<"{";
    for(auto x:v)
     cout<<x<<",";
     cout<<"}\n";
}
void generate(vector<int> &v,vector<int>&res,int n,int i)
{
    if(i==n)
     {
       print(res);  
       return ;
     }
     res.push_back(v[i]);
     generate(v,res,n,i+1);
     res.pop_back();
     generate(v,res,n,i+1);

}

// Driver Program to test above functions
int main()
{
   vector<int>v{3,2,1},res;
   int n=v.size();
  generate(v,res,n,0);    
	
	return(0);
}
