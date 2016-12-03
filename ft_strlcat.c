/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 09:43:39 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 09:43:41 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dst_len)
		size -= dst_len;
	else if (src_len == 0)
		return (size);
	else if (dst_len > src_len)
		return (dst_len - src_len);
	else
		return (src_len + size);
	i = dst_len;
	j = 0;
	while (src[j] && --size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (dst_len + src_len);
}

int   main(void)
{
  char src1[] = "This is source";
  char dst1[50] = "This is destination";
  char src2[] = "This is source";
  char dst2[50] = "This is destination";

  //printf("%lu", strlen(dst1));
  printf("%lu", ft_strlcat(dst1, src1, 10));
  // printf("\n%s\n", dst1);
  //
  //printf("\n");
  //printf("%lu", strlcat(dst2, src2, 10));
  // printf("\n%s\n", dst2);

}
