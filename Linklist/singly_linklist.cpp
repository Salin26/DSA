#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int element;
    node* next;

    node(int value) {
        element = value;
        next = nullptr;
    }
};

class linklist {
private:
    node* head;

public:
    linklist() {
        head = nullptr;
    }

    void insertatbegin(int value) {
        node* n = new node(value);
        n->next = head;
        head = n;
    }
    void insertatend(int value) {
        node* n = new node(value);

        if (head == nullptr) {
            head = n;
            return;
        }

        node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = n;
    }
    void insertatpos(int value, int pos) {
        if (pos <= 1) {
            insertatbegin(value);
            return;
        }

        node* newnode = new node(value);
        node* temp = head;
        int cnt = 1;

        while (cnt < pos - 1 && temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        if (temp == nullptr) {
            delete newnode;
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
    void deletefirst() {
        if (head == nullptr) return;

        node* temp = head;
        head = head->next;
        delete temp;
    }
    void deleteatpos(int pos) {
        if (head == nullptr || pos <= 1) {
            deletefirst();
            return;
        }

        node* temp = head;
        int cnt = 1;

        while (cnt < pos - 1 && temp->next != nullptr) {
            cnt++;
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            return;
        }

        node* d = temp->next;
        temp->next = temp->next->next;
        delete d;
    }

    bool is_sorted() {
        if (head == nullptr) return true;

        node* temp = head;

        while (temp->next != nullptr) {
            if (temp->element > temp->next->element)
                return false;

            temp = temp->next;
        }
        return true;
    }

    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->element << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    linklist l;

    l.insertatbegin(6);
    l.insertatend(10);
    l.insertatbegin(14);
    l.insertatbegin(19);

    l.display();

    if (l.is_sorted()) {
        cout << "List is sorted\n";
    } else {
        cout << "List is NOT sorted\n";
    }
}
