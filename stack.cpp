#include<iostream>
#include<stack>
using  namespace std;
int main(){
    stack<int>s;
    s.push(21);
    s.push(22);
    s.push(33);
    s.push(43);
    while(!s.empty()){
        cout<<s.top()<<endl;
         cout<<s.size()<<endl;
        s.pop();
    }
}