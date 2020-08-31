#include<bits/stdc++.h>
using namespace std;
int arr1[101][101], arr2[101][101];
void f(int i, int j, int C){
    if(i<0)
        return;
    if(j<0){
        f(i-1, j=C-1, C);
        return;
    }
    arr1[i][j] = arr1[i][j] + arr2[i][j];
    f(i,j-1,C);
    
}
int main(){
    int R, C;
    scanf("%d%d", &R, &C);
    for(int i=0;i<R;i++)
        for(int j=0;j<C;++j)
            scanf("%d", &arr1[i][j]);
    
    for(int i=0;i<R;i++)
        for(int j=0;j<C;++j)
            scanf("%d", &arr2[i][j]);

    f(R-1, C-1, C);
    for(int i=0;i<R;i++){
        for(int j=0;j<C;++j){
            if(j==0) printf("%d", arr1[i][j]);
            else printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
}