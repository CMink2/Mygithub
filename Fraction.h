#ifndef fraction_h
#define fraction_h
#include<iostream>
using namespace std;

class Fraction {
private:
	int numer;
	int denom;
public:
	Fraction(int num, int den);			//�Ű������� �ִ� ������.
	Fraction();	//�⺻ ������.
	Fraction(const Fraction& fraction);			//���� ������.
	~Fraction();		//�Ҹ���.

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
	void normalize();	//�м� ���м��� �ٲٰų� ������ ��� �и� 0�ϰ�� ����
	int gcd(int n, int m);			//�ִ����� ���ϱ�.
	void swap(int& n, int& m);
	void print()const;

};

#endif // !fraction_h
