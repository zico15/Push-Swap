/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edos-san <edos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:36:01 by edos-san          #+#    #+#             */
/*   Updated: 2022/01/29 18:45:11 by edos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

int	str_to_int(char *v, int n)
{
	if (v && *v >= '0' && *v <= '9')
	{
		n = (n * 10) + (*v - '0');
		v++;
		return (str_to_int(v, n));
	}
	return (n);
}

//int	main(int argc, char **argv)
int	main(void)
{
	t_array	list;
	int		i;
	int		argv[5];

	argv[0] = 4;
	argv[1] = 9;
	argv[2] = 3;
	argv[3] = 7;
	argv[4] = 84;
	list.values = NULL;
	list.size = 0;
	i = -1;
	if (6 > 1)
	{
		printf("\nSIZE: %i\n", 5);
		while (++i < 5)
		{
			add_item(argv[i], &list);
		}
		print_list(&list);
	}
	return (0);
}
