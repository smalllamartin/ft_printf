/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 00:36:32 by brabo-hi          #+#    #+#             */
/*   Updated: 2017/12/21 01:34:24 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "ft_struct.h"

char	*ft_add_zero(char *dest, int min, int prefix);
char	*ft_add_prefix(char *out, char prefix1, char prefix2);
char	*ft_add_str(char *str, int max, t_cs *cs);
int		ft_find_max(t_cs *cs, int min, int prefix);
int		ft_find_min(t_cs *cs, int len, int prefix);
int		ft_find_zero(t_cs *cs, char *dest,  char prefix, int min);
#endif