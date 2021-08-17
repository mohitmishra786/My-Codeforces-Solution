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

	string s;cin >> s;

	for(int i = 0 ; i < s.length() ; i++){
		if(s[i] != 'W' or s[i + 1] != 'U' or s[i + 2] != 'B'){
			cout << s[i];
			if(s[i + 1] == 'W' and s[i + 2] == 'U' and s[i + 3] == 'B'){
				cout << " " ;
			}
		}
		else{
			i+=2;
		}
	}

	
}