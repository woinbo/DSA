#include <stdio.h>
#include <iostream>

 using namespace std;

 //Head Recursion

void head(int n)
{
    if(n>0){
        head(n-1);
        cout<<n;
    }
}

//Tail Recursion
void tail(int n)
{ 
    if(n>0){
        cout<<n;
        tail(n-1);
    }
}

int main(){
    int x = 3;
    head(x); // 123
    cout<<endl;
    tail(x); // 321
    return 0;
}