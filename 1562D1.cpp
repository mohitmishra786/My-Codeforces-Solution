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
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    init_code();

    int t;
    cin >> t;
    while(t--){
       int n , q;
       cin >> n >> q;
       string s;
       cin >> s;
       int sum[n + 1];
       for(int i = 0 ; i < n ; i++){
            // if(s[i] == '+'){
            //     if(i % 2 == 0){
            //         sum[i]  = sum[i - 1] +  1;
            //     }
            //     else{
            //         sum[i] = sum[i - 1] - 1;
            //     }
            // }
            // else{
            //     if(i % 2 == 0){
            //         sum[i] = sum[i - 1] -1;
            //     }
            //     else{
            //         sum[i] =sum[i - 1] + 1;
            //     }                
            // }

            sum[i+1]=sum[i]+((s[i]=='+')^(i%2)?1:-1);
       }


       int a , b;
       while(q--){
            cin >> a >> b;
            // int sum = 0;
            // for(int i = a - 1; i < b ; i++){
            //     if(i % 2 != 0){
            //         sum -= arr[i];
            //     }
            //     else{
            //         sum += arr[i];
            //     }
            // }

            // if(sum == 0){
            //     cout << 0 << endl;
            // }
            // else if(sum % 2 == 0){
            //     cout << 2 << endl;
            // }
            // else if(sum % 2 != 0){
            //     cout << 1 << endl;
            // }


            if(sum[b] == sum[a - 1]){
                cout << 0 << endl;
            }
            else if((b - a + 1) % 2 == 0){
                cout << 2 << endl;
            }
            else if((b - a + 1) % 2 != 0){
                cout << 1 << endl;
            }
       }
    }

}