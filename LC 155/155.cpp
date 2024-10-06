class MinStack {
private:
    stack<int> valueStack;
    stack<int> minStack;
    
public:
    MinStack() { 
        // Constructor
    }
    
    void push(int val) {
        valueStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (valueStack.top() == minStack.top()) {
            minStack.pop();
        }
        valueStack.pop();
    }
    
    int top() {
        return valueStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
