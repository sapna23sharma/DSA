#include<iostream>
using namespace std;

int sum(int a , int b){
    int totalsum =a+b;
    return totalsum;
}
//void function will not return any value
//void printmyname(){
// cout<< "sana"<<endl;
//}
int main(){
//call
int ans= sum(5,10);
cout<< ans <<endl;

// function call(void)
//printmyname();

    return 0;
}