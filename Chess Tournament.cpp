/**
 *    author:  immadmohit      
**/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ff first
#define ss second
#define vec vector
#define pb push_back
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mod(a,b) (a%b+b)%b
#define ceil(a,b) ((a+b-1)/b)
#define flushout cout.flush();
#define sz(x) ((int) (x).size())
#define __lcm(a,b) (a*b)/__gcd(a,b)
#define all(x) (x).begin(), (x).end()
#define vin(a) for(auto &ii : a)cin>>ii
#define f(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define dbg(x) cout<<'>'<< #x <<':'<< x <<endl;
#define pout(x,n) cout<<fixed<<setprecision(x)<<n
#define vout(v) for(auto ii:v)cout<<ii<<' ';cout<<endl;
const int M = 1000000007;

/* CODE STARTS HERE */

void init_code(){
    #ifndef Mohit_Mishra
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif
}

void use_this_for_prime_generator(){
    bool prime[100];
    for(int i = 2; i < 100 ; i++){
        prime[i] = true;
        for(int j = 2 ; j * j <= i ; j++){
            if(i % j == 0){
                prime[i] = false;
            }
        }
    }
}


void solve(){
    //Why it has to be me
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0 ; i < n ; ++i){
        if(s[i] == '2'){
            v.push_back(i);
        }

    }
    

    if(v.size() == 1 || v.size() == 2){
        cout << "NO" << endl;
    }
    else{
    vector<string> ans(n , string(n ,'='));
    for(int i = 0 ; i < n ; ++i){
        ans[i][i] = 'X';
    }

    for(int i = 0 ; i < (int)v.size() ; ++i){
        int j = i + 1 ; if(j == (int)v.size()) j = 0;        
        ans[v[i]][v[j]] = '+';
        ans[v[j]][v[i]] = '-';
    }

    cout << "YES" << endl;
    for(auto m : ans){
        cout << m << endl;
    }
}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    //init_code();

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
