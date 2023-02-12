#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-15" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x> (-1) && x<7){
        y = 7 * pow(x,2) + 8.1;
    }
    if (x>=7){
        y = pow(x,2) + cos(x);
    }
    
    cout << "y = " << y;
    return 0;
}
