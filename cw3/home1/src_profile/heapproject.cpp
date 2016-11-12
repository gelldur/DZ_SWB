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

void losujElementy(int count, const std::string& prefix, BinaryMinHeap *queue) {
	std::stringstream stream;
	for (int i = 0; i < count; i++) {
		int priority = rand() % MAX_PRIORITY;
		stream.str("");
		stream << "napis do wyswietlenia: " << prefix << " " << priority;
		queue->insert(new InfoElement(stream.str(), priority));
	}
}

void usuwajElementy(BinaryMinHeap* q1) {

	while (!q1->isEmpty()) {
		printf("Minimum to: %s\n", q1->getMinimum()->info.c_str());
		q1->removeMin();
	}
}

int main() {
	srand((unsigned) time(NULL));

	queue1 = std::unique_ptr<BinaryMinHeap>(new BinaryMinHeap());

	losujElementy(30000, "kolejka1", queue1.get());
	losujElementy(30000, "kolejka2", queue1.get());

	if (queue1->isEmpty())
	{
		printf("Brak minimum\n");
	}
	else
	{
		printf("Minimum to: %s\n", queue1->getMinimum()->info);
		queue1->removeMin();
	}
	usuwajElementy(queue1.get());
	//losujElementy(350000, "kolejka1", queue1.get());
	//losujElementy(350000, "kolejka2", queue2.get());

	//usuwajCichoElementy(queue1.get(),queue2.get());
	return 0;
}
