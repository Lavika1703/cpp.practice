# include<stdio.h>
int main() {
    int x;
    printf("enter number");
    scanf("%d" , &x);
    if (x==0) {
        printf("it is whole number");
    }
    else if ( x>0) {
        printf("natural number");
    }
    else {
        printf("not a number");
    }
    return 0;
}
