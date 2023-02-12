#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-20" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x<1.7){
        y = x * cos(x);
    }
    if(x>=1.7 && x<9.5){
        y = pow(x,3) + sin(x);
    }
    if(x>=9.5){
        y = 2 * pow(x,3) + 2;
    }
    
    cout << "y = " << y;
    return 0;
}
