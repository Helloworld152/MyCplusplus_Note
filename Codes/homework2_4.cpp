//
// Created by 阮颖 on 2019/3/19.
//
#include <iostream>
using namespace std;

struct node{
    
    int data;
    node * next;
    
    node(int d = 0, node * n = NULL){ data = d; next = n; }
};

class LinkNode{
public:    
    node * head;
    
    LinkNode(node * h = NULL){ head = h; }
    
    LinkNode operator+(const LinkNode &linkNode){
        
        node * p = this->head;
        node * r = linkNode.head;
        node * q = p;
        
        while (p->next != NULL)
            p = p->next;
        
        p->next = r->next;
        return LinkNode(q);
    }
    
};
// 测试用例
int main(){
    node * p = new node();
    node * r = p;
    for (int i = 1; i < 4; ++i) {
        p->next = new node(i);
        p = p->next;
    }
    LinkNode linkNode1(r);

    node * q = new node();
    node * t = q;
    for (int i = 3; i > 0; --i) {
        q->next = new node(i);
        q = q->next;
    }
    LinkNode linkNode2(t);
    
    LinkNode linkNode = linkNode1 + linkNode2;
    r = linkNode.head->next;
    while (r != NULL){
        cout << r->data << endl;
        r = r->next;
    }
}
