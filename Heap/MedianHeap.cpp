class MedianFinder {
public:
    /** initialize your data structure here. */
    double median;
    priority_queue<int>max;
    priority_queue<int,vector<int>,greater<int>>min;
    MedianFinder() {
        median=0;
    }
    void addNum(int num) {
        if(max.size()==0 && min.size()==0){
          max.push(num);
            median=max.top();
            return ;
        } 
         if(max.size()>min.size() ){
                      if(num<median) {
                          int x=max.top();
                          max.pop();
                          min.push(x);
                          max.push(num);
                      }  
                else{
                    min.push(num);
                    cout<<min.top();
                }
              double x=(max.top()+min.top());
             median=x/2.0;
             cout<<median;
         }
        else if(max.size()<min.size()){
            if(num>median) {
                          int x=min.top();
                          min.pop();
                          max.push(x);
                          min.push(num);
                      }  
                else{
                    max.push(num);
                }
               double x=(max.top()+min.top());
             median=x/2.0;
            
            
        }
        else{
            if(num>median){
              min.push(num);
                median=min.top();
            }
            else{
               max.push(num);
                median=max.top();
            }
            
        }
    }
    
    double findMedian() {
        return  median;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
