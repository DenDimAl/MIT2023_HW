#include <iostream>
using namespace std;
int fib(int n){
	int a = 0;
	int b = 1;
	int count = 0;
	int sum = 0;
	while (count<n-1){
		cout<<a<<endl;
		sum= a + b;
		a = b;
		b = sum;
		count++;
	}
	return a;
}
int main() {
	cout<<"Hello world!"<<endl;
}
