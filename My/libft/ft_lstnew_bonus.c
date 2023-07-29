
#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new element.
** The variable ’content’ is initialized with the value of the parameter ’content’.
** The variable ’next’ is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}

/*int	main()
{
	t_list *buyinglist;
	t_list *tidylist;
	//buyinglist = NULL;
	buyinglist = ft_lstnew("einkaufen");
	tidylist = ft_lstnew("aufräumen");
	ft_printlist(buyinglist);
}*/