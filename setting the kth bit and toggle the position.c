/*#include <stdio.h>
int main()
{
    int BS;
    printf("\nenter the basic salary: ");
    scanf("%d",&BS);
    if (BS>=5000)
    {
        float DA=110*BS/100;
        printf("DA is %.2f",DA);
        float HRA=20*BS/100;
        printf("\nHRA is %.2f",HRA);
        int con=500;
        int GS=BS+DA+HRA+con;
        printf("\ngross salary is %d",GS);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}
*/
#include <stdio.h>

int main() {
    int num, k;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (0-based) to toggle: ");
    scanf("%d", &k);

    // Left-shift 1 by k positions to create a mask with the k-th bit set
    int a = 1 << k-1;

    // Toggle the k-th bit using XOR (^) operation
    int result = num ^ a;

    printf("The number with the %d-th bit toggled is: %d\n", k, result);

    return 0;
}


