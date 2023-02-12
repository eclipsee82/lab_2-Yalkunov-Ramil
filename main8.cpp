#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-8" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x > (-5) && x<0){
        y = sqrt(pow(x,2) + fabs(x));
    }
    if(x>=0 && x<2){
        y = 5 * pow(x,3) + cos(x);
    }
    
    cout << "y = " << y;
    return 0;
}
