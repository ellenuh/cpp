#include <bits/stdc++.h>
using namespace std;
 
int ways(int n)
{
    if (n == 0) {
        return 1;
    }
    int cnt = 0;
    for (int i = 1; i <= 6; i++) {
 
        if (n - i >= 0) {
 
            cnt = cnt+ways(n - i);
        }
    }
    return cnt;
}

int main()
{
    int n;
	cin >> n;
    cout << ways(n);
 
    return 0;
}
