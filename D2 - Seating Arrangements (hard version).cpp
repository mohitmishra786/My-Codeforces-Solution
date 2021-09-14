/**
 *    author:  immadmohit      
**/

#include<bits/stdc++.h>
using namespace std;
// #define int long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
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
    int n , m;
    cin >> n >> m;
    vector<pair<int,int> >v;
    for(int i = 0 ; i < n * m ; i++){
        int x;cin >> x;
        v.pb({x,i});
    }

    sort(v.begin(),v.end());

    for(int i = 0 ; i < n * m;){
        int j = i;
        while(j < n * m and v[j].first == v[i].first){
            j++;
        }

        int prev = i;

        for(int k = i ; k < j ; k++){
            if((k + 1) % m == 0){
                reverse(v.begin() + prev, v.begin() + k + 1);
                prev = k + 1;
            }
        }
        if(prev != j){
            reverse(v.begin() + prev, v.begin() + j);
        }
        i = j;
    }
        map<int,int> mp;
        for(int i = 0 ; i < n*m ; i++){
            mp[v[i].second] = i;
        }

        ordered_set s[n];
        int ans = 0;int it = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j= 0 ; j < m ; j++){
                int p = mp[it];
                it++;
                ans += s[p/m].order_of_key(p);
                s[p/m].insert(p);
            }
        }
            cout << ans << endl;
    }


    
    


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   // init_code();

    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
