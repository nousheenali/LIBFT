/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nali <nali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:39:41 by nali              #+#    #+#             */
/*   Updated: 2021/11/03 10:43:32 by nali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	flag;

	flag = 1;
	if (!((c >= 97 && c <= 122) || (c >= 65 && c <= 90)))
		if (!(c >= 48 && c <= 57))
			flag = 0;
	return (flag);
}
