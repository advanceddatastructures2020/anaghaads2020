#include <stdio.h>
#include <stdlib.h>

struct btnode
{
 int value;
 struct btnode *l;
 struct btnode *r;
 }*root=NULL, *temp=NULL, *t2, *tl;


 void insert();
 void delete();
 void inorder(struct btnode *t);
 void create();
 void search(struct btnode *t);
 void preorder(struct btnode *t);
 void postorder(struct btnode *t);
 void search1(struct btnode *t (int data));
 int smallest(struct btnode *t);
 int largest(struct btnode *t);

 int flag=1;
 void main()
 {
  int ch;
  printf("\nOPERATIONS ");
  printf("\n 1. Insert an element into tree\n");
  printf("2. Delete an element from the tree\n");
  printf("3. Inorder Traversal\n");
  printf("4. Preoder Travelsal\n");
  printf("5. Postorder Travelsal\n");
  printf("6. Exit\n");
  while(1)
  {
   printf("\nEnter your choice:");
   scanf("%d",&ch);
   switch (ch)
   {
   case 1:
    insert();
    break;
   case 2:
    delete();
    break;
   case 3:
    inorder(root);
    break;
   case 4:
     preorder(root);
     break;
    case 5:
     postorder(root);
     break;
    case 6:
     exit(0);
    default:
    printf("wrong choice please enter correct choice :");
    break;
    }
   }
  }

  void insert()
  {
  create();
  if(root==NULL)
   root=temp;
   else
   search(root);
  }
  void create()
  {
  int data;
  printf("Enter data node to be inserted :");
  scanf("%d",&data);
  temp=(struct btnode *)malloc(l*sizeof(struct btnode));
  temp->value=data;
  temp->l=temp->r=NULL;
  }

  void search (struct btnode *t)
  {
   if ((temp->value > t->value) && (t->r != NULL))
   /* Value more than root node value insert at right */
   search(t->r);
   else if ((temp->value > t->value) && (t->r == NULL))
   t->r = temp;
   else if ((temp->value < t->value) && (t->l != NULL))
   search(t->l);
   else if ((temp->value < t->value) && (t->l == NULL))
     t->l = temp;
   }
