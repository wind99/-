//#include<iostream>
//#include<windows.h>
//#define MaxSize 50
//using namespace std;
//typedef int ElemType;
//class LinkList 
//{
//public:ElemType data;
//	   LinkList *next;
//	   void CreateList(LinkList *&L, ElemType a[], int n);
//	   void ShowList(LinkList *&L);
//	   void InsertData(LinkList *&, int i, ElemType eL);
//	   void DeleteData(LinkList *&L, int i);
//	   void DestoryList(LinkList *&L);
//	   int  FindByData(LinkList *&L, ElemType e);
//	   ElemType FindByLocate(LinkList *&L,int i);
//	   int ListLength(LinkList *&L);
//
//};
//
//void LinkList::CreateList(LinkList *&L, ElemType a[], int n)
//{
//#pragma region 头插法：
//	
//	/*LinkList *s;
//	L = new LinkList;
//	L->next = NULL;
//
//	for (int i = 0; i < n; i++)
//	{
//		s = new LinkList;
//		s->data = a[i];
//		s->next = L->next;
//		L->next = s;
//	}*/
//#pragma endregion
//
//#pragma region 尾插法：
//	LinkList *s, *r;
//	L = new LinkList;
//	r = L;
//	for (int i = 0; i < n; i++)
//	{
//		s = new LinkList;
//		s->data = a[i];
//		r->next = s;
//		r = s;
//	}
//	r->next = NULL;
//
//
//#pragma endregion
//
//
//	system("pause");
//	
//
//}
//
//void LinkList::ShowList(LinkList *&L)
//{
//	LinkList *p = L->next;
//	cout << "链表的元素为：" << endl;
//	if (L->ListLength(L) != 0)
//	{
//		while (p != NULL)
//		{
//			cout << p->data << "   ";
//			p = p->next;
//
//		}
//		cout << endl;
//	}
//	else cout << "该表无元素！" << endl << endl;
//	system("pause");
//	
//}
//
//void LinkList::InsertData(LinkList *&L, int i, ElemType e)
//{
//	int j = 0;
//	LinkList *p = L, *s;
//	if (L->ListLength(L) != 0)
//	{
//
//		while (j != i - 1)
//		{
//			p = p->next;
//			j++;
//		}
//		s = new LinkList;
//		s->data = e;
//		s->next = p->next;
//		p->next = s;
//	}
//	else cout << "该链表为空，请先创建链表！" << endl << endl;
//}
//
//void LinkList::DeleteData(LinkList *&L, int i)
//{
//	int j = 0;
//	LinkList *p = L;
//	if (L->ListLength(L) != 0)
//	{
//		while (j != i - 1)
//		{
//			p = p->next;
//			j++;
//		}
//		p->next = p->next->next;
//	}
//	else cout << "该链表为空，请先创建链表！" << endl << endl;
//}
//
//void LinkList::DestoryList(LinkList *&L)
//{
//	if (L->ListLength(L) != 0)
//	{
//		LinkList *pre = L, *p = L->next;
//		while (p != NULL)
//		{
//			delete pre;
//			pre = p;
//			p = pre->next;
//		}
//		delete pre;
//		cout << "成功销毁！" << endl;
//	}
//	else cout << "空链表，无需销毁" << endl;
//	system("pause");
//}
//
//int  LinkList::FindByData(LinkList *&L, ElemType e)
//{
//	if (L->ListLength(L) != 0)
//	{
//		LinkList *p = L;
//		int locate = 0;
//		while (p->data != e)
//		{
//			p = p->next;
//			locate++;
//		}
//		return locate;
//	}
//	else return 0;
//}
//
//ElemType LinkList::FindByLocate(LinkList *&L,int i)
//{
//	if (L->ListLength(L) != 0)
//	{
//		LinkList *p = L;
//		int j = 0;
//		while (j != i)
//		{
//			p = p->next;
//			j++;
//		}
//		return p->data;
//	}
//	else return (ElemType)-1;
//}
//
//int LinkList::ListLength(LinkList *&L)
//{
//	LinkList *p=L;
//	int i = 0;
//	while (p->next  != NULL)
//	{
//		p = p->next;
//		i++;
//	}
//	return i;
//
//}
//
//int showOrder()
//{
//	
//	cout <<endl << endl << endl<<"                                   欢迎来到线性表的操作系统！      "<<endl
//		                       << "                            1.创建一个线性表       2.显示整个线性表  " << endl
//		                       << "                            3.插入元素             4.删除元素" << endl
//		                       << "                            5.销毁整个线性表       6.判断线性表是否为空表" << endl
//		                       << "                            7.按元素查找           8.按位置查找 " << endl
//		                       << "                            9.显示整个线性表的长度 0.退出本系统        " << endl << endl
//		                       << " 请输入您的选择：";
//	int order;
//	cin >> order;
//	return order;
//	
//}
//int main()
//{
//	LinkList* L;
//	int order;
//	while (1)
//	{
//		order = showOrder();
//		switch (order)
//		{
//		case 1:
//			system("cls");
//			ElemType a[MaxSize];
//			int n;
//			cout << "请输入元素个数：";
//			cin >> n;
//			for (int i = 0; i < n; i++)
//			{
//				cin >> a[i];
//			}
//			L->CreateList(L, a, n);
//			break;
//		case 2:system("cls");   L->ShowList(L);
//			break;
//		case 3:system("cls");   
//			cout << "请输入要插入的位置和内容（用空格隔开）" << endl;
//			int i;
//			ElemType e;
//			cin >> i >> e;
//			L->InsertData(L,i,e);
//			break;
//		case 4:system("cls");
//			
//			cout << "输入要删除的元素的位置";
//			cin >> i;
//			L->DeleteData(L,i);
//			break;
//		case 5:system("cls");   L->DestoryList(L);
//			break;
//		case 6:system("cls");              break;
//		case 7:system("cls");
//			ElemType ele;
//			cout << "请输入要查找的元素的内容：";
//			cin >> ele;
//			cout<<"该元素的位置为："<<L->FindByData(L,ele);
//			break;
//		case 8:system("cls");
//			int location;
//			cout << "请输入要查找的元素的位置：";
//			cin >> location;  
//			cout<<"该位置的元素是："<<L->FindByLocate(L,location);
//			break;
//		case 9:system("cls");   cout << "该表的长度为：" << L->ListLength(L);
//			break;
//		case 0:system("cls"); exit(1); break;
//		default:
//			cout << "输入有误！请重新输入。" << endl << endl << endl;
//			Sleep(1200);
//			system("cls");
//			
//			break;
//		}
//	}
//	
//
//}