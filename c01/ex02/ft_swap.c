/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:03:58 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/11 14:40:21 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
