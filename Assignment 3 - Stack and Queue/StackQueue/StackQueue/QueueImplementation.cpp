#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue() {
	myfront = NULL;
	myback = NULL;
}

bool Queue::empty() {
	return(myfront == myback);
}

void Queue::AddQ(QueueElement x) {
	qnode * newBack;
	newBack->data = x;
	if (myfront == NULL && myback == NULL) {
		myfront = myback = newBack;
	}
	myback->next = newBack;
	myback = newBack;
}

bool Queue::Front(QueueElement & x) {
	if (myfront == NULL) {
		cout << "Queue is empty!" << endl;
	}
	else {
		return myfront->data;
	}
}

void Queue::RemoveQ() {
	qnode * newFront;
	if (myfront == NULL) {
		cout << "Queue is empty!" << endl;
	}
	if (myfront == myback) {
		myfront = myback = NULL;
	}
	else {
		myfront = myfront->next;
	}
	delete(newFront);
}

void Queue::display() {
while(myfront != NULL) {
	cout << myfront->data << endl;
	myfront = myfront->next;
	}
}