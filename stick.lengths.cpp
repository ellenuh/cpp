//cses

#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n;
    int len[100];
    int m=0;
	int ans=0;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> len[i];
        m=m+len[i];
        }
    m = m/n;
    sort (len, len+n);

    for (int i=0; i<n; i++){
     ans+= abs(len[i]-m);
    }
	
	cout <<ans<<endl;
 return 0;
}
