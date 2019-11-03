// BINARY TO DECIMAL
// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

// Input Format:
// Constraints:
// 0 < N <= 1000000000

// Output Format
// Sample Input
// 101010
// Sample Output
// 42
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
    int val;
    int sum=0;
	while(n!=0){
		int ld=n%10;
		val=ld*pow(2,i);
        sum=sum+val;
		i++;
		n=n/10;
	}
	cout << sum << endl;
	return 0;
}