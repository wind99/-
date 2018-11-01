#include<iostream>
using namespace std;
#define STACK_INIT_SIZE 20
#define STACKINCREMENT 10
using ElemType = char;

struct sqStack
{
	ElemType *base;
	ElemType *top;
	int stackSize;
};
void InitStack(sqStack *s)
{
	s->base = new ElemType[STACK_INIT_SIZE];
	if (!s->base)
	{
		exit(0);
	}
	s->top = s->base;
	s->stackSize = STACK_INIT_SIZE;
}
void Push(sqStack *s, ElemType e)
{
	if (s->top - s->base >= s->stackSize)
	{
		s->base = new ElemType[s->stackSize + STACKINCREMENT];
		if(!s->base)
		{
			exit(0);
		}		
	}
	*(s->top) = e;
	s->top++;
}
void Pop(sqStack *s, ElemType *e)
{
	if (s->top == s->base)
	{
		return;
	}
	*e = *--(s->top);	 
}

int StackLen(sqStack *s)
{
	return (s->top - s->base);
}

int main()
{
	sqStack s;
	InitStack(&s);
	char c, e;
	cout << "请输入中缀表达式，以#结束：" << endl;//1+(2-3)*4+10/5#
	cin >> c;	
	while (c != '#')
	{
		while (c >= '0'&&c <= '9')
		{
			cout << c;
			cin >> c;
			if (c<'0' || c>'9')
			{
				cout << "  ";
			}
		}
		if (')' == c)
		{
			Pop(&s, &e);
			while ('(' != e)
			{
				cout << e;
				Pop(&s, &e);
			}
		}
		else if ('+' == c || '-' == c)
		{
			if (!StackLen(&s))
			{
				Push(&s,c);
			}
			else
			{
				do
				{
					Pop(&s, &e);
					if ('(' == e)
					{
						Push(&s, e);
					}
					else
					{
						cout << e;
					}
				} while (StackLen(&s) && '(' != e);
				Push(&s, c);
			}
		}
		else if ('*' == c || '/' == c || '(' == c)
		{
			Push(&s, c);
		}
		else if ('#' == c)
		  {
			  break;
		  }
		else
		{
			cout << "输入格式错误" << endl;
			return -1;
		}
		cin >> c;
	}
	while (StackLen(&s))
	{
		Pop(&s, &e);
		cout << e;
	}
	return 0;
}