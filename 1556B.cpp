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
        ll n;
        cin >> n;
        ll arr[n];
      	ll e = 0;ll o = 0;
      	for(ll i = 0 ; i < n ; i++){
      		cin >> arr[i];
      		if(arr[i] % 2 == 0){
      			e++;
      		}
      		else{
      			o++;
      		}
      	}
      	ll sol = 0;
      	ll ans = 1;
      	cout << e << " " << o  << endl;
      	if(abs(e - o) > 1){
      		cout << -1 << endl;
      	}
      	else{
      	
      		if(n == 1){
      			cout << 0 << endl;
      		}
      		else if(arr[0] % 2 == 0){
      			ll z = arr[0] % 2 ;
      			for(ll i = 1 ; i < n; i++){
      				if(arr[i] % 2 == z){
      					ans++;
      				}
      				else{
      					ans--;
      					sol+=ans;
      				}
      			}
      			cout << sol << endl;
      		}
      		else{
      			ll z = arr[0] % 2 ;
      			for(ll i = 1 ; i < n; i++){
      				if(arr[i] % 2 == z){
      					ans++;
      				}
      				else{
      					ans--;
      					sol+= ans;
      				}
      			}
      			cout << sol << endl;
      		}
      	}      		
      	
    }

}