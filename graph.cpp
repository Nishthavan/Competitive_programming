#include<iostream>
using namespace std;

class Node{
   int data;
   Node* left, *right;

public:
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void inorder(Node* node){
    if(node==NULL){
    	cout<<"NULL";
    }

 inorder(node->left);
 cout<<node->data<<"-->";
 inorder(node->right);
}


void preorder(Node* node){
    if(node==NULL){
    	cout<<"NULL";
    }

 cout<<node->data"-->";
 inorder(node->left);
 inorder(node->right);
}


void postorder(Node* node){
    if(node==NULL){
    	cout<<"NULL";
    }

 inorder(node->left);
 inorder(node->right);
 cout<<node->data<<"-->";
}

int main(int argc, char const *argv[])
{
   Node*root  =new Node(10);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(40);
   root->left->right = new Node(50);
   

   cout<<"--------"<<endl;
   inorder(root);

   cout<<"--------"<<endl;
   preorder(root);

   cout<<"--------"<<endl;
   postorder(root);

}