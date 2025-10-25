#include<iostream>
using namespace std;

void chewbacca(long long num) {
    long long ans = 0;
    long long powerOfTen = 1;
	while(num > 0){
        int digit = num%10;
        //compare digit with 9-digit, and set it to min of these 2

        //before making this below update, i need to make sure that
        //num >= 10 || digit != 9
        //this checks that 
        //if number is >= 10 (there are more than one digits) OR the digit is not 9
        if(num >= 10 || digit !=9) digit = min(digit,9-digit);
        ans = ans + digit*powerOfTen;
        powerOfTen *= 10;
        num/=10;
    }
    cout << ans;
}
int main() {
    long long n;
    cin >> n;
    chewbacca(n);
    return 0;
}