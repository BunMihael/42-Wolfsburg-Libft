

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		f(lst->content);
		lst = lst->next;
		ft_lstiter(lst, f);
	}
}
