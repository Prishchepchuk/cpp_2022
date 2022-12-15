#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a; float b; float c;
    float x1; float x2;
    float D;
    cin >> a >> b >> c;

    D = 4*a*c - b*b;
    if(D < 0){
        cout << "This quadratic equation has no solutions in R";
    }
    else if(D == 0){
        x1 = -b/(2*a);
        cout << "This quadratic equation has one solution in R: " << x1;
    }
    else{
        x1 = (-b-sqrt(D))/(2*a);
        x2 = (-b+sqrt(D))/(2*a);
        cout << "This quadratic equation has one solution in R: " << x1 << ", " << x2;
    }
    return 0;
}
