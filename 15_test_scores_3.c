#include <stdio.h>

int main()
{
    int score;
    int sum = 0;
    
    printf("Enter the test score: ");
    scanf("%d", &score);
    
    while(score != -1)
    {
        sum = sum + score;
        printf("Enter the test score: ");
        scanf("%d", &score);
    }
    
    printf("Sum of test scores is: %d", sum);
    
    return 0;
}
