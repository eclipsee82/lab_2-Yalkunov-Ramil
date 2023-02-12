#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-17" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x<1.5){
        y = x* cos(x);
    }
    if(x>=1.5 && x<7.5){
        y = pow(x,3) + sin(x);
    }
    if(x>=7.5){
        y = 9 * pow(x,3) + 8;
    }
    
    cout << "y = " << y;
    return 0;
}
