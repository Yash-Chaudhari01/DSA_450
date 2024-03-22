#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
private:
    std::vector<T> items;

public:
    bool is_empty() const {
        return items.empty();
    }

    void push(const T& item) {
        items.push_back(item);
    }

    T pop() {
        if (is_empty()) {
            throw std::out_of_range("pop from empty stack");
        }
        T top = items.back();
        items.pop_back();
        return top;
    }

    T& top() {
        if (is_empty()) {
            throw std::out_of_range("top from empty stack");
        }
        return items.back();
    }

    size_t size() const {
        return items.size();
    }
};

int main() {
    Stack<int> stack;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Stack size: " << stack.size() << std::endl;

    std::cout << "Top of the stack: " << stack.top() << std::endl;

    std::cout << "Popping items:" << std::endl;
    while (!stack.is_empty()) {
        std::cout << stack.pop() << std::endl;
    }

    return 0;
}
