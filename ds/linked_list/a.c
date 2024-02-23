#include<stdio.h>
#include<stdlib.h>
struct node
{   struct node *prev;
    int data;
    struct node * next;
};
struct node * createnode()
{  struct node * newnode=NULL;
   int value;
  newnode=(struct node *)malloc(sizeof(struct node));
  if(newnode==NULL)
  {
    printf("error in memeory allocation \n");
    exit(EXIT_FAILURE);
  }
  else
  {
    printf("enter element:");
    scanf("%d",&value);
    newnode->prev=NULL;
    newnode->data=value;
    newnode->next=NULL;
  }

}
void create_link_list(struct node **head,struct node **tail)
{
    struct node * newnode=NULL;
    struct node *tempnode=*head;
    newnode=createnode();
    if(*head==NULL && *tail==NULL)
    {
        *head=*tail=newnode;
    }
    else
    {  while(tempnode->next!=NULL)
       {
         tempnode=tempnode->next;
        }
        (*tail)->next=newnode;
        newnode->prev=*tail;
        *tail=newnode;
    }

}
void display_forward(struct node * head)
{   if(head==NULL)
  {
    printf("link list is empty ");
    exit(EXIT_FAILURE);
 }
 else
 {
    struct node * tempnode=head;
      while(tempnode !=NULL)
       {
          printf("%d ",tempnode->data);
          tempnode=tempnode->next;
       }
 }

}
void display_backward(struct node * tail)
{ if(tail==NULL)
 {
  printf("link list is empty ");
  exit(EXIT_FAILURE);
 } 
 else
 {  struct node * tempnode=tail;
   while(tempnode !=NULL)
   {
    printf("%d ",tempnode->data);
    tempnode=tempnode->prev;
   }
   

 }

}

int main ()
{   struct node *first=NULL;
    struct node *last=NULL;
      int choice;
    do
    { printf("1.create ");
      printf("2.display forward ");
      printf("3. display backward ");
      printf("0. exit ");
        printf("enter your choice: ");
        scanf("%d",&choice);
      switch(choice)
      {
        case 1:create_link_list(&first,&last);
          break;
        case 2:display_forward(first);
          break;
        case 3:display_backward(last);
      }
    }while(choice !=0);
}