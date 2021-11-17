// coci06c3p1 on dmoj
#include <iostream>
 
using namespace std;
 
int main(){
    int d[9];
    for(int i=0; i<9; i++) cin >> d[i];
 
    for(int b=1; b < 1<<9; b++){
        int s = 0, g = 0;
        for(int i=0; i<9; i++){
            if((b>>i)&1){
                s+=d[i];
                g++;
            }
        }
        if(s == 100 && g == 7){
            for(int i=0; i<9; i++){
                if((b>>i)&1) cout << d[i] << '\n';
            }
            break;
        }
    }
}
