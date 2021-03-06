/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_long_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaara <wvaara@hive.fi>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:53:59 by wvaara            #+#    #+#             */
/*   Updated: 2021/03/24 11:54:23 by wvaara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_long_long_len(long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	if (n < -9223372036854775807)
		len = 20;
	return (len);
}
