
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst))
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main()
{
	t_list **buyinglist;
	t_list *tomato;
	t_list *beer;
	buyinglist = &tomato;
	tomato = NULL;
	tomato = ft_lstnew("tomato");
	t_list *apple;
	apple = ft_lstnew("apple");
	beer = ft_lstnew("beer");
	//ft_lstadd_front(&tomato, apple);
	ft_printlist(tomato);
	ft_printplist(&tomato);
	ft_printlist(apple);
	//ft_printplist(&apple);
	ft_lstadd_front(&tomato, apple);
	ft_lstadd_front(&tomato, beer);
	printf("uhm hello?\n");
	//ft_printlist(tomato);
	ft_printplist(&tomato);
	//ft_printlist(apple);
	//ft_printplist(&apple);
}*/