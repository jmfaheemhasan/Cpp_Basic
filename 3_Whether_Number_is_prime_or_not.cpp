#include<iostream> 
using namespace std;
int main(){
int num,i,isprime=1;

cout<<"Enter the number:";
cin>>num;

if(num<=1)
isprime=0;


else {
    for(i=2;i<num;i++){
        if(num%i==0){
            isprime=0;
        }
    }
}


if(isprime==1)
cout<<num<<" is a prime number:";
else
cout<<num<<" is not a prime number:";


return 0;


}










