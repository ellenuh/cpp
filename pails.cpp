#include <iostream>
using namespace std;

int main(){
	int x, y;
	cin>>x>>y;
	int m;
	cin>>m;

	int final = 0;
	
	for(int i=0; i*x<=m; i++){
		for(int j=0; i*x + j*y<=m; j++){
		if(i*x + j*y > final){
		final = i*x + j*y;
	}
	}
	}
	cout<<final;
}
