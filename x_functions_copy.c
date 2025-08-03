/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_functions_copy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umustafa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:56:13 by umustafa          #+#    #+#             */
/*   Updated: 2025/08/03 11:16:23 by umustafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	x_function_1(int x)
{
	x_ = 1;
	while (x_ <= x)
        {
	       	if (x_ == 1)
                {
			if (x == 1)
                        {ft_putchar('A');
                         ft_putchar('\n');
                         x_ = x_ + 1;}
                        if (x > 1)
                        {ft_putchar('A');
                         x_ = x_ + 1;}
                }
                if (x_ < x)
                {ft_putchar('B');
                 x_ = x_ + 1;}
                if (x_ == x)
                {ft_putchar('C');
                 ft_putchar('\n');
                 x_ = x_ + 1;}
        }
}
