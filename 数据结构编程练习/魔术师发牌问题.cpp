//#include<iostream>
//#include<string>
//using namespace std;
//
//class LinkList
//{
//public:
//	int data;
//	LinkList *next;
//
//};
//LinkList *createList(int n)
//{
//	LinkList *p = NULL, *head;
//	head = new LinkList;
//	p = head;
//	LinkList *s;
//	if (n != 0)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			s = new LinkList;
//			s->data =0;
//			p->next = s;
//			p = s;
//		}
//		p->next = head->next;
//	}
//	delete head;
//	return p->next;
//}
//
//void Magician(LinkList *head)
//{
//	LinkList *p;
//	int countNumber = 2;
//	p = head;
//	p->data = 1;
//
//	while (1)
//	{
//		for (int j = 0; j < countNumber; j++)
//		{
//			p = p->next;
//			if (p->data != 0)
//			{
//				p->next;
//				j--;
//			}
//
//		}
//		if (p->data == 0)
//		{
//			p->data = countNumber;
//			countNumber++;
//			if (countNumber == 14)
//			{
//				break;
//			}
//		}
//	}
//	
//}
//
//
//
//int main()
//{
//	LinkList *p;
//	
//	p = createList(13);
//	Magician(p);
//	cout << "按如下顺序排列：" << endl;
//	for (int i = 0; i < 13; i++)
//	{
//		cout << "黑桃" << p->data;
//		p = p->next;
//	}
//	return 0;
//}