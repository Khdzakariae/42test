/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:16:42 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/15 08:47:24 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_clear(char **ptr, int current)
{
	int i;

	i = 0;
	while (i < current)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	checkwords(char const *s, char c)
{
	size_t	i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				i++;
			}
			words++;
			continue;
		}
		i++;
	}
	return (words);
}

int  fill_arrays(char const *s, char c, char **ptr)
{
	int	end;
	int	i;
	int j;
	
	i = 0;
	j = 0;
	end = 0;

	while (s[i]) 
	{
		if (s[i] == c) {
			i++;
			continue;
		} 
		else 
		{
			end = i;
			while (s[end] && s[end] != c)
				end++;
			ptr[j] = ft_substr(s, i, end - i);
			if (ptr[j] == NULL) {
				ft_clear(ptr, j);
				return 1;
			}
			j++;
			i = end;
		}
	}
	ptr[j] = NULL;
	return 0;
}

char	**ft_split(char const *s, char c)
{
	//int		j;
	int		words;
	char	**ptr;

	if (!s)
		return NULL;
//	j = 0;
	words = checkwords(s, c) + 1;
	ptr = malloc(words * sizeof(char *));
	if (!ptr)
		return NULL;
	if (fill_arrays(s, c, ptr))
		return NULL;

	return (ptr);
}

