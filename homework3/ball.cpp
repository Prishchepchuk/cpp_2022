#include "iostream"
#include "cmath"
#include <windows.h>

double g = -10;

struct Point{
    double x;
    double y;
};

struct Velocity{
    double vx;
    double vy;
};

class Ball{
    private:
        Point r = {0, 0};
        Velocity v;
        double t, T, V;

    public:
        void push(double alpha, double v_mod){
            v = {v_mod * cos(alpha), v_mod * sin(alpha)};
            V = v.vy;
            T = (double) -2 * V / g;
        };
        void fly(double time){
            double t1;
            t = time;
            r.x = v.vx * t;
            if (T == 0){
                r.y = 0;
            } else {
              int n = (int) t / T;
              t1 = t - n * T;
              r.y = V * t1 + g * t1 * t1 * 0.5;
              v.vy = V + g * t1;
            }
             std::cout << t1 << '\n';
        };
        Point getPosition(){
            return r;
        };
        Velocity getVelocity(){
            return v;
        };

};

int main()
{
    Ball b;
    b.push(1, 100);

    for (int t = 1; t < 100; ++t){
        Point r = b.getPosition();
        Velocity v = b.getVelocity();
        std::cout << "x = " << r.x << ", y = " << r.y << '\n';
        //std::cout << "x = " << v.vx << ", y = " << v.vy << '\n';
        Sleep(1000);
        b.fly(t);
    }

  return 0;
}
