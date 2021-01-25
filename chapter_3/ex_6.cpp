# include <iostream>
# include <string>
using namespace std;

class girl{
    public: 
        girl(char * n, int d){
            name = new char[strlen(n)+1];
            strcpy(name, n);
            age =d;
        }

        friend void disp(girl &);
            ~girl(){delete name;}

    private:
        char * name;
        int age;
};