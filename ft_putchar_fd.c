/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlehuger <vlehuger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:39:49 by vlehuger          #+#    #+#             */
/*   Updated: 2013/11/20 14:41:40 by vlehuger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
