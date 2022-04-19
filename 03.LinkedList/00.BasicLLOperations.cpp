#include <iostream>

using namespace std;

class node {
public:
	int data;
	node *next;

	node(int val)
	{
		data = val;
		next = NULL;
	}
};
void add_front(node* &head, int val)
{
	node *temp = new node(val);
	temp->next = head;
	head = temp;
}

void add_tail(node* &head, int val)
{
	node *temp = new node(val);
	if (head == NULL)
	{
		head = temp;
		return;
	}
	node *itr = head;

	while (itr->next != NULL)
	{
		itr = itr->next;
	}
	itr ->next = temp;
	return;
}

void print_ll(node* head)
{
	node* itr = head;
	while (itr != NULL)
	{
		cout << itr->data << "->";
		itr = itr->next;
	}
	cout << "NULL\n";
}

node* reverse_itr(node* &head)
{
	node* prev = NULL;
	node* curr = head;
	node* forw = head ->next;
	while (forw != NULL)
	{
		curr-> next = prev;
		prev = curr;
		curr = forw;
		forw = forw->next;
	}
	curr->next = prev;
	return curr;
}

node* reverse_rec(node* &head)
{
	while (head != NULL)
	{

	}
}

int main()
{
	node* head = NULL;
	add_tail(head, 10);
	add_tail(head, 20);
	add_front(head, 1);
	print_ll(head);

	cout << "Reversed: ";
	head = reverse_itr(head);
	print_ll(head);
	return 0;
}
