#include <stdio.h>

void numbers(int a, int b){
  int number = a * b;
  printf("The product is %d \n",number);
}

void roundto3DP(double a){
  printf("%lf rounded to 1 decimal point is %0.1lf \n",a,a);
  printf("%lf rounded to 2 decimal points is %0.2lf \n",a,a);
  printf("%lf rounded to 3 decimal points is %0.3lf \n",a,a);
}

void shortTest(){
  short test = 32767;
  printf("The max short is %hi \n",test);
  printf("Max + 1 is %hi \n", test + 1);
}

void unsignedTest(){
  unsigned short USshort = 65535;
  printf("The number is %hu \n",USshort);
  printf("The number + 1 is %hu \n",USshort + 1);
}

int main() {
  shortTest();
  unsignedTest();
  numbers(6,7);
  roundto3DP(5.1943941);
  printf("Good News Everyone!\n");
  return 0;
}
