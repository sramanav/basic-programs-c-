#include<stdlib.h>
#include<stdio.h>

#define L 1024
#define TRUE 1U
#define FALSE 0U

/*global variables*/

size_t s_top=0;
int s[L];
typedef unsigned short int bool_t;

bool_t stack_empty(void)
{
if(s_top==0)
{
return TRUE;
}
else
{
return FALSE;
}
}
void push(int x)
{
s_top=s_top+1;
s[s_top]=x;
return;
}

int pop(void)
{
if(stack_empty()==TRUE)

printf('%d\n error: underflow');


else(s_top=s_top-1);

return s[s_top+1];

}

int main()
{
int loadarr[6]= {45,85,44,67,37,-47};
size_t i;
for(i=0;i!=6;++i)
{
push(loadarr[i]);
}

int x;
while(stack_empty()==FALSE)
{
x=pop();
printf("%d\n",x);
}
return EXIT_SUCCESS;
}
