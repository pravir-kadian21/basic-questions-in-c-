// CHECK PRIME
// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

// Input Format:
// Constraints:
// 2 < N <= 1000000000

// Output Format
// Sample Input
// 3
// Sample Output
// Prime
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout << "Not Prime" << endl;
            break;
        }
    }
    if(i==n){
        cout << "Prime" << endl; 
    }
	return 0;
}