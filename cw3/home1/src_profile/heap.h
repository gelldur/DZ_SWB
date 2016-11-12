/*
 * heap.h
 *
 *  Created on: 21-10-2016
 *      Author: wawrzyniakw
 */
#include <vector>
#include <memory>

#ifndef HEAP_H_
#define HEAP_H_

using namespace std;

class BinaryMinHeap {
private:
	vector<std::unique_ptr<InfoElement> > data;

	int getLeftChildIndex(int nodeIndex) const
	{
		return 2 * nodeIndex + 1;
	}

	int getRightChildIndex(int nodeIndex) const
	{
		return 2 * nodeIndex + 2;
	}

	int getParentIndex(int nodeIndex) const
	{
		return (nodeIndex - 1) / 2;
	}

public:
	InfoElement* getMinimum();

	bool isEmpty() const
	{
		return data.empty();
	}

	void siftUp(int nodeIndex);

	void insert(InfoElement* value);

	void siftDown(int nodeIndex);

	void removeMin() ;
};



#endif /* HEAP_H_ */
