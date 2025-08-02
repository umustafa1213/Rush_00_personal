/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umustafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:46:55 by umustafa          #+#    #+#             */
/*   Updated: 2025/08/02 13:08:50 by umustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y)
{
	int y_ = 1;
	while (y_ <= y)
	{
		If (y_ == 1)
		{
			int x_ = 1;

			while (x_ <= x)
			{
				If (x == 1)
				{
					ft_putchar('A'); /* For the first A of the first line */
					x_ = x_ + 1;
				}
				If (x != x)
				{
					ft_putchar('B');
					x_ = x_ + 1;
				}
				If (x_ == x)
				{
					ft_putchar('C');
					ft_putchar('\n');
					x_ = x_ + 1;
				}
			}
			y_ = y_ + 1;
		}
		If (y_ != 1)
		{
			int x_ = 1;

                        while (x_ <= x)
                        {
                                If (x == 1)
                                {
                                        ft_putchar('B'); /* For the first A of the first line */
                                        x_ = x_ + 1;
                                }
                                If (x != x)
                                {
                                        ft_putchar(' ');
                                        x_ = x_ + 1;
                                }
                                If (x_ == x)
                                {
                                        ft_putchar('B');
                                        ft_putchar('\n');
                                        x_ = x_ + 1;
                                }
			}
                        y_ = y_ + 1;
		}

		If (y_ == y)
		{
			int x_ = 1;

                        while (x_ <= x)
                        {
                                If (x == 1)
                                {
                                        ft_putchar('A'); /* For the first A of the first line */
                                        x_ = x_ + 1;
                                }
                                If (x != x)
                                {
                                        ft_putchar('B');
                                        x_ = x_ + 1;
                                }
                                If (x_ == x)
                                {
                                        ft_putchar('C');
                                        ft_putchar('\n');
                                        x_ = x_ + 1;
                                }
			}
                        y_ = y_ + 1;
		}
