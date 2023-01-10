#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* COP 3502C Midterm Assignment Two
This program is written by: Christian Samson */


//creates structure soldier
typedef struct soldier
{
int start;
int data;
struct soldier *prev, *next;
}soldier;




//predeclared functions
soldier* create_soldier(int sequence);
soldier* create_reverse_circle(int);
soldier* rearrange_circle(struct soldier* head);
//void display(soldier* head);
//int kill(soldier* head, int n, int k);

//allocates soldier struct + returns soldier Node 
soldier* create_soldier(int sequence)
{
   struct soldier *ptr = (struct soldier*)malloc(sizeof(struct soldier));

  ptr->data = sequence;
  ptr->prev = NULL;
  ptr->next = NULL;
  ptr->start = 0;
  return (ptr);
}
//reverses circle 
soldier* create_reverse_circle(int data)
{
  struct soldier *last; 
  last = NULL;
  struct soldier* head = (struct soldier*)malloc(sizeof(struct soldier));
  
  for(int i = data; i > 0; i--)
  {
    struct soldier* temp = create_soldier(i);
    if(last == NULL)
    {
      head = temp;
      temp->prev = last;
      last = temp;
    }
    else
    {
      last->next = temp;
      temp->prev = last;
      last = temp;
    }
  }
  last->next = head;
  head->start = 1;
  head->prev = last;

 return head;
}

soldier* rearrange_circle(struct soldier* head)
{
head->start = 0;
head = head->prev;
head->start = 1;

struct soldier* reverse = head;
reverse = reverse->prev;

while(reverse->start != 1)
{
  struct soldier *temp = reverse->next;
  reverse->next = reverse->prev;
  reverse->prev = temp;
  reverse = reverse->next;
}
  struct soldier *headswap = head->next;
  head->next = head->prev;
  head->prev = headswap;
  

  return head;
}

int kill(struct soldier* head, int n, int k)
{
 while(head->next->data != head->data)
 {
   int count = 1;
   while(count < k)
   {
     head = head->next;
     count++;
   }
    struct soldier *after;
    struct soldier *before;

  after = head->next;
  before = head->prev;
  before->next = after;
  after->prev = before;
  head = after;

 }
  return head->data;
}

void display(struct soldier* head)
{
  do
  {
    printf("%d ",head->data);
    head = head->next;
  }while(head->start != 1);
}


int main(void) {
  int n, k;
  printf("Input: \n");
  scanf("%d %d",&n,&k);
 printf("Output: \n");
  struct soldier* head = create_reverse_circle(n);
 printf("List: ");
 display(head);
 head = rearrange_circle(head);
 printf("\n");
 printf("After Ordering: ");
 display(head);
 kill(head,n,k);
 printf("\nSurvived: %d",kill(head,n,k));
  
  
  return 0;
}
