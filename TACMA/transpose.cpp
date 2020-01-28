#include<bits/stdc++.h>
#define R 4
#define C 4
using namespace std;
void transpose(int A[][C], int B[][C]){
 int i, j;
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            B[i][j] = A[j][i];
}
int main(){
 int A[R][C] = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3}};


    int B[R][C], i, j;

    transpose(A, B);

    printf("Result matrix is \n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        printf("%d ", B[i][j]);
        printf("\n");
    }

return 0;}
