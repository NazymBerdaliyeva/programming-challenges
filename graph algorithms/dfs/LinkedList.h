#include "Node.h"

class LinkedList {
  private:
  Node * head;
  public:
  
  LinkedList();
  bool isEmpty();
  Node * getHead();
  bool printList();
  bool insertAtHead(int value);
  void insertAtTail(int value);
  bool search(int value);
  bool deleteAtHead(int value);
  bool Delete(int value);
};