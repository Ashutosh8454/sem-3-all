#include <stdio.h>
#include <conio.h>
#include <string.h>
#define max 40
/*char stack[max];
int top = -1;
void push(char ch)
{
    top++;
    stack[top] = ch;
}

void pop()
{
    char c;
    c = stack[top];
    top--;
    printf("%c", c);
}*/

  struct stack{
       char charr[20];
       int top;
 }s;


  void push(char ch)
  {
      s.top++;
      s.charr[s.top]=ch;
  }
  void pop()
  {
       char ch;
       ch=s.charr[s.top];
       printf("%c",ch);
       s.top--;
  }

int main()
{
    
   s.top=-1;
    char a[max];
    int len;
    printf("Enter String : ");
    scanf("%s", &a);

    len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        push(a[i]);
    }
    // reverse

    for (int i = 0; i < len; i++)
    {
        pop();
    }
    return 0;
}