#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void fun() {
	string a;
	cout << "vedite a" << endl;
	cin >> a;
	string c;

	char k;

	while (a.length() > 0) {
		int b = a.length();
		k = a[b - 1];
		a = a.substr(0, a.size() - 1);


		switch (k) {
		case'0': c = "0000" + c;
			break;
		case'1': c = "0001" + c;
			break;
		case'2': c = "0010" + c;
			break;
		case'3': c = "0011" + c;
			break;
		case'4': c = "0100" + c;
			break;
		case'5': c = "0101" + c;
			break;
		case'6': c = "0110" + c;
			break;
		case'7': c = "0111" + c;
			break;
		case'8': c = "1000" + c;
			break;
		case'9': c = "1001" + c;
			break;
		case('a'): c = "1010" + c;
			break;
		case('b'): c = "1011" + c;
			break;
		case('c'): c = "1100" + c;
			break;
		case('d'): c = "1101" + c;
			break;
		case('e'): c = "1110" + c;
			break;
		case('f'): c = "1111" + c;
			break;
		default: cout << "tupit" << endl;
		}
	}
	cout << c;
}

void sixten(string a, int& c) {
	cout << "vvedite a" << endl;
	cin >> a;
	c = 0;
	char k;
	int b = a.length();
		for (int i = 0; i <= b; i++) {
			k = a[b - 1];
			c = c + (static_cast<int>(k) - 48) *pow(16, i);
			b--;
		}
	
	cout << c << endl;;
}

void tentwo(int a, string c) {
	while (a > 0) {
		char ch;
		if (a % 2 > 0) {
			ch = '1';
		}
		else { ch = '0'; }
		c = ch + c;
		a = a / 2;
	}
	cout << c;
}

int main() {
	fun();
	cout << endl;
	string a;
	int c;
	sixten(a,c);

	tentwo(c, a);
}