#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;

    node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Insert at Beginning
    void insertAtBegin(int val) {
        node* n = new node(val);

        if (head != NULL) {
            head->prev = n;
            n->next = head;
        }
        head = n;
    }

    // Insert at End
    void insertAtEnd(int val) {
        node* n = new node(val);

        if (head == NULL) {
            head = n;
            return;
        }

        node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = n;
        n->prev = temp;
    }

    // Delete from Beginning
    void deleteFromBegin() {
        if (head == NULL) return;

        node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;
    }

    // Delete from End
    void deleteFromEnd() {
        if (head == NULL) return;

        node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        if (temp->prev != NULL)
            temp->prev->next = NULL;
        else
            head = NULL;

        delete temp;
    }

    // Display Forward
    void displayForward() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Display Backward
    void displayBackward() {
        if (head == NULL) return;

        node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList dl;

    dl.insertAtBegin(10);
    dl.insertAtEnd(20);
    dl.insertAtEnd(30);
    dl.insertAtBegin(5);

    cout << "Forward: ";
    dl.displayForward();

    cout << "Backward: ";
    dl.displayBackward();

    dl.deleteFromBegin();
    cout << "After deleting from begin: ";
    dl.displayForward();

    dl.deleteFromEnd();
    cout << "After deleting from end: ";
    dl.displayForward();

    return 0;
}
