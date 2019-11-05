// IS ARMSTRONG NUMBER
// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where armstrong number is defined as follows

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
// Print the value returned.

// Input Format:
// Integer

// Constraints:
// 0 < N < 1000000000

// Output Format
// Boolean

// Sample Input
// 371
// Sample Output
// true
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int i=0;
	int no=n;
	int no1=n;
	while(no!=0){
		i++;
		no=no/10;
	}
	while(n!=0){
		int ld=n%10;
		sum=sum+pow(ld,i);
		n=n/10;
	}
	if(sum==no1){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;

	}
}