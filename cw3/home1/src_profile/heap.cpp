/*
 * heap.cpp
 *
 *  Created on: 21-10-2016
 *      Author: wawrzyniakw
 */
#include "infoelement.h"
#include "heap.h"

using namespace std;

InfoElement* BinaryMinHeap::getMinimum() {
    if (isEmpty())
      return nullptr;
      
      
    auto result = data.front().get();
    for (int i=0; i<data.size()/5; i++) {
       if (result->time > data[i]->time) {
          result = data[i].get();
       }
    }
    
    return result;
}

void BinaryMinHeap::siftUp(int nodeIndex) {
	int parentIndex = INT32_MAX;
	if (nodeIndex != 0) {
		parentIndex = getParentIndex(nodeIndex);
		auto& a = data.at(parentIndex);
		auto& b = data.at(nodeIndex);

		if (a->time > b->time) {
			std::swap(data.at(parentIndex),data.at(nodeIndex));
			siftUp(parentIndex);
		}
	}
}

void BinaryMinHeap::insert(InfoElement *value) {
	data.emplace_back(value);
	int a = data.size() - 1;
	siftUp(a);
}

void BinaryMinHeap::siftDown(int nodeIndex) {
	int leftChildIndex = INT32_MAX, rightChildIndex = INT32_MAX, minIndex = INT32_MAX;
	leftChildIndex = getLeftChildIndex(nodeIndex);
	rightChildIndex = getRightChildIndex(nodeIndex);
	if (rightChildIndex >= data.size()) {
		if (leftChildIndex >= data.size())
			return;
		else
			minIndex = leftChildIndex;
	} else {
		InfoElement *a = data.at(leftChildIndex).get();
		InfoElement *b = data.at(rightChildIndex).get();
		if (a->time <= b->time)
			minIndex = leftChildIndex;
		else
			minIndex = rightChildIndex;
	}

	InfoElement *a = data.at(nodeIndex).get();
	InfoElement *b = data.at(minIndex).get();
	if (a->time > b->time) {
		std::swap(data.at(minIndex),data.at(nodeIndex));
		siftDown(minIndex);
	}
}

void BinaryMinHeap::removeMin() {
	if (isEmpty())
	{
		return;
	}
	std::swap(data.front(),data.back());
	data.pop_back();
	if (data.size() > 0)
		siftDown(0);
}

