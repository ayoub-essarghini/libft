/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:55:22 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/11 11:18:36 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int ft_count_subs(char const *s, char c)
{
    int count;
    
    count = 0;
    while (*s)
    {
        if (*s == c)
        {
            count++;
        }
        s++;
    }
    return (count);
}

static char    *ft_strndup(char const *s, int len)
{
    char    *b;
     b = (char *)malloc((len + 1) * sizeof(char));
     if (!b)
     {
         free(b);
         return (NULL);
     }
     b = strncpy(b,s,len);
     b[len] = '\0';
     return (b);
}
char **ft_split(char const *s, char c)
{
    char **strs;
    char const *start;
    int sub_len;
    int count;
    int i;
    
    i = 0;
    start  = s;
    count = ft_count_subs(s,c) + 1;
    strs = (char **)malloc(count * sizeof(char *));
    if (!strs)
            free(strs);
            return (NULL);
    s = start;
    while (*s)
        if (*s == c)
            sub_len  = s - start;
            strs[i] = ft_strndup(start,sub_len);
            start = s + 1;
              i++;
        s++;
    strs[i] = strdup(start);
    strs[count] = 0;
    return (strs);
}
