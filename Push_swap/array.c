/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:15:23 by edos-san          #+#    #+#             */
/*   Updated: 2022/01/29 18:45:23 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	add_item(int value, t_array *list)
{


	if (!list->values)
		list->values = malloc(1 * sizeof(list->values));
	list->values[list->size] = malloc(1 * sizeof(t_item));
	if (!list->values[list->size])
		return (0);
	list->values[list->size]->value = value;
	list->values[list->size]->index = list->size;
	list->size++;
	return (1);
}


void	print_list(t_array *list)
{
	int	i;

	i = -1;
	while (++i < list->size)
	{
		if (list->values[i])
			printf("i: %i v: %i\n", i, list->values[i]->value);
	}
}
