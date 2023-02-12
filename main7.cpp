#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-7" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>0 && x<1){
        y = sqrt(3 * pow(x,3) + 4 + cos(x));
    }
    if(x>=1){
        y = 5 - pow(sin(pow(x, 9)), 2);
    }

    cout << "y = " << y;
    return 0;
}
