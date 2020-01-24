#include<bits/stdc++.h>
using namespace std;
void SOE(int n){
bool prime[n+1];
 memset(prime, true, sizeof(prime));
 for(int i=2;i*i<n;i++){
    if(prime[i]){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
 }
    for (int p=2; p<=n; p++)
       if (prime[p])
          cout << p << " ";

}
int main(){
int n = 30;

    SOE(n);
    return 0;
return 0;
}
