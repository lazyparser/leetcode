class MinStack {
    std::vector<int> val_stack, min_stack;
public:
    void push(int x) {
        val_stack.push_back(x);
        if (min_stack.size() == 0) {
            min_stack.push_back(x);
        } else {
            int m = min_stack.back();
            min_stack.push_back(m < x? m : x);
        }
    }

    void pop() {
        if (val_stack.size() == 0)
            return;
        val_stack.pop_back();
        min_stack.pop_back();
    }

    int top() {
        if (val_stack.size() == 0)
            return 0;
        else
            return val_stack.back();
    }

    int getMin() {
        if (min_stack.size() == 0)
            return 0;
        else
            return min_stack.back();
    }
};