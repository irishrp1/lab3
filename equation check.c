#include <stdio.h>
#include <string.h>
#define max 100

typedef struct{
	int top;
	char items[max];
}stack;

void push(stack *,char);
char pop(stack*);
char opening(char);
int main()
{
	char a[max],x,y;
	stack s;
	s.top=-1;
	int i,correct=1;
	
	printf("The equation \n");
	scanf("%s",&a);
	
	for(i=0;i<strlen(a);i++)
	{
		printf("%y\n",i);
		if(x[a]=='(' || x[a]=='{' || x[a]=='[')
		{
			push(&s,x[a]);
		}
		if (x[a]==')' || x[a]=='}' || x[a]==']')
		{	
			if(s.top==-1)
			{
			correct=0;
			}
			
			else
			{
			x=pop(&s);
			y=opening(x[a]);
			
			
			if(x!=y)
			{
			correct=0;
			}
			}
		
		}
		
	}
	
if(!(s.top==-1))
{
	correct=0;
}

if(correct==1)
{
	printf("correct");
}

else
{
	printf("incorrect");
}
}

void push(stack *s, char x)
{
	s->items[++(s->top)]=x;
}

char pop(stack *s)
{
	return s->items[(s->top)--];
}

char opening(char c)
{
	if(c==')')
	{
		return'(';
	}
	else if(c=='}')
	{
		return'{';
	}
	else if(c==']')
	{
		return'[';
	}
}



