#include<iostream>
using namespace std;

long long int factorial(long long int);

int main(){
	long long int x,f;
	cout<<"Enter number : ";
	cin>>x;
	f=factorial(x);
	cout<<"The factorial is :"<<f;
	
	return 0;
}

long long int factorial(long long int a){
	long long int fact=1;
	while(a>=1){
		fact=fact*a;
		a--;
	}
	return fact;
}