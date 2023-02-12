#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-5" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>0 && x<2){
        y = pow(x,3) * cos(x);
    }
    if(x>=2){
        y = 3 * pow(x,4) + 7;
    }
    if(x>5 && x<=9){
        y = sqrt(5 * pow(x,2) + 1.6);
    }


    cout << "y = " << y;
    return 0;
}
