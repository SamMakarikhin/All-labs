#pragma once
#include "telemtree.h"
#include "tstacklist.h"
using namespace std;

template <typename TableTreeType>
class TTableTree
{
protected:
	static TElemTree<TableTreeType> ttt;
	int count;
	TElemTree<TableTreeType>* node;
public:
	TTableTree();
	TTableTree(const TTableTree<TableTreeType>& A);
	~TTableTree();

	int GetCount() const { return count; }
	TElemTree<TableTreeType>* GetNode() const { return node; }

	TElemTree<TableTreeType>* Add(TElemTree<TableTreeType>& A);
	bool Delete(const TString& A);
	TElemTree<TableTreeType>& Search(const TString& A) const;
	TableTreeType& operator[](const TString& A) const;

	template <typename Type>
	friend ostream& operator<<(ostream& ostr, const TTableTree<Type>& A);
};
