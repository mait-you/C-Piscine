#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *x;
	int i;
	int j;

	i = 0;
	while (s2[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s2[i] == s1[j])
				x[i] = s1[j];
			j++;
		}
		i++;
	}
	return x;
}

int main () {
   const char str1[] = "abcdefghi4jk4l";
   const char str2[] = "123456789";

  // char *rett = ft_strpbrk(str1, str2);
   //printf("%s\n", rett);

   char *ret = strpbrk(str1, str2);
   printf("%s\n", ret);
}
