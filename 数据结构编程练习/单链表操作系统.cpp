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
//#pragma region ͷ�巨��
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
//#pragma region β�巨��
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
//	cout << "�����Ԫ��Ϊ��" << endl;
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
//	else cout << "�ñ���Ԫ�أ�" << endl << endl;
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
//	else cout << "������Ϊ�գ����ȴ�������" << endl << endl;
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
//	else cout << "������Ϊ�գ����ȴ�������" << endl << endl;
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
//		cout << "�ɹ����٣�" << endl;
//	}
//	else cout << "��������������" << endl;
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
//	cout <<endl << endl << endl<<"                                   ��ӭ�������Ա�Ĳ���ϵͳ��      "<<endl
//		                       << "                            1.����һ�����Ա�       2.��ʾ�������Ա�  " << endl
//		                       << "                            3.����Ԫ��             4.ɾ��Ԫ��" << endl
//		                       << "                            5.�����������Ա�       6.�ж����Ա��Ƿ�Ϊ�ձ�" << endl
//		                       << "                            7.��Ԫ�ز���           8.��λ�ò��� " << endl
//		                       << "                            9.��ʾ�������Ա�ĳ��� 0.�˳���ϵͳ        " << endl << endl
//		                       << " ����������ѡ��";
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
//			cout << "������Ԫ�ظ�����";
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
//			cout << "������Ҫ�����λ�ú����ݣ��ÿո������" << endl;
//			int i;
//			ElemType e;
//			cin >> i >> e;
//			L->InsertData(L,i,e);
//			break;
//		case 4:system("cls");
//			
//			cout << "����Ҫɾ����Ԫ�ص�λ��";
//			cin >> i;
//			L->DeleteData(L,i);
//			break;
//		case 5:system("cls");   L->DestoryList(L);
//			break;
//		case 6:system("cls");              break;
//		case 7:system("cls");
//			ElemType ele;
//			cout << "������Ҫ���ҵ�Ԫ�ص����ݣ�";
//			cin >> ele;
//			cout<<"��Ԫ�ص�λ��Ϊ��"<<L->FindByData(L,ele);
//			break;
//		case 8:system("cls");
//			int location;
//			cout << "������Ҫ���ҵ�Ԫ�ص�λ�ã�";
//			cin >> location;  
//			cout<<"��λ�õ�Ԫ���ǣ�"<<L->FindByLocate(L,location);
//			break;
//		case 9:system("cls");   cout << "�ñ�ĳ���Ϊ��" << L->ListLength(L);
//			break;
//		case 0:system("cls"); exit(1); break;
//		default:
//			cout << "�����������������롣" << endl << endl << endl;
//			Sleep(1200);
//			system("cls");
//			
//			break;
//		}
//	}
//	
//
//}