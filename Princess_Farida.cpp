#include<bits/stdc++.h>
using namespace std;

//dp array
long long dp[10005];


long long knapsack_castle(int i, vector<int>&farida){
    
    //base case
    if(i>=farida.size()) return 0;

    
    //memoization
    if(dp[i] != -1) return dp[i];
    
    //choice
    long long op1= knapsack_castle(i+2, farida)+farida[i];
    long long op2= knapsack_castle(i+1, farida);
   
    dp[i]= max(op1,op2);
    return dp[i];


}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        vector<int>farida(n);
        for(int i=0; i<n; i++){
            cin>>farida[i];
        }
        for(int i=0; i<=n; i++ ){
            dp[i]=-1;
        }
      
        long long result= knapsack_castle(0,farida);
        cout<<"Case " <<i<<": "<<result<<endl;
    }
    return 0;
}