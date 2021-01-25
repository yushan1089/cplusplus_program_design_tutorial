# include <iostream>
using namespace std;

class timer{
    public:
        timer(){seconds = 0;}
        timer(char* t){ seconds = atoi(t);}
        timer(int t){ seconds = t;}
        timer(int min, int sec){ seconds = 60*min + sec;}
        int getTime(){return seconds;}
    private:
        int seconds;
};

int main(){
    timer a;
    timer b(10);
    timer c("12"); // this one have a char* warning
    timer d(12, 2);
    cout << "timer a time" << a.getTime() <<endl;
    cout << "timer b time" << b.getTime() <<endl;
    cout << "timer c time" << c.getTime() <<endl;
    cout << "timer d time" << d.getTime() <<endl;
    return 0;
}