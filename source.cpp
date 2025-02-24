// Example 3.1

//#include<iostream>
//using namespace std;
//int fact(int n) {
//	if(n == 0) {
//		return 1;
//	}
//	else {
//		return n * fact(n - 1);
//	}
//}
//int main() {
//	int m;
//	cout << "Enter the number ";
//	cin >> m;
//	cout << fact(m);
//	return 0;
//}

// Example 3.2

//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	_getch();
//	return 0;
//}

// Example 3.3

//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int Power(int x, int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return Power(x, n - 1) * x;
//	}
//}
//int main() {
//	cout<<Power(3, 2);
//	_getch();
//	return 0;
//}

// Exercise 3.1

//#include <iostream>
//#include <math.h> 
//using namespace std;
//
//int main() {
//    cout << "N\t2^N" << endl;
//
//    for (int i = 0; i <= 20; i++) {
//        cout << i << "\t" << pow(2, i) << endl;
//    }
//
//    return 0;
//}

// Example 3.4 + Exercise 3.2

//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int Ackermann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0) {
//		return Ackermann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0) {
//		return Ackermann(m - 1, Ackermann(m, n - 1));
//	}
//}
//int main() {
//	cout << Ackermann(3, 4);
//	_getch();
//	return 0;
//}

// Exercise 3.3 
// (a)
//#include <iostream>
//using namespace std;
//
//void printNumbers(int n) {
//
//	if (n < 0)
//		return ; 
//		cout << n << " ";
//		printNumbers(n - 1);
//}
//
//int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//
//    cout << "Printing numbers from " << n << " to 0:" << endl;
//    printNumbers(n);
//    return 0;
//}
// 
// (b)
//
//#include <iostream>
//using namespace std;
//
//int binomialCoefficient(int n, int k) {
//
//    if (k == 0 || k == n) {
//        return 1;
//    }
//    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
//}
//
//int main() {
//    int n, k;
//    cout << "Enter the values for n and k: ";
//    cin >> n >> k;
//
//    if (k > n || n < 0 || k < 0) {
//        cout << "Invalid input! " << endl;
//    }
//    else {
//        cout << "C(" << n << ", " << k << ") = " << binomialCoefficient(n, k) << endl;
//    }
//
//    return 0;
//}

// (c)

#include <iostream>
using namespace std;

bool isPrime(int num, int divisor = 2) {

    if (num <= 1) {
        return false;
    }
    else if (divisor * divisor > num) {
        return true;
    }
    else if (num % divisor == 0) {
        return false;
    }
    return isPrime(num, divisor + 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout <<  "It is a prime number." << endl;
    }
    else {
        cout << "It is not a prime number." << endl;
    }
    return 0;
}
