//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//};
//
//
//node *create(int n)
//{
//	node *p = NULL, *head;
//	head = new node;
//	p = head;
//	int i=1;
//	node *s;
//	if (i != n)
//	{
//		while (i < n)
//		{
//			s = new node;
//			s->data = i++;
//			p->next =s;
//			p = s;
//			
//		}
//		s->next = head->next;
//	}
//	delete head;
//	return s->next;
//
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int m;
//	cin >> m;
//
//	int i;
//	node *p = create(n);
//	node *temp;
//
//	m %= n;
//	while (p != p->next)
//	{
//		for (i = 1; i < m-1; i++)
//		{
//			p = p->next;
//		}
//		cout << p->next->data<<"  ";
//
//		temp = p->next;
//		p->next = temp->next;
//		delete temp;
//		p = p->next;
//
//	}
//	cout << p->data<<endl;
//
//
//	return 0;
//}