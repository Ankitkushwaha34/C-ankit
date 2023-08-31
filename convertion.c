#include <stdio.h>
int main()
{
    char input;
    float kmstoMiles = 0.621371;
    float inchestoFoot = 0.0833333;
    float cmstoInches = 0.393701;
    float poundtoKgs = 0.453592;
    float inchestoMeters = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character . q to quit\n 1.kms to miles\n 2.inches to foot\n 3.cms to inches\n 4.pound to kgs\n 5.inches to meters\n");
        scanf("%c", &input);
        

        switch (input)
        {
        case 'q':
            printf("quitting to the program..");
            goto end;
            break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
            second = first * kmstoMiles;
            printf("%f  KMs is equal to %f Miles \n", first, second);
            break;
        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
            second = first * inchestoFoot;
            printf("%f Inches  is equal to %f  Foot\n", first, second);
            break;
        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
            second = first * cmstoInches;
            printf("%f Cms is equal to %f  Inches\n", first, second);
            break;
        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
            second = first * poundtoKgs;
            printf("%f Pounds is equal to %f kgs\n", first, second);
            break;
        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
            second = first * inchestoMeters;
            printf("%f inches is equal to %f meters \n", first, second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
