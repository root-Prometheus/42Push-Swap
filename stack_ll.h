#ifndef stack_ll
#define stack_ll
struct n{
	n * next;
	int data;
};
typedef n node;
int pop(node *);
node* push(node *,int);
#endif
