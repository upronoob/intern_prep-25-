
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <utility>
#include <map>
#include <set>
#include <numeric>
#include <math.h>
#include <string.h>
 
using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<long double> vld;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef map<char,int> mci;
typedef set<int> si;
typedef set<char> sc;
typedef set<ll> sll;
typedef vector<ll> vll;
 
 
#define loop(i, l, n) for(decltype(n) i = l; i < n; i++)
#define rloop(i, l, n) for(decltype(n) i =l; i>=n; i--)
#define mk make_pair
#define pb push_back
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
const ll N = 1e9+7;


// vector.push_back(x) adds element x, like append


ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


int main() {
    
    int t;
    cin >> t;  

    while (t--){
        

}

return 0;

}