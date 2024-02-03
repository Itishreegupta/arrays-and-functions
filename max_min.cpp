#include <iostream>
using namespace std;

void getMinMax(int arr[] , int n){
   int max = arr[0], min = arr[0];
   for(int i = 1; i < n; i++){
      if(max < arr[i])
         max = arr[i];
      if(min > arr[i])
         min = arr[i];
   }
   cout<<"Maximum Value = "<<max<<"\n";
   cout<<"Minimum Value = "<<min;
}
int main(){
   int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
   int N = 8;
   getMinMax(arr, N);
   return 0;
}
