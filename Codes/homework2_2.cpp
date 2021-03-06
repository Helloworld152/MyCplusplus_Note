//
// Created by 阮颖 on 2019/3/18.
//
#include <iostream>
using namespace std;

struct dNode{
    int data;

    dNode * prev;
    dNode * next;

    dNode(int d, dNode * p = NULL, dNode * n = NULL){
        data = d;
        prev = p;
        next = n;
    }
};

int main(){
    dNode * head, * p, * q;
    int n;

    cin >> n;

    head = p = new dNode(0);
    for (int i = 1; i < n; ++i) {
        p->next = new dNode(i, p);
        p = p->next;
    }
    p->next = head;
    head->prev = p;

    q = head;
    while (q->next != q){
        p = q->next;
        q = p->next;
        p->next = q->next;
        q->next->prev = p;
        cout << q->data << endl;
        delete(q);
        q = p->next;
    }
    cout << "Leave: " << q->data << endl;
    return 0;
}

