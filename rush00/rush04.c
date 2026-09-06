/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seconsta <seconsta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 08:17:20 by seconsta          #+#    #+#             */
/*   Updated: 2026/09/06 08:23:24 by seconsta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1)
			{
				if (col == 1 || col == x)
					write(1, "A", 1);
				else
					write(1, "B", 1);
			}
			else if (row == y)
			{
				if (col == 1 || col == x)
					write(1, "C", 1);
				else
					write(1, "B", 1);
			}
			else
			{
			    if (col == 1 || col == x)
					write(1, "B", 1);
				else
					write(1, " ", 1);
			}
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
