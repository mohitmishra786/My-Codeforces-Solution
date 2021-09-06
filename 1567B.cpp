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
const int N = 3e5 + 5;
int ar[N];

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
 int solve1(){
    int a, b; 
    cin >> a >> b;
    int x = ar[a];
 
    if (x == b)cout << a << endl;
    else if ((x ^ b) == a)
    cout << a + 2 << endl;
    else cout << a + 1 << endl;
 }

void solve(){
    //Why it has to be me
	int a,b;
	cin >> a >> b;

	// if(a == 1){
	// 	if(b == 1){
	// 		cout << 3 << endl;
	// 	}
	// 	else{
	// 		cout << 2 << endl;
	// 	}
	// }
	// else if(a == 2){
	// 	if(b == 1){
	// 		cout << 2 << endl;
	// 	}
	// 	else{
	// 		cout << 3 << endl;
	// 	}
	// }
	// else{
	// 	if(b == 2){
	// 		cout << 3 << endl;
	// 	}
	// 	else{
	// 		cout << 4 << endl;
	// 	}
	// }
	int z = a - 1;
	int p = 0;
	for(int i = 0 ; i <= z ; i++){
		p = (p^i);
	}


		if(b == a){
			if(p == 0){
				cout << a + 2 << endl;
			}
			else{
				cout << a + 1 << endl;
			}
			//cout << a + 2 << endl;
		}
		else if(b == a - 1){
			cout << a << endl;
		}
		else{
			cout << a + 1 << endl;
		}
	
	// else{
	// 	if(b == a){
	// 		cout << a + 1 << endl;
	// 	}
	// 	else if(b == a - 1){
	// 		cout << a  << endl;
	// 	}
	// 	else{
	// 		cout << a + 1 << endl;
	// 	}
	// }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   // init_code();
    
    for (int i = 1; i < N; i++) {
    ar[i] = ar[i - 1] ^ (i - 1);
    }
 
    int t;
    cin >> t;
    while(t--){
    	solve1();
    }
 
 
    return 0;
}
