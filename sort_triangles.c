#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    //  Sort an array a of the length n
    int arr[n];

    for (int i=0; i<n; i++) {
        int p= (tr[i].a + tr[i].b + tr[i].c)/2;
        arr[i] = pow(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c),0.5);
    }

    for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++){
                triangle temp;
                if (arr[i]>arr[j]) {
                    temp = tr[i];
                    tr[i]=tr[j];
                    tr[j]=temp;
                    continue;
                }
            }
        }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    printf("Triangles sorted by area are as follows: \n");
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}