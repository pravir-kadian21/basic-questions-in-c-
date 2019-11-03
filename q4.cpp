// VON NEUMAN LOVES BINARY
// Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

// Input Format:
// The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

// Constraints:
// N<=1000 Digits in binary representation is <=16.

// Output Format
// N lines,each containing a decimal equivalent of the binary number.

// Sample Input
// 4
// 101
// 1111
// 00110
// 111111
// Sample Output
// 5
// 15
// 6
// 63
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++){
		int n;
		cin>>n;
		int sum=0;
		int j=0;
		while(n!=0){
			int ld=n%10;
			int val=ld*pow(2,j);
			sum=sum+val;
			j++;
			n=n/10;
		}
        cout << sum << endl;
	}
	return 0;
}