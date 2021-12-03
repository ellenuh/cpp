//cses (not finished)

#include <iostream>
using namespace std;

int main() {
    int maxn = 2e5+1;
int n, m, k, a[maxn], b[maxn];

    cin >> n >> m >> k;

    for(int i = 0; i < n; i++)  
cin >> a[i];
    for(int i = 0; i < m; i++) 
    cin >> b[i] ;

    sort(a, a+n);

    sort(b, b+m);

    for (int j=0; j < m; j++){
        int i=0;
        while (i<n){
    if (b[j] <= a[i]-k && i >= a[i]+k)
        }
        if 
    cout <<  ;

    }
    
}
