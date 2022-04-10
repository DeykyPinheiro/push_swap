#include <stdio.h>
#include "push_swap.h"

	// void	free_stack(t_stack **lst)
	// {
	// 	t_list **aux;

	// 	aux = lst;
	// 	while(*lst.next)

	// }

int	main(void)
{
	char *text;

	text = "hello, wold!";
	printf("%s\n",text);
	printf("numero de letras: %zu\n\n", ft_strlen(text));

	t_stack *lst, *lst1, *lst2, *aux;
	lst = ft_stacknew(1);
	lst1 = ft_stacknew(2);
	lst2 = ft_stacknew(3);
	ft_stackadd_back(&lst, lst1);
	ft_stackadd_back(&lst, lst2);
	// ft_stackadd_front(&lst, lst1);
	// ft_stackadd_front(&lst, lst2);

	aux = lst;

	while(aux)
	{
		printf("%d ", aux->content);
		aux = aux->next;
	}
	printf("\n");

	// ft_stackrm_front(&lst);
	// ft_stackrm_front(&lst);
	ft_stackrm_back(&lst);
	// ft_stackrm_back(&lst);
	printf("paseei da funcao\n");
	while(lst)
	{
		printf("%d ", lst->content);
		lst = lst->next;
	}
	printf("\n");

	printf("cheguei aqui\n");

}
