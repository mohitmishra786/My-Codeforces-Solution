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
bool prime[100];


void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;


	for(int i = 0 ; i < n ; i++){
		if(s[i] == '1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9'){
			cout << 1 << endl;
			cout << s[i] << endl;
			return;
		}
	}

	for(int i = 0 ;i <  n ;i++){
		for(int j = i + 1 ; j < n ; j++){
			if(!prime[(s[i] - '0') * 10 + (s[j]  - '0')]){
				cout << 2 << endl;
				cout << s[i] << s[j] << endl;
				return;
			}
		}
	}

	exit(42);
}
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	init_code();
	
	for(int i = 2; i < 100 ; i++){
		prime[i] = true;
		for(int j = 2 ; j * j <= i ; j++){
			if(i % j == 0){
				prime[i] = false;
			}
		}
	}


	int t;
	cin >> t;
	while(t--){
		solve();
	}	
}