#include "pch.h"
#include "tqueue.h"

template <typename QueueType>
class TQueue : public TStack <QueueType>
{
protected:
	int start;
	int count;
public:
	TQueue(int n = 0);
	TQueue(const TQueue <QueueType> &Q);
	TQueue& operator=(const TQueue<QueueType>& queue);
	QueueType Get();
	void Put(QueueType Q);
	bool IsFull();
	bool IsEmpty();
	void PrintQueue();
	bool operator!=(const TQueue<QueueType>& queue) const;
	bool operator==(const TQueue<QueueType>& queue) const;
};