#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Stack{
  int Top;
  int size;
  int *S;
};

void Create(struct Stack *st)
{
  printf("Enter size: ");
  scanf("%d ",&st->size);

  st->top=-1;
  st->S=(int *)malloc(sizeof(int));
}

void Display(struct Stack st)
{
  printf("Elements are: ");
  for(i=st.top; i>=0; i++)
  {
    printf("%d ",st.S[i]);
  printf("\n");
  }
}

void Push(struct Stack *st, int x)
{
  if(st->top==st->size-1)
  {
    printf("Stack Overflow\n");
  }
  else
  {
    st->top++;
    st->S[st->top]=x;
  }
}

int Pop(struct Stack *st)
{
  int x=-1;

  if(st->top==-1)
  {
    printf("Stack Underflow\n");
  }
  else
  {
    x=st->S[st->top--];
  }
  return x;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct Stack st;

    Create(&st);
    Push(&st,5);
    Push(&st,6);
    Push(&st,8);
    Push(&st,9);
    Push(&st,2);

    printf("%d ",Pop(&st));
    Display(st);
    return 0;
}
