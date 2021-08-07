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

void run_case(){
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int z;
		int e = 0 , o = 0;
		while(n--){
			cin >> z;
			if(z==2){
				e++;
			}
			else
				o++;
		}

		if((e % 2==0) and (o % 2==0)){
			cout << "YES" << endl;
		}
		else if(((e % 2 != 0) and (o % 2 == 0)) and o > 0){
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}