#include<bits/stdc++.h>
using namespace std;

bool solve(int n, int x, int a[], int sum, int i){
    if(i==n) return sum=x;
    if(solve(n,x,a, sum+a[i], i+1)) return true;
    if(solve(n,x,a,sum-a[i], i+1)) return true;
    return false;
}
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(solve(n,x,a,a[0], 1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}