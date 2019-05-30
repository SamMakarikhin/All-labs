#include "pch.h"
#include "tpolynomial.h"

class TPolynomial
{
protected:
	TMonomial *start;
	int n;          
	int k;       
public:
	TPolynomial();
	TPolynomial(int _n);
	TPolynomial(const TPolynomial &A);
	~TPolynomial();
	int GetN();
	int GetSize();
	TMonomial* GetStart();
	TPolynomial operator-(TPolynomial &A);
	TPolynomial operator+(TPolynomial &A);
	TPolynomial& operator=(const TPolynomial &A);
	bool operator==(const TPolynomial &A);
	bool operator!=(const TPolynomial &A);
	TPolynomial operator*(TPolynomial &A);
	TPolynomial& operator+=(const TMonomial &m);
	TPolynomial& operator-=(const TMonomial &m);
	friend std::ostream& operator<<(std::ostream &ostr, TPolynomial& Tm);
};