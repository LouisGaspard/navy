/*
** EPITECH PROJECT, 2017
** tests_get_input
** File description:
** tests_get_input
*/

#include "navy.h"
#include "my.h"
#include <criterion/criterion.h>

Test(is_end, check_is_end)
{
	char	a = '\0';

	cr_assert(is_end(a) == 1);
	a = '\n';
	cr_assert(is_end(a) == 1);
	a = 'e';
	cr_assert(is_end(a) == 0);
}
