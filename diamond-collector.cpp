#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	int a[n];

	cin>>n>>k;
	int i;
	for (i=0; i<n; i++){
		cin>>a[i];
	}
	sort (a,a+n);

	int ans=0;

	for (int i=0;i<n;i++) {
	int cnt=1;
	for (int j=i+1;j<n;j++) {
			if (a[j]-a[i]<=k) cnt++;
		}
		ans=max(cnt,ans);
	}
	cout << ans;
	return 0;
}
