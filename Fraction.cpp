#include"Fraction.h"

Fraction::Fraction(){}
Fraction::Fraction(int num, int den) {
	numer = num;
	denom = den;
}
Fraction::Fraction(const Fraction& fraction):numer(fraction.numer), denom(fraction.denom) {}
Fraction::~Fraction(){}

int Fraction::return_numer()const {
	return numer;
}
int Fraction::return_denom()const {
	return denom;
}

void Fraction::set_nemer(int num) {
	numer = num;
}

void Fraction::set_denom(int den) {
	denom = den;
}

Fraction Fraction::return_big(Fraction& fraction1, Fraction& fraction2)const {
	if ((fraction1.numer * fraction2.denom) > (fraction2.numer * fraction1.denom))
		return fraction1;
	return fraction2;
}

Fraction Fraction::return_small(Fraction& fraction1, Fraction& fraction2)const {
	if ((fraction1.numer * fraction2.denom) > (fraction2.numer * fraction1.denom))
		return fraction2;
	return fraction1;
}

void Fraction::normalize() {
	while(denom == 0) {
		cout << "분모에는 0이 올 수 없습니다." << endl;
		int den = 0;
		cout << "분모를 다시 입력하세요." << endl;
		cin >> den;
		denom = den;
	}
	if (denom < 0) {
		denom = -denom;
		numer = -numer;
	}
	int divisior = gcd(abs(numer), abs(denom));
	numer /= divisior;
	denom /= divisior;
}

int Fraction::gcd(int n, int m) {
	if (m == 0)
		return n;
	if (n < m)
		swap(n, m);
	return gcd(m, n % m);
}

void Fraction::swap(int& n, int& m) {
	int temp = n;
	n = m;
	m = temp;
}

void Fraction::print()const {

}