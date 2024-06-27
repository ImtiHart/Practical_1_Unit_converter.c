#include <stdio.h>
#include <stdlib.h>

/*Initialize variables*/
char conversion;
float number;
/*Ask for conversion type. Use conversion type to identify case. Ask for number to convert, then convert the number.*/
int main()
{
    printf("Choose a conversion option by the letters displayed below:\n");
    printf("C refers to the conversion of Celsius to Fahrenheit\n");
    printf("F refers to the conversion of Fahrenheit to Celsius\n");
    printf("K refers to the conversion of Kilogram to Pounds\n");
    printf("P refers to the conversion of Pounds to Kilograms\n");
    printf("M refers to the conversion of Meters to Inches\n");
    printf("I refers to the conversion of Inches to Meters\n");
    printf("I choose: ");
    scanf("%c", &conversion);
    switch(conversion)
    {
    case 'C':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        float converted_number1 = (number*1.8)+32;
        printf("%.4f", converted_number1);
        break;

    case 'F':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        number= number-32;
        float converted_number2 = number*0.555555556;
        printf("%.4f", converted_number2);
        break;

    case 'K':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        float converted_number3 = number*2.205;
        printf("%.4f", converted_number3);
        break;

    case 'P':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        float converted_number4 = number/2.205;
        printf("%.4f", converted_number4);
        break;

    case 'M':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        float converted_number5 = number*39.37;
        printf("%.4f", converted_number5);
        break;

    case 'I':
        printf("What number do you want to convert: ");
        scanf("%f", &number);
        float converted_number6 = number/39.37;
        printf("%.4f", converted_number6);
        break;
    }
    return 0;
}
