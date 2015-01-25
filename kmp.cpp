#include <cstdio>

const int N = 5000; /* max pattern length - adjust */
int m, n; /* pattern length, text length */

int p[N]; /* pattern */
int f[N]; /* suffix links */

int main(void)
{   scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++)
    {   scanf("%d", &p[i]);
    }

    /* build automaton (fill the f array) */
    f[0] = -1;
    for(int i = 1; i < m; i++)
    {   int k = f[i - 1];
        while(p[k + 1] != p[i] && k >= 0) k = f[k];
        if(k == -1 && p[0] != p[i]) f[i] = -1;
        else f[i] = k + 1;
    }

    /* match */
    int x;
    int k = -1, pos = 0;
    for(int i = 0; i < n; i++)
    {   scanf("%d", &x);
        while(p[k + 1] != x && k >= 0) k = f[k];
        if(k == -1 && p[0] != x) k = -1;
        else k = k + 1;

        if(k == m - 1)
        {   printf("match at %d\n", pos - m + 1);
        }
        pos++;
    }

    return 0;
}
