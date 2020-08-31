#include<bits/stdc++.h>
using namespace std;
int arr[1001];

int f(int n){
    if(n==0)
        return arr[0];
    return max(arr[n], f(n-1));
}
int main(){
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;++i){
        scanf("%d", &arr[i]);
    }
    printf("%d", f(n-1));
}