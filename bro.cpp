#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *left,*right;
};
int recur(int value,int h,struct node *x )
{
    h++;
    cout <<"|"<< h<<"|" << endl;
    if(x==NULL)
    {
        cout << "what" <<endl;
        x=(struct node*)malloc(sizeof(struct node));
        x->val = value;
        x->left=x->right=NULL ;
        return h;
    }
    else
    {
        if(value>(x->val)) //right
        {
            x=x->right;
        }
        else //left
        {
            x=x->left;
        }
        return recur(value,h,x);
    }
}
int main()
{
    int n;
    cin>>n;
    
    struct node *root =(struct node*)malloc(sizeof(struct node));
    int maxh =1 ;
    
    for(int i=0 ; i< n ; i++)
    {
        int h=0;
        int val; 
        cin>>val;
        if(i==0)
        {
            root->val=val;
            root->left=NULL;
            root->right=NULL;
            continue;
        }
        h= recur(val ,h,root);
        if(h>maxh)
        {
            maxh = h;
        }

        
    }
    cout << maxh;
}