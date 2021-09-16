class Solution {
public:
    int maxProduct(vector<int>& v) {
      int x,y,max=0,k,j;
        for(int i=0;i<v.size();i++){
            if(max<v[i]){
                max=v[i];
                k=i;
                
            }
        }
        x=max;
        max=0;
        for(int i=0;i<v.size();i++){
            if(max<v[i] && i!=k){
                max=v[i];
                j=i;
            }
        }
        y=max;
        cout<<x<<y;
        return (x-1)*(y-1);
    }
};
