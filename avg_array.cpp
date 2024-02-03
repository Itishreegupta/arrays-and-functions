#include <iostream>
using namespace std;
int main() {
   int n,i;
   float sum = 0, avg;
   float num[] = {1, 33, 93, 87, 21};
   n = sizeof(num) / sizeof(num[0]);
   for(i = 0; i < n; i++)
   sum += num[i];
   avg = sum / n;
   cout<<"Average of all array elements is "<<avg;
   return 0;
}