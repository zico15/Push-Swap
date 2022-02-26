/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:47:32 by edos-san          #+#    #+#             */
/*   Updated: 2022/01/29 18:40:45 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include	<stdlib.h>
# include   <stdio.h>
# include	<stdlib.h>
# include	<unistd.h>

# ifndef INT_MAX
#  define INT_MAX   2147483647
# endif

typedef struct s_array
{
	int					size;
	struct s_item		**values;
}	t_array;

typedef struct s_item
{
	int					value;
	int					index;
}	t_item;

int		add_item(int value, t_array *list);
void	print_list(t_array *list);

#endif
