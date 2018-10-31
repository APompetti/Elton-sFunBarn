#include "NodeT.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

NodeT::NodeT(string x) {
	data = x;
	left = NULL;
	right = NULL;
	parent = NULL;
	height = 1;
	balance = 0;
}

NodeT::~NodeT() {
	if ((left != NULL) || (right != NULL)) {
		cout << "deleting may leave dangling SNodes" << endl;
	}
}

void NodeT::printNode() {
	cout << "|"<<data << ", "<< height <<"|" << endl;
}

void NodeT::setBalance() {
	if(left==NULL && right==NULL){
        // cout << "Hello" << endl;
        balance = 0;
    }
    else if (left==NULL){
        // cout << "hello left null" << endl;
        // cout << n->right->height << endl;
        balance = -right->height;
    }
    else if (right==NULL){
        // cout << "hello right null" << endl;
        // cout << n->left->height << endl;
        balance = left->height;
    }
    else{
        // cout << "hello not null" << endl;
        // cout << n->left->height - n->right->height << endl;
        balance = left->height - right->height;
    }
    cout << balance << endl;
}



