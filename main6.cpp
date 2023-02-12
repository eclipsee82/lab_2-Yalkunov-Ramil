#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-6" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x<1.5){
        y = x * tan(x);
    }
    if(x>=1.5 && x < 2.5){
        y = pow(x,3) + sin(x);
    }
    if(x>=2.5){
        y = 3 * pow(x,3) + 5;
    }



    cout << "y = " << y;
    return 0;
}
