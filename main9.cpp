#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-9" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>=0 && x<1){
        y = x * cos(x) + sin(x);
    }
    if(x>=1 && x<=2){
        y = sqrt(pow(x,2) + 6 * sin(x));
    }
    if(x>2){
        y = 1.7 * pow(x,3) + 7;
    }
    
    cout << "y = " << y;
    return 0;
}
