/*
** EPITECH PROJECT, 2023
** stumpers
** File description:
** tests_stumper
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(suite_name, test_description) {
    // Initialize your tests
    int n = 69;
    int result = 420;

    // Test your results with assertions
    cr_assert_eq(result, 420);
}
