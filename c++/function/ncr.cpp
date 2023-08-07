#include <iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int ncr(int x,int r){
    int num=fact(x);
    int deno=fact(r)*fact(x-r);

    return num/deno;
}

int main(){
    int n,r;
    cin>>n>>r;

    int a=ncr(n,r);
    cout<<a<<endl;
}