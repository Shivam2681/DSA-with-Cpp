#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    
    solve(s,element);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve( myStack,x);
    return myStack;
}

int main(){
    
    return 0;
}