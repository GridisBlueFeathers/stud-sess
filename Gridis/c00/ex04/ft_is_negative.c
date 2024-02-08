/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gridis <gridis72@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 23:20:31 by Gridis            #+#    #+#             */
/*   Updated: 2024/02/08 23:22:39 by Gridis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*#include <stdlib.h>
int main(int argc, char **argv)
{
	(void)argc;
	ft_is_negative(atoi(argv[1]));
}*/
