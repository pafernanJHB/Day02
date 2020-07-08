/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 07:55:41 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/08 08:38:46 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_alphabet(void);

int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
