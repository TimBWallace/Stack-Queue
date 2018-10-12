#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
	mytop = NULL;
}

bool Stack:: empty() {
	return(mytop == NULL);
}

void Stack::push(StackElement x) {
	if (mytop == NULL) {
		mytop->data = x;
	}
	else {
		node * oldTop = mytop;
		node * newTop = new node;
		newTop->data = x;
		newTop->next = oldTop;
		mytop = newTop;
	}
}
bool Stack::Top(StackElement & x) {
	return(mytop != NULL);
}

void Stack::pop() {
	node * second;
	if (mytop == NULL) {
		cout << "The Stack is Empty!"<<endl;
	}
	else {
		node * removed = mytop;
		mytop = mytop->next;
		delete(removed);
	}
}

void Stack::display() {
	while (mytop != NULL) {
		cout << mytop->data << endl;
		mytop = mytop->next;
	}
}