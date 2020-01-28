#include<bits/stdc++.h>
using namespace std;


int main(){
    string str = "123456";
    for(int i=0;i<str.length()/2;i++){
            swap(str[i],str[str.length()-i-1]);

    }
    cout<<str;
return 0;
}
