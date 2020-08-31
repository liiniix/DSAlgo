#include<bits/stdc++.h>
using namespace std;
int arr[9];
vector<string>sorted;
void f(int st, int nd){
    if(st>nd){
        string s;
        for(int i=1;i<nd;++i)s+=('0'+arr[i]), s+=' ';
        s+=arr[nd]+'0';
        sorted.push_back(s);
        return;
    }
    for(int i=st;i<=nd;++i){
        swap(arr[st], arr[i]);
        f(st + 1, nd);
        swap(arr[st], arr[i]);
    }

}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=1;i<=n;++i)arr[i]=i;

    f(1, n);
    sort(sorted.begin(), sorted.end());
    for(int i=0;i<sorted.size();++i)
        cout<<sorted[i]<<endl;
}