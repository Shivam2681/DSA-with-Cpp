#include<iostream>
using namespace std;

int setbit(int a){
    int count = 0;
    while (a!=0){
    if (a&1)
    {
        count++;
    }
    a=a>>1;
   }
   return count;

}

int bit(int b){
    int count = 0;
    while (b!=0){
    if (b&1)
    {
        count++;
    }
    b=b>>1;
   }
   return count;
}


int main(){
    int a,b;
    cin>>a>>b;

    cout<<setbit(a)+bit(b);
    return 0;
}