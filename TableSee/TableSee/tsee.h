#include "pch.h"

template <typename TableSeeType>
class TTableSee
{
protected:
	static TElement<TableSeeType> st;
	TElement<TableSeeType>* node;
	int size;
	int count;
	void Expansion(const int _size);
public:
	TTableSee(const int _size = 1);
	TTableSee(const TTableSee<TableSeeType>& A);
	~TTableSee();
	int GetCount() const;
	int GetSize() const;
	bool Add(const TElement<TableSeeType>& A);
	bool Delete(TElement<TableSeeType>& A);
	TString& Add(const TableSeeType& A);
	bool Delete(const TString& A);
	TElement<TableSeeType>& Search(const TString& A) const;
	TableSeeType& operator[](const TString& A) const;
	template <typename Op>
	friend ostream& operator<<(ostream& ostr, const TTableSee<Op>& A);
};