class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(auto it=nums.begin();it!=nums.end();it++){
        //     if( *it >= target)
        //         nums.erase(it);
        // }
        unordered_map<int,pair<int,int>>m;
        int i=0,count;
        for(auto it=nums.begin();it!=nums.end();it++){
                int x=*it;
            if(m.empty()){
                m[x]=make_pair(i,0);
            }
            else{
                if(m.find(x)!=m.end()){
                   auto m1=m.find(x);
                    m1->second.second++;
                }
                else{
                   m[x]=make_pair(i,0);
                }
                
            }
            i++;
        }
        
 // for (auto itr = m.begin(); itr != m.end(); itr++)
 //    {
 //          cout <<"Key:"<< itr->first<<endl; 
 //        cout<<"Value:["<<itr->second.first<<"  "<<itr->second.second<<"]"<<endl;
 //     }
int x,y,val;
    vector<int>result;
    int j=0,flag=0;
        
    for(auto i=nums.begin();i!=nums.end();i++){
        x=j;
        val=*i;
        if(val==(target-val)){
           auto m1=m.find((target-val));
                cout<<"s"<<m1->second.second<<endl;
            if(m1->second.second>=1)
            {
                x=m1->second.first;
                flag=1;
                break;
                
            }
           
        }
       if(m.find((target-val))!=m.end() && val!=(target-val)) {
           auto m1=m.find((target-val));
           y=m1->second.first;
           cout<<"y:"<<y;
           break;
       }
        j++;
    }
        if(flag==1){
            for(int i=x+1;i<nums.size();i++){
                if(nums[i]==nums[x]){
                    y=i;
                }
            }
        }
   result.push_back(x);
   result.push_back(y);
    return result;       
        
}
    
    
};
