// Source: https://usaco.guide/general/io

#include <iostream>
using namespace std;

int main() {
 int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    int sum = a + b + c;
    if (sum != 180) {
        cout << "Error";
    }
    else if (a == 60 && b == 60){
        cout << "Equilateral";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene" << endl; }
	

		return 0;
}
