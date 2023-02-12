#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-14" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x > (-1) && x <= 1){
        y = sqrt(fabs(x) + pow(x,4));
    }
    if (x > 1 && x<=4){
        y = pow(tan(3*x), 2) + log(5 * x);
    }
    
    cout << "y = " << y;
    return 0;
}
