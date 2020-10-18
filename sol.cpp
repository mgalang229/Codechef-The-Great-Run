#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int mx=0;
		for(int i=0; i<n; ++i) {
			int tmp=k, cnt=i, sum=0;
			while(tmp--&&cnt!=n)
				sum+=a[cnt++];
			mx=max(mx, sum);
		}
		cout << mx << "\n";
	}
}
