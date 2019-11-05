// COUNT DIGITS
// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.

// Input Format:
// Integer (A number) Integer (A digit)

// Constraints:
// 0 <= N <= 1000000000 0 <= Digit <= 9

// Output Format
// Integer (count of times digit occurs in the number)

// Sample Input
// 5433231 
// 3
// Sample Output
// 3
#include<iostream>
using namespace std;
int main() {
    char ch[1000000000];
    cin>>ch;
    int digit;
    cin>>digit;
    int count =0;
    for(int i=0;ch[i]!='\0';i++){
        int no;
        no=ch[i]-'0';
        if(no==digit){
            count++;
        }
    }
    cout << count;
	return 0;
}