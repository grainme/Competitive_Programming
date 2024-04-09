#include <bits/stdc++.h>
#include <cstddef>
#include <cstdint>
using namespace std;

struct node {
  int data;
  node *next;
};

class linkedList {
private:
  node *head;

public:
  // constructor
  linkedList() { head = NULL; }
  // functions to be implemented
  void addElementFirst(int d);
  void addElementEnd(int d);
  void addElementBefore(int d, int b);
  void reverseList();
  void display();
};

void linkedList::addElementFirst(int data) {
  node *temp = new node;
  temp->data = data;
  temp->next = head;
  head = temp;
}

void linkedList::addElementEnd(int data) {
  node *temp = head;
  node *newNode = new node;
  newNode->data = data;
  newNode->next = NULL;
  // if linked list is empty!
  if (temp == NULL) {
    head = newNode;
    return;
  }
  while (temp->next) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void linkedList::addElementBefore(int data, int prev) {
  node *temp = head;
  node *newNode = new node;
  newNode->data = data;
  while (temp->next->data != prev) {
    temp = temp->next;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

void linkedList::display() {
  node *temp = head;
  if (!temp) {
    cout << "this linked list is empty!" << endl;
  }
  while (temp) {
    cout << temp->data << endl;
    temp = temp->next;
  }
}

void linkedList::reverseList() {
  // 5->3->1
  // 1->3->5
  node *next = NULL;
  node *prev = NULL;
  node *current = head;
  while (current) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
}

int32_t main(void) {
  linkedList li;
  li.display();

  li.addElementEnd(5);
  li.addElementEnd(1);
  li.addElementEnd(3);
  cout << "new list :" << endl;
  li.reverseList();
  li.display();

  return 0;
}
