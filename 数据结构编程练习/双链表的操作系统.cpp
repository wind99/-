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
//	cout << "请输入元素的总个数：";
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
//	cout << "顺序表的元素为：";
//	for (int i = 0; i < L->lenth; i++)
//	{
//		cout << L->data[i] << "    ";
//	}
//	cout << endl;
//	cout << "长度为：" << L->lenth << endl;
//
//	system("pause");
//	showOrder(L);
//}
//
//
//
//void showOrder(SqList *&L)
//{
//	cout << endl << endl << endl << "                                   欢迎来到线性表的操作系统！      " << endl
//		<< "                            1.创建一个线性表     2.输出线性表的长度  " << endl
//		<< "                            3.插入元素           4.删除元素" << endl
//		<< "                            5.销毁整个线性表     6.判断线性表是否为空表" << endl
//		<< "                            7.按元素查找         8.按位置查找 " << endl
//		<< "                            9.显示整个线性表     0.退出本系统        " << endl << endl
//		<< " 请输入您的选择：";
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
//		cout << "输入有误！请重新输入。" << endl << endl << endl;
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