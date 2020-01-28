
#include<bits/stdc++.h>
using namespace std;
int main(){
    float num= 100001;
    int rev=0;
    int temp=num;
    while(temp){
        rev= rev*10 + temp%10;
        temp=temp/10;
    }
    if(rev==num){
        cout<<"yes"<<endl;

    }
    else{
        cout<<"no";
    }
        return 0;
}
