/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c10870.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwon <kwon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 21:16:53 by kwon              #+#    #+#             */
/*   Updated: 2020/09/04 21:20:56 by kwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//피보나치
//0번째 0, 1번째 1
//F(n) = F(n-1) + F(n-2)

#include <stdio.h>

int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n>=2)
        return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;

    scanf("%d",&n);
    printf("%d\n",fibo(n));
}
