#include<bits/stdc++.h>
using namespace std;
int f(int n, int r){
    if(n<r)return 0;
    if(r==0) return 1;
    if(n==r) return 1;
    return f(n-1, r) + f(n-1, r-1);
}
int main(){
    int n, r;
    scanf("%d%d", &n, &r);
    printf("%d", f(n, r));
}