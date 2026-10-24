class MyQueue {
private:
    // Space complexity O(2*N)
    std::stack<int> s1;
    std::stack<int> s2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {      // Time complexity O(1)
        s1.push(x);
    }
    
    int pop() {             // Time complexity amortized O(1), worst O(N)
        if (s2.empty()) {
            // transfer from s1 to s2. 
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {             // Time complexity amortized O(1), worst O(N)
        if (s2.empty()) {
            // transfer from s1 to s2. 
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }
    
    bool empty() {          // Time complexity O(1)
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */