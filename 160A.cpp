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
	vi v;
	int g;
	for(int i = 0 ; i < t ; i++){
		cin >> g;
		v.push_back(g);
	}


	int sum = 0;
	int l = 0;
	sort(v.begin(), v.end());
	int z = accumulate(v.begin() , v.end() , 0);
	for(auto m : v){
		cout << m << endl;
	}
	cout << z << endl;
	if(t == 1){
		cout << 1 << endl;
	}
	else if(t == 2){
		if(v[0] == v[1]){
			cout << 2 << endl;
		}
		else{
			cout << 1 << endl;
		}
	}
	else{
		for(int i = t-1 ; i >= 0  ; i--){
			sum = sum + v[t];
			l++;
			if(sum > (z/2)){
				break;
			}

		}

		cout << l << endl;
	}
	
}