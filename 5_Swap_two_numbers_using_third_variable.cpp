#include<iostream>
using namespace std;
int main(){


int a=300,b=700;

cout<<"Before Swap:a="<<a<<",b="<<b<<endl;

a=a+b;
b=a-b;
a=a-b;

cout<<"after swap:a="<<a<<",b="<<b<<endl;

return 0;
}