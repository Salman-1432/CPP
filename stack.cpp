#include<iostream>
#include<stdlib.h>
using namespace std;
class Stack{
    private:
        int arr[100];
        int top = -1;
    public:
        void push(int = 0);
        int pop();
        bool isEmpty();
        bool isFull();
        void print();
};
void Stack::print(){
    for(int i = top; i>-1; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Stack::push(int x)
{
    if(isFull())
        cout<<"Stack is Full --Overflow"<<endl;
    else{
        arr[++top] = x;
        cout<<arr[top]<<" is pushed"<<endl;
    }
}
int Stack::pop(){
    if(isEmpty())
        cout<<"Stack is empty -- Underflow"<<endl;
    else{
        return arr[top--];
    }
}
bool Stack::isEmpty(){
    return top < 0 ? true : false;
}
bool Stack::isFull(){
    return top > 99 ? true : false;
}
int main()
{
    Stack s;
    while(true){
        cout<<"1.Push\n2.Pop\n3.Is Empty\n4.Is Full\n5.Print element\n6.Exit"<<endl;
        int ch;
        cout<<"Enter your choice:";
        cin>>ch;
    switch(ch){
            case 1:
                cout<<"Enter a value to push:";
                int val;
                cin>>val;
                s.push(val);
                break;
            case 2:
                cout<<"Value of pop = "<<s.pop()<<endl;
                break;
            case 3:
                if(s.isEmpty())
                    cout<<"Stack is empty"<<endl;
                else
                    cout<<"Stack is not empty"<<endl;
                break;
            case 4:
                if(s.isFull())
                    cout<<"Stack is Full"<<endl;
                else
                    cout<<"Stack is not Full"<<endl;
                break;
            case 5:
                s.print();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}