#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};

int recur(struct node * x, int val,int h)
{
    h++;
    if(val>(x->data)) // to right
    {
        if(x->right ==NULL)
        {
            x->right = (struct node *)malloc(sizeof(struct node));
            x=x->right;
            x->data= val;
            x->left = x->right =NULL;
            return h;
        }
        else
        {
            x=x->right;
            return recur(x,val,h);
        }
    }
    else // to left
    {
        if(x->left ==NULL)
        {
            x->left = (struct node *)malloc(sizeof(struct node));
            x=x->left;
            x->data= val;
            x->left = x->right =NULL;
            return h;
        }
        else
        {
            x=x->left;
            return recur(x,val,h);
        }
    }

    return 0;
}
int main()
{
    int n;
    cin>>n;
    
    struct node *root =(struct node *)malloc(sizeof(struct node));
    int maxh =1;
    int x ; 
    cin>>x; 
    root->data= x;
    root ->left = root->right = NULL;

    for(int i =1 ;i<n ; i++)
    {
        int x;
        cin>> x; 
        int h =1;
        h= recur(root,x,h);

        if(h>maxh)
        {
            maxh = h ; 
        }

    }
    
    
    
    cout << maxh;
}