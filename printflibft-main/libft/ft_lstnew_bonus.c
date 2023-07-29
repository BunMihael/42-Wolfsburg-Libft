
#include "libft.h"

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