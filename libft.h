/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 09:28:26 by imoran            #+#    #+#             */
/*   Updated: 2016/11/28 13:43:05 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>


char    *ft_strcat(char *s1, const char *s2);
char    *ft_strcpy(char *dst, const char *src);
size_t  ft_strlcat(char *dst, char *src, size_t size);
size_t  ft_strlen(const char *str);
char    *ft_strncat(char *s1, const char *s2, size_t n);
char    *ft_strncpy(char *dst, char *src, size_t len);


#endif
