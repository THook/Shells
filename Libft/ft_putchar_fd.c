/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvillain <hvillain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 18:11:27 by hvillain          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/03/27 01:32:59 by hvillain         ###   ########.fr       */
=======
/*   Updated: 2014/03/27 14:54:25 by hvillain         ###   ########.fr       */
>>>>>>> 7d15ed58453f21c799961531db58cc50d490ec5c
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
