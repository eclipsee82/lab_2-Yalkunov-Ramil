#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-13" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>1 && x<=3){
        y = sin(5*x) * sqrt(1 + pow(x,2) + pow(log(x), 2));
    }
    if(x>3 && x<=5){
        y = pow(2.18, x) * sqrt(x + pow(2.18, 2*x));
    }
    
    cout << "y = " << y;
    return 0;
}
