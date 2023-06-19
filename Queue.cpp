#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* next;
};

Node* queue = NULL;

void push(int value) {
	if (queue == NULL) {
		queue = new Node;
		queue->value = value;
		queue->next = NULL;
		return;
	}
	Node* e = new Node;
	e->value = value;
	e->next = NULL;
	Node* p = queue;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = e;
}
int pop() {
	if (queue == NULL) {
		cout << "queue is empty!\n";
		return 0;
	}
	int a = queue->value;
	Node* tmp = queue;
	queue = queue->next;
	delete tmp;
	return a;
}
void print() {
	while (queue != NULL)
		cout << pop() << ", ";
	cout << endl;
}

int main() {
	while (true) {
		cout << "+ - add value,\n- - remove value\n, = - list stack\n";
		char command;
		cin >> command;
		switch (command) {
		case '+':
			int value;
			cout << "Choose number: ";
			cin >> value;
			push(value);
			break;
		case '-':
			cout << "Last value: " << pop() << endl;
			break;
		case '=':
			print();
			system("pause");
			return 0;
		}
	}
}
