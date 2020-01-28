#include<bits/stdc++.h>
#define R 4
#define C 4
using namespace std;

int main(){

	int mat1[R][C];
	int mat2[R][C];
	int mat3[R][C];
	for(int i=0i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mat1[i][j];
        }
	}
	for(int i=0i<R;i++){
        for(int j=0;j<C;j++){
            cin>>mat2[i][j];
        }
	}
for(int i=0i<R;i++){
        for(int j=0;j<C;j++){
            mat3[i][j]= mat1[i][j]+mat2[i][j];
        }
	}
	for(int i=0i<R;i++){
        for(int j=0;j<C;j++){
            cout<<mat3[i][j];
        }
	}

return 0;
}
