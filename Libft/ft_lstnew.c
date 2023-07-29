
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_obj;

	new_obj = (t_list *)malloc(sizeof(t_list));
	if (new_obj)
	{
		new_obj->content = content;
		new_obj->next = NULL;
	}
	return (new_obj);
}
