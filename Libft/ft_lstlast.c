

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
			ft_lstlast(lst);
		}
	}
	return (lst);
}
