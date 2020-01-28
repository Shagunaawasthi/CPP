
#include<bits/stdc++.h>
using namespace std;
int main(){
string str= "racecar";
int i=0,j=str.length()-1;
while(i<str.length()-1 && j>0){
    if(str[i]!=str[j]){
        cout<<"not a palindrom";
        break;
    }

    j--;
    i++;

}

return 0;


}
