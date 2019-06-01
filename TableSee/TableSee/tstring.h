#include "pch.h"

class TString
{
protected:
	char* memory;
	int count;
public:
	TString();
	TString(const char* A);
	TString(const TString& A);
	~TString();
	int GetCount() const;
	char* GetMemory();
	TString& operator=(const TString& A);
	bool operator==(const TString& A) const;
	bool operator!=(const TString& A) const;
	bool operator<(const TString& A) const;
	bool operator>(const TString& A) const;
	char& operator[](const int a) const;
};

