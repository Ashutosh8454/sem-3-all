#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stack{
     char ch[40];
     int top;
}s;


void push (char c)
{
    s.top++;
    s.ch[s.top]=c;

}

void pop()
{
    printf("%c",s.ch[s.top]);
    s.top--;
}

int main()
{
    char str[30];
    printf("Enter String : ");
    scanf("%s",&str);

    int len = strlen(str);

    for(int i=0;i<len;i++)
    {
        push(str[i]);
    }

    for(int i=0;i<len;i++)
    {
        pop();
    }
    return 0;
}
