#include <stdio.h>
#include "push_swap.h"

int	main(void)
{
	char *text;



	text = "hello, wold!";
	printf("%s\n",text);
	printf("numero de letras: %zu\n\n", ft_strlen(text));


	t_stack *lst, *lst1, *lst2;
	lst = ft_stacknew(20);
	lst1 = ft_stacknew(21);
	lst2 = ft_stacknew(300);
	ft_stackadd_back(&lst, lst1);
	ft_stackadd_front(&lst, lst2);


	while(lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");
}
