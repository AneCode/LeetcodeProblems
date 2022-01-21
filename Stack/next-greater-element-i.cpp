class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int>m;
        stack<int>s;
        vector<int>g(nums2.size(),0);
        for(int i=0;i<nums2.size();i++){
            if(s.empty()){
                s.push(i);
            }
            else if(!s.empty() && nums2[s.top()]<=nums2[i]){
                while(!s.empty() && nums2[s.top()]<=nums2[i]){
                    g[s.top()]=nums2[i];
                    s.pop();
                } 
                s.push(i);
            } 
            else 
               s.push(i); 
        }
        while(!s.empty()){
           g[s.top()]=-1;
            s.pop();
        }
        int i=0;
        cout<<"g:"<<endl;
        for(int j:g){
            cout<<j<<endl;
        }
     vector<int>res(nums1.size(),0);
     for(int j:nums2){
         m[j]=i++;
     }   
      for(auto j:m){
          cout<< j.first<<":"<< j.second<<endl;
      } 
        for(int i=0;i<nums1.size();i++){
           auto m1 =m.find(nums1[i]);
            res[i]=g[m1->second];
        }
        
        return res;
    }
};
