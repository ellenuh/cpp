#include <cmath>
#include <iostream>
#define pi 3.141592653
using namespace std;
	/* vehicle is moving at constant speed, 
	so: Δx= u*Δt, however u=1 m/s, 
	therefore Δx=Δt.
	*/

int main() {
  double u,h;

  cin>>h>>u;             

  if (h==0){
		cout << 0;}	

	else if (0 <=u && u <=180 ){
		cout << "safe"<< "\n";
	} 
		else {
			cout << floor(-1 * h / sin(u * (pi/180)));
		}
  
  return 0;
  }
