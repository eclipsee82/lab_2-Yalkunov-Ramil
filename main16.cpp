#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-16" << endl;
    cout << "Enter x: ";
    cin >> x;

    if (x>=0){
        y = sqrt(pow(x,2) + 3);
    }
    if(x>(-5) && x<0){
        y = 4 * pow(x,4) + 1;
    }
    
    cout << "y = " << y;
    return 0;
}
