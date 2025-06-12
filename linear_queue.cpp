#include<iostream>
using namespace std;

#define max 5

template<class T>
class queue {
    T data[max];
    int f, r;
public:
    queue() {
        f = -1;
        r = -1;
    }

    void enqueue(T value) {
        if (r == max - 1) {
            cout << "Queue is full" << endl;
            return;
        }

        if (f == -1) {
            f = 0;
        }

        r++;
        data[r] = value;
        cout << "Data pushed" << endl;
    }

    T dequeue() {
        if (f == -1 || f > r) {
            cout << "Queue is empty (Underflow)" << endl;
            return -1;  
        }
        T item = data[f];
        f++;

       
        if (f > r) {
            f = r = -1;
        }

        return item;
    }

    void display() {
        if (f == -1 || f > r) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = f; i <= r; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};


int main() {
    int choice, n;
    queue<int> q;

    while (true) {
        cout << "\n1. Push data into queue";
        cout << "\n2. Pop data from queue";
        cout << "\n3. Display all items in queue";
        cout << "\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to push: ";
                cin >> n;
                q.enqueue(n);
                break;
            case 2:
                cout << "Popped value: " << q.dequeue() << endl;
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
