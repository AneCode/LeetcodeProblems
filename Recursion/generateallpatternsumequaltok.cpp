
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    cout<<"{";
    for(auto x:v)
     cout<<x<<",";
     cout<<"}\n";
}
void generate(vector<int> &v,vector<int>&res,int n,int i,int k,int sum)
{
    if(i==n)
     {
         if(sum==k)
       print(res);  
       return ;
     }
     res.push_back(v[i]);
     sum+=v[i];
     generate(v,res,n,i+1,k,sum);
      sum-=res[res.size()-1];
     res.pop_back();
     generate(v,res,n,i+1,k,sum);

}

// Driver Program to test above functions
int main()
{
   vector<int>v{1,2,1},res;
   int k=2;
   int n=v.size();
  generate(v,res,n,0,k,0);    
	
	return(0);
}
