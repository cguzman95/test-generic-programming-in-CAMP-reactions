#include <stdio.h>

void f1(const double a, const double* x, const int* int_data, double* x2){
  if (int_data[1] >= 0) x2[int_data[1]] += a*x[int_data[1]];
}
void f2(const double a, const double* x, const int* int_data, double* x2){
  for (int i=1; i<int_data[0]; i++){
    if (int_data[i] >= 0) x2[int_data[i]] += a*x[int_data[i]];
  }
}
int main(int argc, char *argv[]) {
  constexpr double a=2.0;
  constexpr int int_data[3] = {3,1,2};
  double x[3] = {1.0,2.0,3.0};
  double x2[3] = {0.0,0.0,0.0};
  f1(a, x, int_data, x2);
  f2(a, x, int_data, x2);
  for (int i = 0; i < 3; i++){
    x[i]=x2[i];
    printf("%lf ",x[i]);
  }
  printf("End\n");
  return 0;
}