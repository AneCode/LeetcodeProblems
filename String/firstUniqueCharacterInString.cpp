class Solution {
public:
    int firstUniqChar(string s) {
      map<char,int>m;
        queue<int>q;
        int i=0;
        while(s[i]){
            q.push(i);
            if(m.find(s[i])==m.end()){
               m.insert({s[i],1});
            }
            else{
                auto p=m.find(s[i]);
                m[p->first]=++(p->second);
            }
            i++;
        }
        int count=0,falg=0;
        while(q.size()){
          cout<< m[s[q.front()]]<<" "; 
            if(m[s[q.front()]]==1){
                return count;
            }
            q.pop();
            count++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            cout<<(it)->first<<(it)->second<<endl;
        }
        return -1;
    }
};
