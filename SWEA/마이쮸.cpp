//#include <iostream>
//
//using namespace std;
//
//const int Max = 100;
//
//class Queue {
//private:
//	int front;
//	int rear;
//	int Q[Max];
//
//public:
//	Queue() {
//		front = rear = -1;
//	}
//	bool isFull() {
//		if ((rear + 1) % Max == front) return true;
//		else return false;
//	}
//	bool isEmpty() {
//		if (front == rear) return true;
//		else return false;
//	}
//	void enQueue(int n) {
//		if (isFull()) {
//			cout << "Full!" << endl;
//		}
//		else {
//			rear = (rear + 1) % Max;
//			Q[rear] = n;
//		}
//	}
//	int deQueue() {
//		if (isEmpty()) {
//			cout << "Empty!!" << endl;
//			return NULL;
//		}
//		else {
//			front = (front + 1) % Max;
//			return Q[front];
//		}
//	}
//	int peek() {
//		if (isEmpty()) {
//			cout << "Empty!!" << endl;
//			return NULL;
//		}
//		else {
//			return Q[(front + 1) % Max];
//		}
//	}
//};
//
//int main() {
//	Queue q = Queue();
//	int myJJu = 80;
//	int index = 1;
//	int arr[20] = { 0, };
//	int temp;
//	q.enQueue(index);
//
//	while (myJJu > 0) {
//		temp = q.deQueue();
//		if (myJJu < arr[temp] + 1) {
//			arr[temp] += myJJu;
//			myJJu = 0;
//		}
//		else {
//			myJJu -= arr[temp] + 1;
//			arr[temp] += arr[temp] + 1;
//		}
//		
//		
//		//myJJu--;
//		if (myJJu <= 0) {
//			break;
//		}
//		q.enQueue(temp);
//		q.enQueue(++index);
//	}
//
//	for (int i = 1; i < 20; i++) {
//		if (arr[i] > 0) {
//			cout << i << "번째 : " << arr[i] << "개" << endl;
//		}
//	}
//	cout << "마지막 마이쮸 가져간 사람 : " << temp << "번" << endl;
//
//	return 0;
//}