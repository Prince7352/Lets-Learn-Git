//sorting in stack
#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int data)
{
    //base case
    if(s.empty() || s.top()<data){
        s.push(data);
        return;
    }

    int topElement=s.top();
    s.pop();

    //recursive call
    sortedInsert(s, data);

    s.push(topElement);
}
void sortStack(stack<int> &s)
{
    //base case
    if(s.empty()){
        return;
    }
    int topElement=s.top();
    s.pop();

    //recursive call
    sortStack(s);

    //sorted insert
    sortedInsert(s, topElement);
}

int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    s.push(9);
    s.push(6);

    sortStack(s);
    cout << "Answer is "<< endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}