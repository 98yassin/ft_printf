/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 23:58:51 by yait-kad          #+#    #+#             */
/*   Updated: 2019/12/28 10:28:01 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdlib.h>

void		char_c(t_str *tab)
{
	char print;

	print = va_arg(tab->ap, int);
	charc(tab, print);
}
