#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-10" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>0){
        y = pow(x,2) * sin(x) + sqrt(pow(x,2) + 1.2);
    }
    if(x>2 && x<=6){
        y = pow(tan(x),2) + cos(x) + 3.5;
    }
    
    cout << "y = " << y;
    return 0;
}
