// PRINT REVERSE
// Take N as input, Calculate it's reverse also Print the reverse.

// Input Format:
// Constraints:
// 0 <= N <= 1000000000

// Output Format
// Sample Input
// 123456789
// Sample Output
// 987654321
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int ld=n%10;
		cout << ld;
		n=n/10;
	}
	return 0;
}