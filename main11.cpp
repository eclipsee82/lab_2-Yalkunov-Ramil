#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float x,y;
    cout << "Lab2-11" << endl;
    cout << "Enter x: ";
    cin >> x;

    if(x>0 && x<=4){
        y = sin(3.14 * x) + sqrt(pow(x,2) + 6);
    }
    if(x>4){
        y = log(x) + sqrt(3 * x + 7);
    }

    cout << "y = " << y;
    return 0;
}
