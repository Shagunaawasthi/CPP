//sum of proper divisors are greater than the number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=12;
int temp=n;
int sum=0;
for(int i=2;i<n/2;i++){
    if(n%i==0){
        sum+=i;
    }
}
sum+=1;
sum+=n;
if(sum>=n){
    cout<<"yes";
}
else{
    cout<<"no";
}
return 0;
}
