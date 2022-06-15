#include <bits/stdc++.h>
using namespace std;

vector <int> query (vector<int>nums, int len){
	vector<int> sq (len,0);
	for (int i=0; i<nums.size(); i++){
		int sqrtidx = i/len;
		sq[sqrtidx] += nums[i];
	}
	return sq;

}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

	int n,q;

	cin>>n>>q;

	//not finished
}
