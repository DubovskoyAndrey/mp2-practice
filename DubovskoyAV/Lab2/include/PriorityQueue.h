#include "DHeap.h"

class PriorityQueue {
public:
	PriorityQueue() {};

	virtual void push(Data *&key) = 0;  // ���������� ����� � �������
	virtual Data* pop() = 0;            // ������� ������������
	virtual void refresh() = 0;         // ���������� �������

	virtual int isFull() = 0;           //�������� �� �������
	virtual int isEmpty() = 0;          //�������� �� �������
};


/*������������ ������� �� ���� d-����*/
class DHeapPriorityQueue : public PriorityQueue {
protected:
	DHeap * heap;
public:
	DHeapPriorityQueue(int d = 4);
	DHeapPriorityQueue(const DHeapPriorityQueue &queue);
	DHeapPriorityQueue(Data **keys, int num, int d = 4);
	~DHeapPriorityQueue();

	virtual void push(Data *&key);	// ���������� ����� � �������
	virtual Data* pop();			// ������� ������������
	virtual void refresh();			// ���������� �������

	virtual int isFull();           //�������� �� �������
	virtual int isEmpty();          //�������� �� �������
};