#include <iostream>
#include <stdio.h>
using namespace std;

class point{
    public:
        void setpoint(int a, int b);
        int getx();
        int gety();
    private:
        int x;
        int y;
};

inline void point::setpoint(int a, int b){
    x = a;
    y = b;
}

inline int point:: getx(){ return x;}
inline int point:: gety(){ return y;}

int main(){
    point p1, p2;
    int i,j;
    p1.setpoint(1,2);
    p2.setpoint(3,4);
    i = p1.getx();
    j = p2.gety();
    printf(" p1.x = %d, p2.y = %d " , i, j);  
    return 0; 
}