#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-19" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x>0 && x<8){
        y = pow(x,2) * sin(x);
    }
    if(x>=8){
        y = 2 * pow(x,4) + 6;
    }
    if(x>5 && x<=6){
        y = sqrt(3 * pow(x,3) + 2.3);
    }


    cout << "y = " << y;
    return 0;
}
