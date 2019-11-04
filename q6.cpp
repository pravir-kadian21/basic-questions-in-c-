// DECIMAL TO OCTAL
// Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

// Input Format:
// Constraints:
// 0 < N <= 1000000000

// Output Format
// Sample Input
// 63
// Sample Output
// 77
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
    int a[1000000];
	while(n!=0){
		int rem=n%8;
		a[i]=rem;
		i++;
		n=n/8;
	}
	for(int j=i-1;j>=0;j--){
		cout << a[j];
	}
}