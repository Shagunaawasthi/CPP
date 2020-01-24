#include<bits/stdc++.h>
using namespace std;
int main(){
int n=7;
int sqr= n*n;
int temp=sqr;
int last= temp%10;
if(last==n){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
return 0;
}

