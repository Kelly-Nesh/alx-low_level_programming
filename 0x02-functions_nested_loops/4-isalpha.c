#include "main.h"

/**_isalpha - returns 1 or 0
 * return value is 1 or zero
 */
int _isalpha(int n)
{
	if((n >= 'a' && n <= 'z') ||
		(n >= 'A' && n <= 'Z'))
		return (1);
	else
		return (0);
}
