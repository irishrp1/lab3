#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#define max 100

typedef struct{
	int top;
	char items[max];
}stack;

void push(stack *, char);
int pop(stack *);
int isDigit(char),value;
int operation(char,int,int);

int main()
{
	char a[max];
	int i,opnd1,opnd2,x,y;
	stack s;
	
	printf("postfix expression:\n");
	scanf("%s",a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(isDigit(x[a])==1)
		{
			push(&s,(int)(x[a]-'0'));
			printf("the pushed string  is %c\n",x[a]);
		}
		
		else if(isDigit(x[a])==0)
		{
			opnd2=pop(&s);
			opnd1=pop(&s);
			value=operation(x[a],opnd1,opnd2);
			push(&s,value);
		}
		
	}
	printf("the required value is %d",pop(&s));
}

void push(stack *s, char x)
{
	s->items[++(s->top)]=x;
}

int pop(stack *s)
{
	int x;
	x=s->items[(s->top)--];
	return x;
	
}

int isDigit(char sym)
{
if(sym>='0' && sym<='9')
return 1;
else
return 0;
}

int operation(char op,int a,int b)
{
	
	switch(op){
		case '+' : return(a+b);
		break;		
		case '-' : return(a-b);
		break;
		case '*' : return(a*b);
		break;
		case '/' : return(a/b);
		break;
		case '$' : return(pow(a,b));	
		break;
		default  : printf("%s","not valid ");
		exit(1);
	}
}
