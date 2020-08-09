
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int key;
	Node* left, *right;
};
// To create new BST Node
Node* newNode(int item)
{
	Node* temp = new Node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = (Node *)malloc(sizeof(Node));
        temp->left = temp->right = NULL;
        temp->key = val;
        *tree = temp;
        return;
    }
    if(val < (*tree)->key)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->key)
    {
        insert(&(*tree)->right, val);
    }
}
int mini=INT_MAX;
int findMaxForN(Node* root, int N,int size);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node* root=NULL;
        int n, k;
        cin>>n;
        mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            insert(&root, k);
        }
        int s;
        cin>>s;
     
       cout<<findMaxForN(root,s,n)<<endl;
         
    }
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*
Structure of the Node of the BST is as
struct Node {
	int key;
	Node* left, *right;
};
*/
/*
   'N' is the element 
   'size' is the total element in BST
  */
int findMaxForN(Node* root, int N,int size)
{
    Node *temp;
    while(root!=NULL)
    {
        temp=root;
        if(N > root->key && root->right !=NULL)
            root=root->right;
        if(N<= root->key && root->left !=NULL)
            root=root->left;
        if(temp->key <=N && root->key >N)            
        {
            if(temp->key >root->key)    
                return temp->key;
            else
                return root->key;
        }
        
        
    }
    return -1;
    
}