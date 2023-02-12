#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-12" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>0 && x<=2){
        y = sqrt(1.7 * x + sin(x));
    }
    if(x>2 && x<=6){
        y = cos(3.14 * x) + tan(x);
    }
    
    cout << "y = " << y;
    return 0;
}
