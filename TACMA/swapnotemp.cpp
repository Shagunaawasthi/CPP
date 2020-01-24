#include<bits/stdc++.h>
using namespace std;
void swap(int *p1, int *p2){

int t;
t = *p1;
*p1 = *p2;
*p2 = t;
}
int * swapArr(int *arr, int len){
int *t;
for(int i = 0; i < len - 1; i++){

swap(arr + i, arr + i + 1);
}
return arr;
}
int main(){
int n, *p;

cin >> n;
int arr[n];
for(int i = 0; i < n; i++){
cin >> arr[i];
}
p = swapArr(arr, n);
cout << endl;
for(int i = 0; i < n; i++){
cout << *(arr + i) << " ";
}
cout << endl;
return 0;
}
