#include<iostream>
using namespace std;

int getmultiplication(int x , int y , int z){
    int result =x*y*z;
    return result;
}

void printnametentimes(){
    for(int i=1;i<=10;i++)
 cout<< "sana"<<endl;
 return; //return without value
}
void printmultiples(int num){
    for(int i=1;i<=10;i++)
 cout<< num*i<<endl;
}
int convertintocelcius(int far){
   int celcius =(far-32)*5/9;
   return celcius;
}
char convertintouppercase(char ch){
    char answer= ch-'a'+'A';
    return answer;
}
int main(){
//function call

// int multiplicationanswer=getmultiplication(5,4,3)
// cout<<multuplicationanswer <<endl;

// printnametentimes();
// int m=5;
// printmultiples(m);
// int far=32;
// int ans =convertintocelcius(far);
// cout<<" in celcius:" <<ans <<endl;
char result = convertintouppercase('k');
cout<< result <<endl;
    return 0;
}