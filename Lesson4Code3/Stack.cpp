//#include<iostream>
//
//using namespace std;
//
//class node
//{
//public:
//	int data;
//	node* next;
//};
//
//node* head = NULL;
//
//node* YeniNode(int data)
//{
//	node* newNode = new node;
//	newNode->data = data;
//	newNode->next = NULL;
//
//	return newNode;
//}
//
//void ListeninOnuneEkle(int data)
//{
//	node* newNode = YeniNode(data);
//
//	if (head == NULL)
//	{
//		head = newNode;
//	}
//	else
//	{
//		newNode->next = head;
//		head = newNode;
//	}
//}
//
//void ListeyiGoster()
//{
//	cout << "Liste : ";
//	node* temp = head;
//
//	while (temp != NULL)
//	{
//		cout << temp->data;
//		if (temp->next != NULL)
//		{
//			cout << "-->";
//		}
//		temp = temp->next;
//	}
//	cout << endl << endl;
//}
//
//void Peek()
//{
//	if (head == NULL)
//	{
//		cout << "Listemiz boş" << endl;
//	}
//	else
//	{
//		cout << "Peek value is : "<< head->data << endl;;
//	}
//}
//
//void Pop()
//{
//	if (head == NULL)
//	{
//		cout << "Listemiz boş" << endl;
//	}
//	else
//	{
//		cout << "Popped value is : " << head->data << endl;;
//		head = head->next;
//	}
//}
//
//void IsEmpty()
//{
//	if (head == NULL)
//	{
//		cout << "Stack is empty" << endl;
//	}
//	else
//	{
//		cout << "Stack is not empty "<<endl;
//	}
//}
//
//void StackCount()
//{
//	cout << "Stack Count is : ";
//	node* temp = head;
//	int count = 0;
//
//	while (temp != NULL)
//	{
//		count++;
//		temp = temp->next;
//	}
//	cout << count << endl << endl;
//}
//
//int main()
//{
//	
//	ListeninOnuneEkle(5);
//	ListeninOnuneEkle(4);
//	ListeninOnuneEkle(3);
//	ListeninOnuneEkle(2);
//	ListeninOnuneEkle(1);
//
//
//	Peek();
//	Pop();
//	ListeyiGoster();
//	StackCount();
//	IsEmpty();
//
//	Peek();
//	Pop();
//	ListeyiGoster();
//
//	/*
//	Push () =>  Stack’a yeni veri eklemek için kullanılır.
//	Peek()  =>  Stack’ın en üstünde bulunan veriyi okur.
//	Pop()   => Stack’ın en üstünde bulunan veriyi siler.
//	Contains () => Stack’ta arama yapmaya yarar.
//	IsEmpty()
//	Count()
//
//	
//	*/
//
//}