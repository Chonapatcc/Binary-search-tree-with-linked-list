#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val=1; // ? for what
    struct node *left,*right;
};

int main()
{
    struct node *a , *b;

    a = (struct node *)malloc(sizeof(struct node));
    a->val = 1;
    //a->left=a->right =  NULL;

    cout << a->val<<endl;
     
    if(a->right ==NULL)
    {
        cout << "NULL2" ;
    }
}