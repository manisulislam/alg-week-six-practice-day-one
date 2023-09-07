#include<bits/stdc++.h>
using namespace std;

//range 
const int N= 1e6+5;

//dp array
vector<int>dp(N, INT_MAX);
int solve(int n){
    //base case
    if(n==0) return 0;

    //memoization
    if(dp[n]!= INT_MAX) return dp[n];

    vector<int>digit;
    //digit extract
    for(char ch: to_string(n)){
        digit.push_back(ch-'0');
    }

    for(int val: digit){
        dp[n]= min(dp[n], solve(n-val)+1);
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}