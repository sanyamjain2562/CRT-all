#include<iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[100];

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if(top < 99)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1; // Return -1 to indicate stack is empty
        }
    }
    
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl; // Should print 30

    s.pop();
    cout << "Top element after pop: " << s.peek() << endl; // Should print 20

    s.pop();
    s.pop();
    s.pop(); // This will cause stack underflow

    return 0;
}