/* b)	Create a C++ class Vector with data members size & pointer to integer. The size of the vector varies so the memory should be allocated dynamically.
Perform following operations:
	1.Accept a vector
	2.	Display a vector in the format (10, 20, 30, . .
	3.	Calculate union of two vectors.
	(use parameterized constructor & copy constructor)  */


#include <iostream.h>
#include <conio.h>
#include<stdlib.h>



class Vector {
    int *a, *b;
    int n, n1;
public:
    void create() {
    int i,j;
	cout << "Enter dimension of first vector: ";
	cin >> n;
	a = new int[n];
	cout << "Enter elements of first vector: ";
	for ( i = 0; i < n; i++) {
	cin >> a[i];
	}

	cout << "Enter dimension of second vector: ";
	cin >> n1;
	b = new int[n1];
	cout << "Enter elements of second vector: ";
	for ( j = 0; j < n1; j++) {
	    cin >> b[j];
	}
    }

    void display() {
    int i,j;
	cout << "\nThe first vector is: (";
	for ( i = 0; i < n - 1; i++) {
	    cout << a[i] << ", ";
	}
	if (n > 0) {
	    cout << a[n - 1] << ")";
	}
	cout << "\nThe second vector is: (";
	for ( j = 0; j < n1 - 1; j++) {
	    cout << b[j] << ", ";
	}
	if (n1 > 0) {
	    cout << b[n1 - 1] << ")";
	}
    }

    void calculateUnion() {
    int i,j,k,bool,found,true,false;
	int *unionArray = new int[n + n1];
	int unionSize = 0;

	for ( i = 0; i < n; i++) {
	    unionArray[unionSize++] = a[i];
	}

	for (j = 0; j < n1; j++)
	{
	    bool found = false;
	    for ( k = 0; k < n; k++) {
		if (b[j] == a[k]) {
		    found = true;
		    break;
		}
	    }
	    if (!found) {
		unionArray[unionSize++] = b[j];
	    }
	}

	cout << "\nThe union of the vectors is: (";
	for ( i = 0; i < unionSize - 1; i++) {
	    cout << unionArray[i] << ", ";
	}
	if (unionSize > 0) {
	    cout << unionArray[unionSize - 1] << ")";
	}
	delete[] unionArray;
    }

    ~Vector() {
	delete[] a;
	delete[] b;
    }
};

int main() {
    Vector v;
    int choice;
    do {
	cout << "\n1. Accept vectors";
	cout << "\n2. Display vectors";
	cout << "\n3. Calculate union";
	cout << "\n4. Exit";
	cout << "\nEnter your choice: ";
	cin >> choice;

	switch (choice) {
	    case 1:
		v.create();
		break;
	    case 2:
		v.display();
		break;
	    case 3:
		v.calculateUnion();
		break;
	    case 4:
		cout << "Exiting...";
		break;
	    default:
		cout << "Invalid choice!";
	}
    } while (choice != 4);

    return 0;
}
