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

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	init_code();

	int t;
	cin >> t;

	while(t--){
		int a , b , c;
		cin >> a >> b >> c;
		vi m;
		vi n;
		int p ,z , r;
		if(abs(b - 1) == 1){
			cout  << -1 << endl;
		}
		else{
			int p = max(a,b);
			int z = min(a,b);
			r = p - z;
			int j = p;
			for(int i = 0 ; i < r - 1; i++){
				j--;
				m.push_back(j);
			}
			j = z - 1;
			for(int i = 0 ; i < (z - 1) ; i++){
				n.push_back(j);
				j--;
			}
			int u = p + (r-1) - (z-1);
			for(int i = u;i > p ; i--){
				n.push_back(i);
			}


			for(auto ut : m){
				cout << ut << " ";

			}
			cout << endl;
			for(auto yt : n){
				cout << yt << " ";
			}
			cout << endl;
		}
	}
	
}