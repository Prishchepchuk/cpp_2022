#include <iostream>
#define _USE_MATH_DEFINES
#define M_PI
#include <cmath>
#include <math.h>


using namespace std;

float Force(float x){
    x *= pow(10,5);
    return(x);
}

float Work(float x){
    x *= pow(10,7);
    return(x);
}

float electric_capacitance(float x){
    const float c = 3*pow(10,8);
    x *= pow(10,9)/(c*c);
    return(x);
}

float magnetic_field_strength(float x){
    const float pi = M_PI;
    x *= pow(10,3)/(4*pi);
    return(x);
}

int main(){

float y = 15;
float x = magnetic_field_strength(y);
cout << x;

    return(0);
}
