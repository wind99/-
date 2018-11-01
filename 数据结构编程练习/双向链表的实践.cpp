//#include<iostream>
//using namespace std;
//
//#define OK   1
//#define ERROR   0
//
//
//using ElemType = char;
//class DualNode
//{
//public :
//	ElemType data;
//	DualNode *prior;
//	DualNode *next;
//
//};
//
//bool InitList(DualNode *& L)
//{
//	DualNode *p, *q;
//	L = new DualNode;
//	if (!L)
//	{
//		return false;
//	}
//	L->next = L->prior = NULL;
//	p = L;
//	for (int i = 0; i < 26; i++)
//	{
//		q = new DualNode;
//		if (!q)
//		{
//			return false;
//		}
//		q->data = 65 + i;
//		q->prior = p;
//		q->next = p->next;
//		p->next = q;
//
//		p = q;
//	}
//	L->next->prior = q;
//	p->next = L->next;
//	return true;
//}
//void Caesar(DualNode *&L, int i)
//{
//	if (i>0)
//	{
//		do
//		{
//			L = L->next;
//
//		} while (--i);
//	}
//	if (i<0)
//	{
//		do
//		{
//			L = L->next;
//
//		} while (++i);
//	}
//}
//
//
//int main()
//{
//	DualNode *L;
//	int n;
//	InitList(L);
//
//	cout << "请输入一个整数：";
//	cin >> n;
//	cout << endl;
//	Caesar(L, n);
//
//	for (int i = 0; i < 26; i++)
//	{
//		L = L->next;
//		cout << L->data << "  ";
//	}
//	return 0;
//}