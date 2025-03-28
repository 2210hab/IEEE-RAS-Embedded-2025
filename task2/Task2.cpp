#include<iostream>
#include <math.h>
using namespace std;
//============================ problem1 =============================//
/*int isDivisible(int num1, int num2) {
	if (num2 == 0) {
		cout << "Error" << endl;
		return 0;
	}
	return num2 % num1 == 0;
}
int main() {
	int number1, number2;
	cin >> number1 >> number2;
	if (isDivisible(number1, number2)) {
		cout << number1 << " is divisible by " << number2;
	}
	else {
		cout << number1 << " is not divisible by " << number2;

	}
}*/


//=============================== problem 2 =========================//+
/*int isArmstrong(int num) {
	int sum = 0, remainder;
	int countDigit = 0;
	int number = num;

	// to count digits of number
	int temp = num;
	while (temp != 0) {
		temp /= 10;
		countDigit++;
	}
		//
		temp = num;
		while (temp != 0) {
			remainder = temp % 10;
			sum += pow(remainder, countDigit);
			temp /= 10;
		}
		return sum == number;

	}

int main() {
	int lower, upper;
	cout << "enter the lower and upper numbers : ";
	cin >> lower >> upper;
	cout << " Armstrong numbers brtween this are : " << endl;
	for (int i = lower; i <= upper; i++) {
		if (isArmstrong(i)) {
			cout << i << "  ";
		}
	}
	return 0;
}*/

//======================= problem 3 =====================//
// https://codeforces.com/group/MWSDmqGsZm/contest/223205/submission/312777198

//====================== problem 4 ======================//
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312778557

// ====================== problem 5 ======================//
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312780362

//====================== problem 6 ======================//
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312781962

//===================== problem 7 =====================//
/*#include <iostream>
using namespace std;
 
int gcd(int a, int b) {
	if (b == 0) return a; 
	return gcd(b, a % b); 
}

int main() {
	int num1, num2;
	cout << "first number: ";
	cin >> num1;
	cout << "second number: ";
	cin >> num2;

	cout << "GCD of " << num1 << " and " << num2 << " = " << gcd(num1, num2) << endl;

	return 0;
}*/

// =====================  problem 8 =====================
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312785886
//======================= problem "Bouns" ===================
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312786933

 

