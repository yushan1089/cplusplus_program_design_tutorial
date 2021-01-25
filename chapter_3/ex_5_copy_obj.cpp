# include <iostream>
using namespace std;

class point{
    public:
        point(int a, int b){ x=a; y=b;}
        point(point & p){ x = 2*p.x ; y = 2*p.y; }
        void print_point(){ cout << "x: " << x << "y: " << y << endl; }
    private: 
        int x; int y;
};

int main(){
    point p1(3,4);
    point p2(p1);
    p2.print_point();
    return 0;
}