//#include<iostream>
//#include<cstdlib>
//#include<cmath>
//
//#define STACK_INIT_SIZE  20
//#define STACKINCREMENT  10
//
//using ElemType = char;
//class sqStack
//{
//public:
//	ElemType *base;
//	ElemType *top;
//	int stackSize;
//
//};
//
//void InitStack(sqStack *s)
//{
//	s->base = new ElemType[STACK_INIT_SIZE];
//	if (!s->base)
//	{
//		exit(0);
//	}
//	s->top = s->base;
//	s->stackSize = STACK_INIT_SIZE;
//}
//
//void Push(sqStack *s, ElemType e)
//{
//	if (s->top - s->base >= s->stackSize)
//	{
//		s->base = new ElemType[s->stackSize + STACKINCREMENT];
//		if (!s->base)
//		{
//			exit(0);
//		}
//	}
//	*(s->top) = e;
//	s->top++;
//	
//}
//void Pop(sqStack *s, ElemType *e)
//{
//	if (s->top == s->base)
//	{
//		return;
//	}
//	*e = *--(s->top);
//}
//
//int StackLen(sqStack s)
//{
//	return (s.top - s.base);
//}
//int main()
//{
//	ElemType c;
//	sqStack s; 
//	int len, sum = 0;
//	InitStack(&s);
//	std::cout << "���û������������������#��ʾ������" << std:: endl;
//	std::cin >> c;
////������ת��Ϊʮ����
//	//while (c != '#')
//	//{
//	//	Push(&s, c);
//	//	std::cin >> c;
//	//}
//	//getchar();//�ѻس��ӻ������õ�
//	//len = StackLen(s);
//	//std::cout << "ջ�ĵ�ǰ�����ǣ�" << len<< std::endl;
//	//for (int i = 0; i < len; i++)
//	//{
//	//	Pop(&s, &c);
//	//	sum += (c - 48)*pow(2, i);
//	//}
//	//std::cout << "ʮ����Ϊ��"<<sum << std::endl;
//
//
//	//�����Ƶ��˽��ƣ�
//	sqStack s1;
//	InitStack(&s1);
//
//	while (c != '#')
//	{
//		Push(&s, c);
//		std::cin >> c;
//	}
//	getchar();
//	
//	len = StackLen(s);
//	for (int i = 0; i < len; )
//	{
//		sum = 0;
//		for (int j = 0; j < 3&&i<len; j++)
//		{
//			Pop(&s, &c);
//			sum += (c - 48)*pow(2, j);
//			i++;
//		}
//		Push(&s1, sum + 48);
//	}
//	len = StackLen(s1);
//	for (int i = 0; i < len; i++)
//	{
//		Pop(&s1, &c);
//		std::cout << c<<std::endl ;
//	}
//
//
//
//
//
//	return 0;
//}