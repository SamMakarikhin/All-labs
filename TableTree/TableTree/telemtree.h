#include "pch.h"
#include <iostream>

template <typename ElemTreeType>
class TElemTree
{
protected:
	TString key;
	ElemTreeType data;
	TElemTree<ElemTreeType>* left;
	TElemTree<ElemTreeType>* right;
	TElemTree<ElemTreeType>* parent;
public:
	TElemTree();
	TElemTree(const ElemTreeType& _data, const TString& A, TElemTree<ElemTreeType>* _left = NULL,
		TElemTree<ElemTreeType>* _right = NULL, TElemTree<ElemTreeType>* _parent = NULL);
	TElemTree(const TElemTree<ElemTreeType>& A);
	~TElemTree();
	TElemTree<ElemTreeType>& operator=(const TElemTree<ElemTreeType>& A);
	bool operator==(const TElemTree<ElemTreeType>& A) const;
	bool operator!=(const TElemTree<ElemTreeType>& A) const;
	ElemTreeType& GetData() { return data; }
	TString& GetKey() { return key; }
	TElemTree<ElemTreeType>* GetLeft() { return left; }
	TElemTree<ElemTreeType>* GetRight() { return right; }
	TElemTree<ElemTreeType>* GetParent() { return parent; }
	void SetData(const ElemTreeType& A);
	void SetKey(const TString& A);
	void SetLeft(TElemTree<ElemTreeType>* A);
	void SetRight(TElemTree<ElemTreeType>* A);
	void SetParent(TElemTree<ElemTreeType>* A);
	template <typename Type>
	friend ostream& operator<<(ostream& ostr, TElemTree<Type>& A);
};
