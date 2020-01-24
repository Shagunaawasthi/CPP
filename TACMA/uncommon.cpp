#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int arr1 [] = {10, 20, 30};
int arr2[] = {20, 25, 30, 40, 50};

int m= sizeof(arr1)/sizeof(int);
int n= sizeof(arr2)/sizeof(int);


int i=0,j=0;
while(i<n && j<m){
        if(arr1[i]< arr2[j]){
            cout<<arr1[i]<<endl;
            i++;

        }
        if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<endl;
            j++;

        }
        else{
            i++;
            j++;
        }

}
while (i < n) {
        cout << arr1[i] << " ";
        i++;

    }
    while (j < m) {
        cout << arr2[j] << " ";
        j++;

    }

    return 0;*/

     int arr1[] = {10, 20, 30};
    int arr2[] = {20, 25, 30, 40, 50};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

     int i = 0, j = 0;
    while (i < n1 && j < n2) {

        // If not common, print smaller
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;

        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << " ";

            j++;
        }

        // Skip common element
        else {
            i++;
            j++;
        }
    }

    // printing remaining elements
    while (i < n1) {
        cout << arr1[i] << " ";
        i++;

    }
    while (j < n2) {
        cout << arr2[j] << " ";
        j++;

    }
}
