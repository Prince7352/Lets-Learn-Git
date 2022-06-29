#include<iostream>
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
            using std::cout;
            using std::endl;
            cout << "Stack Overflow for element" << d << endl;
            return;
        }
        top++;
        arr[top]=d;
    }
};

int main(){
//creation of stack 
//Stack<int> st;
Stack st=new Stack(10);
//insertion
st.push(1);
st.push(2);
st.push(9);
//check size
using std::cout; 
using std::endl;
cout << st.size() << endl;
//check empty or not
cout << st.empty() << endl;
//top element
cout << st.top() << endl;
return 0;
}