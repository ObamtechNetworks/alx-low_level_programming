#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, NULL);
    print_all("mnbvfqcepolsbxzi", 3.14435, 'H', "#Cisfun", 0);
    print_all("fcsi", 3.14435, 'H', "#Cisfun", 0);
    print_all("qwertyuopadghjklzxvbnm");
    print_all("");
    print_all("fcsi", 3.14435, 'H', NULL, 402);
    print_all(NULL);
    return (0);
}
