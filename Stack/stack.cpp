#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int s){
        arr=new int[s];
        top=-1;
        size=s;
    }
    void push(int d){
        //first check if array is full
        if(top==size-1){
            
            cout << "Stack Overflow for element" << d << endl;
            return;
        }
        top++;
        arr[top]=d;
    }
    void pop(){
        //check if array is empty or not
        if(top==-1){
            cout << "stack underflow" << endl;
        }
        top--;
    }
    int getsize(){
        //it returns no of elemnt in stack
        return this->top+1;
    }
    int getTop(){
        if(top !=-1)
            return arr[top];
        else
            return -1;
        
    }
    bool isEmpty(){
        if(top==-1)
        return 1;
        else
        return 0;
    }
};

int main(){
//creation of stack 
stack<int> st;
//Stack st=newStack(10);
//insertion
st.push(5);
st.push(7);
st.push(9);
//check size
cout << st.size() << endl;
//check empty or not
cout << st.empty() << endl;
//top element
cout << st.top() << endl;
//remove element from top
st.pop();
//top element
cout << st.top() << endl;
return 0;
}