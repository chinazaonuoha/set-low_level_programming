#include <stdio.h>

/**
 * pre_main_message - Executed automatically before main()
 *
 * Description: Uses a compiler attribute to force execution during
 * the runtime initialization phase.
 */
void __attribute__((constructor)) pre_main_message(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
