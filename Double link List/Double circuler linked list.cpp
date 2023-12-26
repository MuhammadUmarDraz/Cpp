#include<iostream>
using namespace std;
struct List
{
	int data;
	List* prev;
	List* next;
};

List* Head = NULL;
List* Tail = NULL;

void insertAtLast()
{
	List* Node = new List;
	cout<<"Enter data:";
	cin>>Node->data;
	Node->prev = NULL;
	Node->next = NULL;
	if(Head == NULL)
	{
		Head = Node;
		Tail = Node;
	}
	else
	{
		List* temp = Head;
		while(temp != NULL)
		{
			if(temp->next == Head)
			{
				temp->next = Node;
				Tail = Node;
				Node->prev = temp;
				Head->prev = Tail;
				Tail->next = Head;
				break;
			}
			else
			{
				temp = temp->next;
			}
		}
	}
}

void display()
{
	if(Head == NULL)
	{
		cout<<"List is empty";
	}
	else
	{	
		List* temp = Head;
		while(temp != NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}
	}
}

int main()
{
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	insertAtLast();
	cout<<"Display data:"<<endl;
	display();
	return 0;
}