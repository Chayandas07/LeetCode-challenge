class SpecialQueue {

  public:
    
    queue<int>q;
    deque<int>dq1,dq2;
    
    // dq1-> mini
    // dq2-> maxi
    void enqueue(int x) {
        // Insert element into the queue
        q.push(x);
        
        while(!dq1.empty() && dq1.back()>x){
            dq1.pop_back();
        }
        
        dq1.push_back(x);
        
        while(!dq2.empty() && dq2.back()<x){
            dq2.pop_back();
        }
        
        dq2.push_back(x);
    }

    void dequeue() {
        // Remove element from the queue
        if(q.empty()) return ;
        int x=q.front();
        
        while(!dq1.empty() && x==dq1.front()) {
            dq1.pop_front();
            break;
        }
        
        while(!dq2.empty() && x==dq2.front()) {
            dq2.pop_front();
            break;
        }
        
        q.pop();
    }

    int getFront() {
        // Get front element
        int x=q.empty() ? -1 : q.front();
        return x;
    }

    int getMin() {
        // Get minimum element
        if(q.empty()) return -1;
        return dq1.front();
    }

    int getMax() {
        // Get maximum element
        if(q.empty()) return -1;
        return dq2.front();
    }
};
