//
//  main.cpp
//  firstProgram
//
//  Created by Macbook on 1/12/20.
//  Copyright © 2020 Macbook. All rights reserved.
//

#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
   int data;
   Node *next;
};
struct Node* head = NULL;
    void addValue(int val){
        struct Node *n = new Node();
        n->data = val;
        n->next = head;
        head = n;
    }
    void display() {
       struct Node* ptr;
       ptr = head;
       while (ptr != NULL) {
          cout<< ptr->data <<" ";
          ptr = ptr->next;
       }
    }
void removeDup(Node* n) {
    unordered_set<int> hashSet;
    Node* previous =NULL;
    while(n != NULL) {
        if(hashSet.find(n->data) != hashSet.end()){
            previous->next = n->next;
        }
        else {
            hashSet.insert(n->data);
            previous = n;
        }
        n = n->next;
    }
}

void removeDuplicatesWithoutBuffer(Node* n) {
  Node* current = n;
  while(current != NULL) {
    Node* runner  = current;
    while(runner->next != NULL) {
      if (runner->next->data == current->data)
          runner->next = runner->next->next;
      else runner = runner->next;
    }
    current = current->next;
  }
}

int main(int argc, const char * argv[]) {
    addValue(2);
    addValue(3);
    addValue(3);
    addValue(3);
    addValue(3);
    addValue(3);
    addValue(4);
    display();
    removeDuplicatesWithoutBuffer(head);
    cout<<endl;
    display();
    return 0;
}
