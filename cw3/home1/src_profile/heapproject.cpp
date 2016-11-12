#include <iostream>
#include <vector>
#include <cstdlib>
#include <memory>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include "infoelement.h"
#include "heap.h"

using namespace std;

int MAX_PRIORITY = 1000000;
std::unique_ptr<BinaryMinHeap> queue1;
std::unique_ptr<BinaryMinHeap> queue2;

void losujElementy(int count, const std::string& prefix, BinaryMinHeap *queue) {
	std::stringstream stream;
	for (int i = 0; i < count; i++) {
		int priority = rand() % MAX_PRIORITY;
		stream.str("");
		stream << "napis do wyswietlenia: " << prefix << " " << priority;
		queue->insert(new InfoElement(stream.str(), priority));
	}
}

void usuwajElementy(BinaryMinHeap* q1, BinaryMinHeap* q2) {

	for (int i = 0; i <= MAX_PRIORITY; ++i) {
		while (!q1->isEmpty() && q1->getMinimum()->time < i) {
			printf("Minimum to: %s\n", q1->getMinimum()->info.c_str());
			q1->removeMin();
		}
		while (!q2->isEmpty() && q2->getMinimum()->time < i) {
			printf("Minimum to: %s\n", q2->getMinimum()->info.c_str());
			q2->removeMin();
		}
	}
}

void usuwajCichoElementy(BinaryMinHeap* q1, BinaryMinHeap* q2) {

	for (int i = 0; i <= MAX_PRIORITY; i++) {
		while (!q1->isEmpty() && q1->getMinimum()->time < i) {
		//	printf("Minimum to: %s\n", q1->getMinimum()->info);
			q1->removeMin();
		}
		while (!q2->isEmpty() && q2->getMinimum()->time < i) {
		//	printf("Minimum to: %s\n", q2->getMinimum()->info);
			q2->removeMin();
		}
	}
}


int main() {
	srand((unsigned) time(NULL));

	queue1 = std::unique_ptr<BinaryMinHeap>(new BinaryMinHeap());
	queue2 = std::unique_ptr<BinaryMinHeap>(new BinaryMinHeap());

	losujElementy(30000, "kolejka1", queue1.get());
	losujElementy(30000, "kolejka2", queue2.get());

	if (queue1->isEmpty())
	{
		printf("Brak minimum\n");
	}
	else
	{
		printf("Minimum to: %s\n", queue1->getMinimum()->info);
		queue1->removeMin();
	}
	usuwajElementy(queue1.get(),queue2.get());
	//losujElementy(350000, "kolejka1", queue1.get());
	//losujElementy(350000, "kolejka2", queue2.get());

	//usuwajCichoElementy(queue1.get(),queue2.get());
	return 0;
}
