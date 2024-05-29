#include <stdio.h>
#include <string.h>
int check(char a[])
{
    int s = 0, n = strlen(a);
    for (int i = 0; i <= (n - 1) / 2; i++){
    	if (a[i] != a[n - i - 1]) s++;
	}
    return (s == 1 || (n % 2 == 1 && s == 0));
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[100];
        scanf("%s", a);
        printf("%s\n", check(a) ? "YES" : "NO");
    }
}
