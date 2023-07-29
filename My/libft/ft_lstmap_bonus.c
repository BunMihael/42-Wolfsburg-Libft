
#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
** Creates a new list resulting of the successive applications of the function ’f’.
** The ’del’ function is used to delete the content of an element if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ret;

	ret = NULL;
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (new)
		{
			new->content = f(lst->content);
			new->next = NULL;
		}
		else
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}
