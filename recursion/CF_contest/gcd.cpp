#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0)return b;
    return gcd(b%a, a);
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd(max(a, -a), max(b, -b)));
}