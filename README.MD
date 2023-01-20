```
t_stack	*rra(t_stack *root)
{
	t_stack		*iter;
	t_stack		*tmp;
	static int	t2p;
	static int	t1p;
 //I used static here because for norminette rules (If you set a variable as static, the variable is automatically set to 0, so I don't have to set to 0.)

	tmp = root;
	iter = root;
  //I set iter to end because I need to start by set to the last element.
	while (iter->next != NULL)
		iter = iter->next;
	while (tmp->next != NULL)
	{
		if (tmp->data == root->data)
		{
			t2p = tmp->data;
			tmp->data = iter->data;
			tmp = tmp->next;
		}
		t1p = tmp->data;
		tmp->data = t2p;
		tmp = tmp->next;
		t2p = t1p;
		if (tmp->next == NULL)
			tmp->data = t2p;
	}
  // briefly with t2p I store the previous number with t1p the current number then equate t2p to t1p and run the loop.
  // I used the last if condition to equalize the last digit before exiting the while.
	return (root);
}
```
