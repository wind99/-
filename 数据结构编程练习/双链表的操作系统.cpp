//#include<iostream>
//#include<windows.h>
//
//using namespace std;
//typedef int ElemType;
//class SqList
//{
//public:ElemType data;
//	   int lenth;
//};
//void showOrder(SqList *&L);
//void CreateList(SqList *&L)
//{
//
//	int n;
//	cout << "������Ԫ�ص��ܸ�����";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> L->data[i];
//	}
//	L->lenth = n;
//	system("pause");
//	showOrder(L);
//}
//void ShowList(SqList *&L)
//{
//	cout << "˳����Ԫ��Ϊ��";
//	for (int i = 0; i < L->lenth; i++)
//	{
//		cout << L->data[i] << "    ";
//	}
//	cout << endl;
//	cout << "����Ϊ��" << L->lenth << endl;
//
//	system("pause");
//	showOrder(L);
//}
//
//
//
//void showOrder(SqList *&L)
//{
//	cout << endl << endl << endl << "                                   ��ӭ�������Ա�Ĳ���ϵͳ��      " << endl
//		<< "                            1.����һ�����Ա�     2.������Ա�ĳ���  " << endl
//		<< "                            3.����Ԫ��           4.ɾ��Ԫ��" << endl
//		<< "                            5.�����������Ա�     6.�ж����Ա��Ƿ�Ϊ�ձ�" << endl
//		<< "                            7.��Ԫ�ز���         8.��λ�ò��� " << endl
//		<< "                            9.��ʾ�������Ա�     0.�˳���ϵͳ        " << endl << endl
//		<< " ����������ѡ��";
//	int order;
//	cin >> order;
//	switch (order)
//	{
//	case 1:system("cls");   CreateList(L);       break;
//	case 2:system("cls");   ShowList(L);         break;
//	case 3:system("cls");         break;
//	case 4:system("cls");         break;
//	case 5:system("cls");         break;
//	case 6:system("cls");         break;
//	case 7:system("cls");         break;
//	case 8:system("cls");         break;
//	case 0:system("cls"); exit(1); break;
//	default:
//		cout << "�����������������롣" << endl << endl << endl;
//		Sleep(1200);
//		system("cls");
//		showOrder(L);
//		break;
//	}
//
//}
//int main()
//{
//	SqList* L = (SqList*)new SqList;
//	showOrder(L);
//
//}