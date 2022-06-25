/**
* _strspn-span the number
* @s: char
* @accept: char
* Return: the number of bytes in the initial segment
* of s whic consist only of bytes from accept
*/
unsigned int _strspn(char *, char *accept)
{
	unsigned int i, count;

	count = 0;
	i = 0;

	while(s[i] != '\0')
	{
		unsigned int j = 0;

		while(accept[j] != '\0')
		{
			if(accept[j] == s[i])
			{
				count++;
				i++;
				j = 0;
				continue;
			}
			j++;
		}
		return count;
	}
	return count;
}


/**
 #include "main.h"
 *_strspn - gets the length of a prefix substring
 @s: string to evaluate
 @accept: string containing the list of characters to match in s

 Return: the number of bytes in the initial segment
 of s which consist only of bytes from accept

 unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
*/
