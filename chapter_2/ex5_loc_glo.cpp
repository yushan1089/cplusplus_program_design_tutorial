# include <iostream>
using namespace std;
int avar =10;

int main(){
  int avar;
  avar = 25;
  :: avar = 10;
  cout << 'local = ' << avar <<endl;
  cout << 'global = ' << ::avar <<endl;
  return 0;
}
