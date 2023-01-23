/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunday <egunday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 00:15:34 by egunday           #+#    #+#             */
/*   Updated: 2023/01/23 08:20:41 by egunday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_space(int space)
{
	if (space / 2 != 0)
		return (space / 2 + 1);
	else
		return (space);
}

void	ft_read_file(char **argfv)
{
	char	**list;
	int		count;
	int		*arr;
	int		i;

	i = 0;
	count = ft_strlen(argfv[1]);
	arr = (int *)malloc(find_space(count) * sizeof(int *));
	list = (char **)malloc(count * sizeof(char **));
	list = ft_split(argfv[1], ' ');
	while (list[i] != NULL)
	{
		if (list[i] != " ")
			arr[i] = ft_atoi(list[i]);
		i++;
	}
    if (i == 3)
    if (i >= 4 && i <= 5)
    if (i >= 100 && i < 500)
    if (i == 500)

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_read_file(argv);
	}
    else if (argc >= 3)
    {
        if (argc == 3)
            test_three(argc,argv);
        if (argc >= 4 && argc <= 5)
            test_five(argc,argv);   
        if (argc >= 100 && argc < 500)
            test_one_hundred(argc,argv);
        if (argc == 500)
            test_five_hundred(argc,argv);
            
    }
    else
        exit(write(1,"\nerror",sizeof("\nerror")));
        
}