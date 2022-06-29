#include<iostream>
#include<stack>
using namespace std;
void printMiddle(stack<int>& st, int totalSize){
    if((totalSize/2) + 1 == st.size()){
        cout << "Middle is "<< st.top() << endl;
        return;
    }
    //step-1
    int topElement=st.top();
    st.pop();

    //step-2
    printMiddle(st,totalSize);

    //styep-3
    st.push(topElement);
}

void insertAtBottom(stack<int> &st, int item){
    //base case
    if(st.empty())
    {
        st.push(item);
        return;
    }
    //step-1
    int topElement=st.top();
    st.pop();

    //step-2
    insertAtBottom(st, item);

    //step-3
    st.push(topElement);
}
void reverse(stack<int>& st){
    //base case
    if(st.empty())
    {
        return;
    }
    //step-1
    int topElement=st.top();
    st.pop();

    //step-2
    reverse(st);
    //step-3
    insertAtBottom(st, topElement);
}

int main(){
    stack<int> st;
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    printMiddle(st, st.size());

    //insertAtBottom(st, 12);

    //reverse(st);

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}