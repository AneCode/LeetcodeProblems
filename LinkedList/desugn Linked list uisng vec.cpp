class MyLinkedList {
public:
    vector<int> nums;
    MyLinkedList() {
        
    }
    
    int get(int index) {
        if(index>=nums.size()) return -1;
        return nums[index];
    }
    
    void addAtHead(int val) {
        nums.insert(nums.begin(),val);
    }
    
    void addAtTail(int val) {
        nums.push_back(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>nums.size()) return ;
        
         nums.insert(nums.begin()+index,val);
    }
    
    void deleteAtIndex(int index) {
         if(index>=nums.size()) return ;
         nums.erase(nums.begin()+index);
    }
};
