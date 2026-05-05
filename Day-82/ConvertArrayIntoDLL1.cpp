#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Insert at start
void insertAtStart(Node* &head, int val) {
    Node* temp = new Node(val);

    if (head != NULL) {
        head->prev = temp;
        temp->next = head;
    }

    head = temp;
}

// Display
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    Node* head = NULL;

    // FOR LOOP
    for (int i = 0; i < n; i++) {
        insertAtStart(head, arr[i]);
    }

    display(head);

    return 0;
}




#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// recursive creation (start insertion)
Node* createReverseDLL(int arr[], int index, int n) {
    if (index == n) return NULL;

    Node* head = createReverseDLL(arr, index + 1, n);

    Node* temp = new Node(arr[index]);

    if (head != NULL) {
        head->prev = temp;
        temp->next = head;
    }

    return temp;
}

// Display
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    Node* head = createReverseDLL(arr, 0, n);

    display(head);

    return 0;
}