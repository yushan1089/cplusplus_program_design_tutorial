# include <stdio.h>

int add(int a, int b);

int main(){

  int x,y, sum;
  printf("put x,y \n");
  scanf("%d", x);
  scanf("%d", y);
  sum = add(x,y);
  printf("sum is = %d" , sum);
  return 0;
}

int sum( int a, int b){
  return a+b;
}
