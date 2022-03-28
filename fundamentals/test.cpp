#include<cstdio>

#define length 10

int main() {
    int list[length][length];
    int x = 0;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            list[i][j] = x;
            x++;
        }
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("[%d]", list[i][j]);
        }
        printf("\n");
    }
}
