#include "pch.h"
#include "tmonomial.h"

class TMonomial
{
protected:
	int* power;      
	int n;        
	double coeff;    
	TMonomial *next; 
public:
	TMonomial(int _n = 10);
	TMonomial(int _n, int *_power, double _coeff);
	TMonomial(const TMonomial &A);
	~TMonomial();
	void SetPower(int *_power);
	void SetN(int _n);
	void SetCoeff(double _coeff);
	void SetNext(TMonomial* _next);
	int *GetPower();
	int GetN() const;
	double GetCoeff() const;
	TMonomial* GetNext();
	bool ComparePowers(const TMonomial &A);
	TMonomial &operator = (const TMonomial &A);
	TMonomial operator + (TMonomial &A);
	TMonomial &operator += (const TMonomial &A);
	TMonomial operator - (TMonomial &A);
	TMonomial &operator -= (const TMonomial &A);
	TMonomial operator * (TMonomial &A);
	TMonomial &operator *= (TMonomial &A);
	bool operator == (TMonomial &A);
	bool operator < (TMonomial &A);
	bool operator > (TMonomial &A);
	friend istream& operator>>(istream &istr, TMonomial &m);
	friend ostream& operator<<(ostream &ostr, TMonomial &m);
};
