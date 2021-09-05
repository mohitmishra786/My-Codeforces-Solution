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

int solver(int index , int f , int s , int k1 , int k2 , string& s1){
	if(index == 10){
		return 0;
	}
	if(f + k1 < s){
		return 0;
	}
	if(s + k2 < f){
		return 0;
	}

	if(s1[index] == '1'){
		if(index % 2 == 0){
			f++;
			k1--;
		}
		else{
			s++;
			k2--;
		}

		return 1 + solver(index + 1 , f , s , k1 , k2 , s1);
	}
	else if(s1[index] == '0'){
		if(index % 2 == 0){
			k1--;
		}
		else{
			k2--;
		}

		return 1 + solver(index + 1 , f , s , k1 , k2 , s1);
	}

	else{
		if(index % 2 == 0){
			return 1 + min(solver(index + 1 , f + 1 , s , k1 - 1 , k2 , s1), solver(index + 1 , f , s , k1 - 1 , k2 , s1));
		}
		else{
			return 1 + min(solver(index + 1 , f , s + 1 , k1 , k2 - 1 , s1) , solver(index + 1 , f , s , k1 , k2 -1 , s1));
		}
	}
}
void solve(){
    //Why it has to be me
    string s;
    cin >> s;
    cout << solver(0,0, 0 , 5 , 5 ,s) << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  //  init_code();

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
