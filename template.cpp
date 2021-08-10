/*
	Name: DEVARAJA G
	Github: https://github.com/codizt/CompetitiveProgramming
	Competition: 
	Problem:
	Link:
*/

#include <bits/stdc++.h>

#define FOR0(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define FORC(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) 
#define FORR0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 
#define FORR1(i, n) for (int i = (int)(n); i >= 1; --i) 

#define PB push_back
#define MP make_pair
#define FI first
#define SE second

#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin, (x).rend() 

#define TR(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define PRESENT(c,x) ((c).find(x) != (c).end())
#define CPRESENT(c,x) (find(all(c),x) != (c).end())
#define SZ(a) int((a).size())

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef pair<int, int> II;
typedef vector<II> VII;
typedef long long LL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef double LD;

void solve(){
	
}

int main(){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int tc;
	cin >> tc;
	for(int i=1;i<=tc;i++){	
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}
