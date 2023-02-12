#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-18" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x<3.28){
        y = x * sin(x);
    }
    if (x>=3.28){
        y = 2 * pow(x,3) + 1.9;
    }
    
    cout << "y = " << y;
    return 0;
}
