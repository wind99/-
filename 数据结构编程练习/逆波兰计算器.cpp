//#include<iostream>
//#include<cctype>
//#include<cstdlib>
//#define STACK_INIT_SIZE 29
//#define STACKINCREMENT 10
//#define MAXBUFFER 10
//
//using ElemType = double;
//using namespace std;
//struct sqStack
//{
//	ElemType *base;
//	ElemType *top;
//	int stackSize;
//};
//void InitStack(sqStack *s)
//{
//	s->base = new ElemType;
//	if (!s->base)
//	{
//		exit(0);
//	}
//	s->top = s->base;
//	s->stackSize = STACK_INIT_SIZE;
//}
//void Push(sqStack *s, ElemType e)
//{
//	if (s->top - s->base >= s->stackSize)
//	{
//		s->base = new ElemType[s->stackSize + STACKINCREMENT];
//		if (!s->base)
//			exit(0);
//
//		s->top = s->base + s->stackSize;
//		s->stackSize = s->stackSize + STACKINCREMENT;
//
//	}
//	*(s->top) = e;
//	s->top++;
//}
//void Pop(sqStack *s, ElemType *e)
//{
//	if (s->top == s->base)
//		return;
//	*e = *--(s->top);
//}
//int StackLen(sqStack s)
//{
//	return s.top - s.base;
//}
//
//int main()
//{
//	sqStack s;
//	InitStack(&s);
//	char c;
//	char str[MAXBUFFER];
//	double d, e;
//	cout << "请按逆波兰表达式输入带计算数据，数据与运算符之间用空格隔开，以#结束:\n";
//	cin >> c;
//	int i = 0;
//	
//	while (c != '#')
//	{
//		while (isdigit(c) || c=='.')
//		{
//			str[i++] = c;
//			str[i] = '\0';
//			if (i >= 10)
//			{
//				cout << "输入的单个数据过大！\n";
//				return -1;
//			}
//			c = getchar();
//			if (c == ' ')
//			{
//				d = atof(str);
//				Push(&s,d);
//				i = 0;
//				break;
//			}
//		}
//		c = getchar();
//		switch (c)
//		{
//		case '+':
//			Pop(&s, &e);
//			Pop(&s, &d);
//			Push(&s, d + e);
//			break;
//		case '-':
//			Pop(&s, &e);
//			Pop(&s, &d);
//			Push(&s, d- e);
//			break;
//		case '*':
//			Pop(&s, &e);
//			Pop(&s, &d);
//			Push(&s, d * e);
//			break;
//		case '/':
//			Pop(&s, &e);
//			Pop(&s, &d);
//			if(e!=0)
//			Push(&s, d / e);
//			else
//			{
//				cout << "\n出错，除数为零\n";
//				return -1;
//			}
//			break;
//		}
//		  
//
//	}
//	Pop(&s, &d);
//	cout << "最终的计算结果为：" << d;
//	return 0;
//}