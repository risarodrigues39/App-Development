#include<iostream>
using namespace std;

const int MAX_SIZE = 5;
int queue_arr[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue() {
	if(rear==MAX_SIZE-1){
		cout << "Enter the element to insert" << endl;
	}
	else {
		int value;
		cout << "Enter the element to insert :";
		cin >> value;

		if (front == -1) {
			front = 0;
		}
		rear++;
		queue_arr[rear] = value;
		cout << value << " Inserted into the queue" << endl;

	}

}

void dequeue(){
	if (front == -1 || front > rear) {
		cout << "Under flow, element canno tbe deleted" << endl;
		front = -1;
		rear = -1;
	}
	else {
		cout << "The element is deleted";
		front++;
	}
}

void display() {
	if (front == -1 || front > rear) {
		cout << "Queue is empty";
	}
	else {
		cout << "Queue elements"<< endl; 
		for (int i = front; i <= rear; i++) {
			cout << queue_arr[i] << " ";
		}
		cout << endl;

	}
}

void peek() {
	cout << "First eleemnt of the queue is " << queue_arr[front] << endl;
}
int main()
{
	int ch, value;
	cout << "1)Add an element in the queue" << endl;
	cout << "2)Remove an element from the queue" << endl;
	cout << "3)Display the queue" << endl;
	cout << "4)Peek queue" << endl;
	cout << "5)Exit the queue" << endl;

	do {
		cout << "Enter your choice" << endl;
		cin >> ch;
		switch (ch) {
		case 1: enqueue();
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: peek();
			break;

		case 5: cout << "Exit";
			break;
		default:cout << "Invalid choice";

		}
	
	} while (ch != 5);
}