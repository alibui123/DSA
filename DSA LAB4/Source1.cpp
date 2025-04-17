/*#include <iostream>
#include "Header2.h"  
using namespace std;

int main() {
    Que<string> Q1(10);
    string names[] = { "Ahmed", "Usman", "Ali", "Umer", "Umar", "Faseeh", "Hamza", "Rayyan", "Ukasha", "Saim" };

    
    for (int i = 0; i < 10; i++) {
        Q1.Insert(names[i]);
    }

    
    string name;
    cout << "Removed names from the queue:\n";
    for (int i = 0; i < 10; i++) {
        Q1.Remove(name);
        cout << name << endl;
    }

    return 0;
}



#include<iostream>
#include"Header1.h"
using namespace std;
int main() {
	Queue q1;
	int x;

	for (int i = 0; i < 10; i++) {
		q1.Insert(i);
	}

	for (int i = 0; i < 10; i++) {
		q1.Remove(x);
		cout << x << endl;
	}

	return 0;
}


#include<iostream>
using namespace std;

int main() {
	Deque dq(5);
	dq.insertLeft(1);
	dq.insertRight(2);
	dq.insertLeft(3);
	dq.insertRight(4);
	dq.removeLeft();
	dq.removeRight();
	return 0;
}


#include<iostream>
using namespace std;

int main() {
	Deque<int> dq(5);
	dq.insertLeft(1);
	dq.insertRight(2);
	dq.insertLeft(3);
	dq.insertRight(4);
	dq.removeLeft();
	dq.removeRight();
	return 0;
}








