#include <stdio.h>
int A(int num) {
    for (int i = 2; i<num; i++) {
        if (num % i == 0 ) return 0;
    }
    return 1;
}

int main() {

    int A(int num);
    int m,n,i;
    scanf("%d,%d", &m,&n);
    for (i = m; i <= n- 2; i++) {
        if (A(i) && A(i + 2)) {
            printf("%d,%d\n", i, i + 2);
        }
    }
    printf("\n");
    return 0;
}