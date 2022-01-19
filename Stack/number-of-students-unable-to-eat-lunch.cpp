class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeros=0;
        int ones=0;
        for(int i:students){
            if(i==0)
                zeros++;
            else
                ones++;
        }
        cout<<"zeroes"<<zeros<<endl;
        cout<<"ones"<<ones<<endl;
        for(int i:sandwiches)
        {
            if(i==0 && zeros==0)
                break;
            if(i==1 && ones==0)
                break;
            if(i==0)
                zeros--;
            if(i==1)
                ones--;
        }
        return zeros+ones;
    }
};
