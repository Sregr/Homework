#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    score/=5;
    switch(score)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        printf("D"); 
        break;
    case 12:
    case 13:
        printf("C"); 
        break;
    case 14:
    case 15:
    case 16:
        printf("B");
        break;
    default:
        printf("A");
        break;
    }
    return 0;
}