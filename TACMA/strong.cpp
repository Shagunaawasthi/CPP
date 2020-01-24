#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1|| n==0){
        return 1;
    }
    return n*fact(n-1);
}
int strong( int n)
{int flag=0;
    int temp=0,sum=0;
int temp2=n;
    while(temp2){
        temp=temp2%10;
        sum+=fact(temp);
        temp2=temp2/10;
    }
    cout<<sum<<endl;
    if(sum==n){

        flag=1;
    }
    return flag;
}

int main()
{
 int n=145;

cout<<strong(n);

}
