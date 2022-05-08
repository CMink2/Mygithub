#ifndef fraction_h
#define fraction_h
#include<iostream>
using namespace std;

class Fraction {
private:
	int numer;
	int denom;
public:
	Fraction(int num, int den);			//매개변수가 있는 생성자.
	Fraction();	//기본 생성자.
	Fraction(const Fraction& fraction);			//복사 생성자.
	~Fraction();		//소멸자.

	//get(read)
	int get_numer()const;	//return value = numer;
	int get_denom()const;	//return value = denom;

	//set(write)
	void set_nemer(int num);
	void set_denom(int den);

	//
	Fraction return_big(Fraction& fraction1, Fraction& fraction2)const;	//return bigger;
	Fraction return_small(Fraction& fraction1, Fraction& fraction2)const;//return smoller;

	//normarlize
	void normalize();	//분수 기약분수로 바꾸거나 음수일 경우 분모가 0일경우 세팅
	int gcd(int n, int m);			//최대공약수 구하기.
	void swap(int& n, int& m);
	void print()const;

};

#endif // !fraction_h
