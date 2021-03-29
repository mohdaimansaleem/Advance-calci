#include <stdio.h>
#include <math.h>

float calci();
float temp();
float weight();
float len();
float time();

int main()
{
    int input;
    int type;

    printf("\n\n");
    printf("*------------------------------------------------*\n");
    printf("|\tPRESS (1) FOR CALCULATOR                 |\n");
    printf("|\tPRESS (2) FOR TEMPERATURE CONVERTER      |\n");
    printf("|\tPRESS (3) FOR WEIGHT CONVERTER           |\n");
    printf("|\tPRESS (4) FOR LENGTH CONVERTER           |\n");
    printf("|\tPRESS (5) FOR TIME CONVERTER             |\n");
    printf("*------------------------------------------------*\n");

    printf("\nPRESS DESIRED KEY : ");
    scanf("%d", &input);
    while (1)
    {
        if (input == 0 || input > 5)
        {
            printf("*------------------------------------------------*\n");
            printf("\t**PLEASE SELECT A VALID OPERATION**\n");
            printf("*------------------------------------------------*\n");
        }

        else if (input == 1)
        {
            calci();
        }
        else if (input == 2)
        {
            temp();
        }
        else if (input == 3)
        {
            weight();
        }
        else if (input == 4)
        {
            len();
        }
        else if (input == 5)
        {
            time();
        }

        printf("\n");
        printf("*------------------------------------------------*\n");
        printf("|\tPRESS 1 FOR MAIN MENU                    |\n");
        printf("|\tPRESS 2 FOR REPEAT                       |\n");
        printf("|\tPRESS 3 FOR EXIT                         |\n");
        printf("*------------------------------------------------*\n");

        printf("\nPRESS DESIRED KEY : ");
        scanf("%d", &type);

        if (type != 2)
        {
            break;
        }
    }
    if (type == 1)
    {
        main();
    }

    if (type == 3)
    {
        printf("\n**************************************************\n");
        printf("\tTHANK YOU...\n\tFROM MOHD AIMAN SALEEM @2021\n");
        printf("**************************************************\n");
    }

    return 0;
}

float calci()
{
    float num1, num2, result;
    int operator;

    printf("\n\n");
    printf("\t**WELCOME TO CALCULATOR**");
    printf("\n\n");
    printf("*------------------------------------------------*\n");
    printf("|\tPRESS 1 FOR SUBTRACTION                  |\n");
    printf("|\tPRESS 2 FOR ADDITION                     |\n");
    printf("|\tPRESS 3 FOR MULTIPLICATION               |\n");
    printf("|\tPRESS 4 FOR DIVISION                     |\n");
    printf("|\tPRESS 5 FOR POWER                        |\n");
    printf("*------------------------------------------------*\n");

    getchar();
    printf("\nENTER OPERATOR : ");
    scanf("%d", &operator);

    if (operator== 0 || operator> 5)
    {
        printf("*------------------------------------------------*\n");
        printf("\t**PLEASE SELECT A VALID OPERATION**\n");
        printf("*------------------------------------------------*\n");
    }
    else
    {
        if (operator== 5)
        {

            printf("\nENTER BASE NUMBER : ");
            scanf("%f", &num1);

            printf("\nENTER POWER : ");
            scanf("%f", &num2);

            result = pow(num1, num2);
            printf("\n*------------------------------------------------*\n");
            printf("\t%f POWER %f IS %f\n", num1, num2, result);
            printf("*------------------------------------------------*\n");
        }

        else
        {
            printf("\nENTER FIRST NUMBER : ");
            scanf("%f", &num1);

            printf("\nENTER SECOND NUMBER : ");
            scanf("%f", &num2);

            printf("\n*------------------------------------------------*\n");
            switch (operator)
            {
            case 1:

                printf("\tSUBTRACTION OF TWO NUMBERS IS %f", num1 - num2);
                break;

            case 2:

                printf("\tADDITION OF TWO NUMBERS IS %f", num1 + num2);
                break;

            case 3:

                printf("\tMULTIPLICATION OF TWO NUMBERS IS %f", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                {

                    printf("\tDIVISION OF TWO NUMBERS IS %f", num1 / num2);
                    break;
                }
                else
                {
                    printf("\t**UNDEFINED**\n");
                    break;
                }
            default:
                printf("\t**PLEASE SELECT A VALID OPERATION**");
            }
            printf("\n*------------------------------------------------*\n");
        }
    }
}

float temp()
{

    int n;
    float result, t, A, B, C, D, E, F;

    printf("\n\n");
    printf("\t**WELCOME TO TEMPERATURE CONVERTOR**");
    printf("\n\n");
    printf("*------------------------------------------------*\n");
    printf("|\tPRESS 1 FOR CELSIUS TO FAHRENHEIT        |\n");
    printf("|\tPRESS 2 FOR FAHRENHEIT TO CELSIUS        |\n");
    printf("|\tPRESS 3 FOR CELSIUS TO KELVIN            |\n");
    printf("|\tPRESS 4 FOR KELVIN TO CELSIUS            |\n");
    printf("|\tPRESS 5 FOR KELVIN TO FAHRENHEI          |\n");
    printf("|\tPRESS 6 FOR FAHRENHEIT TO KELVIN         |\n");
    printf("*------------------------------------------------*\n");
    printf("\nSELECT THE OPERATION : ");
    scanf("%d", &n);

    if (n == 0 || n > 6)
    {
        printf("*------------------------------------------------*\n");
        printf("\t**PLEASE SELECT A VALID OPERATION**\n");
        printf("*------------------------------------------------*\n");
    }

    else
    {

        printf("\nENTER THE TEMPERATURE : ");
        scanf("%f", &t);

        A = (t * 1.8) + 32;
        B = (t - 32) * 0.55;
        C = t + 273.15;
        D = t - 273.15;
        E = (t - 273.15) * 1.8 + 32;
        F = (t - 32) * 0.55 + 273.15;
        printf("*------------------------------------------------*\n");
        switch (n)
        {
        case 1:
        {
            printf("\tTHE RESULT IS %f", A);
            break;
        }
        case 2:
        {
            printf("\tTHE RESULT IS %f", B);
            break;
        }
        case 3:
        {
            printf("\tTHE RESULT IS %f", C);
            break;
        }
        case 4:
        {
            printf("\tTHE RESULT IS %f", D);
            break;
        }
        case 5:
        {
            printf("\tTHE RESULT IS %f", E);
            break;
        }
        case 6:
        {
            printf("\tTHE RESULT IS %f", F);
            break;
        }
        default:
        {
            printf("\tPLEASE SELECT A VALID OPERATION");
        }
        }
        printf("\n*------------------------------------------------*\n");
    }
}

float weight()
{

    int c1, c2;
    float wt, result;

    printf("\n");
    printf("\n\n");
    printf("\t**WELCOME TO WEIGHT CONVERTOR**\n");
    printf("\n\n");
    printf("*------------------------------------------------*\n");
    printf("|\tMILLIGRAM       --   1                   |\n");
    printf("|\tGRAM            --   2                   |\n");
    printf("|\tKILOGRAM        --   3                   |\n");
    printf("|\tQUINTAL         --   4                   |\n");
    printf("|\tTONNE           --   5                   |\n");
    printf("*------------------------------------------------*\n");

    printf("\nENTER THE FROM CODE : ");
    scanf("%d", &c1);

    if (c1 == 0 || c1 > 5)
    {
        printf("\n*------------------------------------------------*\n");
        printf("\t**PLEASE SELECT A VALID OPERATION**\n");
        printf("*------------------------------------------------*\n");
    }

    else
    {
        printf("\nENTER THE TO CODE : ");
        scanf("%d", &c2);

        if (c2 == 0 || c2 > 5)
        {
            printf("\n*------------------------------------------------*\n");
            printf("\t**PLEASE SELECT A VALID OPERATION**\n");
            printf("*------------------------------------------------*\n");
        }

        else
        {
            printf("\nENTER THE WEIGHT : ");
            scanf("%f", &wt);

            printf("\n*------------------------------------------------*\n");
            if (c1 == 1 && c2 == 1)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (c1 == 2 && c2 == 2)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (c1 == 3 && c2 == 3)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (c1 == 4 && c2 == 4)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (c1 == 5 && c2 == 5)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (c1 == 1 && c2 != 1)
            {

                if (c1 == 1 && c2 == 2)
                {
                    result = wt * 0.001;
                }

                if (c1 == 1 && c2 == 3)
                {
                    result = wt * 0.000001;
                }

                if (c1 == 1 && c2 == 4)
                {
                    result = wt * 0.00000001;
                }

                if (c1 == 1 && c2 == 5)
                {
                    result = wt * 0.000000001;
                }
                printf("\tTHE RESULT IS %f", result);
            }

            else if (c1 == 2 && c2 != 2)
            {

                if (c1 == 2 && c2 == 1)
                {
                    result = wt * 1000;
                }
                if (c1 == 2 && c2 == 3)
                {
                    result = wt * 0.001;
                }
                if (c1 == 2 && c2 == 4)
                {
                    result = wt * 0.00001;
                }

                if (c1 == 2 && c2 == 5)
                {
                    result = wt * 0.000001;
                }
                printf("\tTHE RESULT IS %f", result);
            }
            else if (c1 == 3 && c2 != 3)
            {

                if (c1 == 3 && c2 == 1)
                {
                    result = wt * 1000000;
                }

                if (c1 == 3 && c2 == 2)
                {
                    result = wt * 1000;
                }
                if (c1 == 3 && c2 == 4)
                {
                    result = wt * 0.01;
                }
                if (c1 == 3 && c2 == 5)
                {
                    result = wt * 0.001;
                }
                printf("\tTHE RESULT IS %f", result);
            }

            else if (c1 == 4 && c2 != 4)
            {
                if (c1 == 4 && c2 == 1)
                {
                    result = wt * 100000000;
                }
                if (c1 == 4 && c2 == 2)
                {
                    result = wt * 100000;
                }
                if (c1 == 4 && c2 == 3)
                {
                    result = wt * 100;
                }
                if (c1 == 4 && c2 == 5)
                {
                    result = wt * 0.1;
                }
                printf("\tTHE RESULT IS %f", result);
            }

            else if (c1 == 5 && c2 != 5)
            {
                if (c1 == 5 && c2 == 1)
                {
                    result = wt * 1000000000;
                }
                if (c1 == 5 && c2 == 2)
                {
                    result = wt * 1000000;
                }
                if (c1 == 5 && c2 == 3)
                {
                    result = wt * 1000;
                }
                if (c1 == 5 && c2 == 4)
                {
                    result = wt * 10;
                }
                printf("\tTHE RESULT IS %f", result);
            }

            printf("\n*------------------------------------------------*\n");
        }
    }
}

float len()
{
    int d1, d2;
    float ar, ab;

    printf("\n\n");
    printf("\t**WELCOME TO LENGTH CONVERTOR**");
    printf("\n\n");
    printf("*------------------------------------------------*\n");

    printf("|\tMILLIMETRE        --   1                 |\n");
    printf("|\tCENTIMETRE        --   2                 |\n");
    printf("|\tMETER             --   3                 |\n");
    printf("|\tKILOMETER         --   4                 |\n");
    printf("|\tINCH              --   5                 |\n");
    printf("|\tFOOT              --   6                 |\n");
    printf("*------------------------------------------------*\n");
    printf("\nENTER THE FROM CODE : ");
    scanf("%d", &d1);

    if (d1 == 0 || d1 > 6)
    {
        printf("*------------------------------------------------*\n");
        printf("\t**PLEASE SELECT A VALID OPERATION**\n");
        printf("*------------------------------------------------*\n");
    }

    else
    {
        printf("\nENTER THE TO CODE : ");
        scanf("%d", &d2);

        if (d2 == 0 || d2 > 6)
        {
            printf("*------------------------------------------------*\n");
            printf("\t**PLEASE SELECT A VALID OPERATION**\n");
            printf("*------------------------------------------------*\n");
        }

        else
        {
            printf("\nENTER THE LENGTH : ");
            scanf("%f", &ar);

            printf("\n*------------------------------------------------*\n");
            if (d1 == 1 && d2 == 1)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (d1 == 2 && d2 == 2)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (d1 == 3 && d2 == 3)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (d1 == 4 && d2 == 4)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (d1 == 5 && d2 == 5)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (d1 == 6 && d2 == 6)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (d1 == 1 && d2 != 1)
            {
                if (d1 == 1 && d2 == 2)
                {
                    ab = ar * 0.1;
                }
                if (d1 == 1 && d2 == 3)
                {
                    ab = ar * 0.001;
                }
                if (d1 == 1 && d2 == 4)
                {
                    ab = ar * 0.000001;
                }
                if (d1 == 1 && d2 == 5)
                {
                    ab = ar / 25.4;
                }
                if (d1 == 1 && d2 == 6)
                {
                    ab = ar / 305;
                }
                printf("\tTHE RESULT IS %f", ab);
            }
            if (d1 == 2 && d2 != 2)
            {
                if (d1 == 2 && d2 == 1)
                {
                    ab = ar * 10;
                }
                if (d1 == 2 && d2 == 3)
                {
                    ab = ar / 100;
                }
                if (d1 == 2 && d2 == 4)
                {
                    ab = ar / 100000;
                }
                if (d1 == 2 && d2 == 5)
                {
                    ab = ar / 2.54;
                }
                if (d1 == 2 && d2 == 6)
                {
                    ab = ar / 30.48;
                }
                printf("\tTHE RESULT IS %f", ab);
            }
            if (d1 == 3 && d2 != 3)
            {
                if (d1 == 3 && d2 == 1)
                {
                    ab = ar * 1000;
                }
                if (d1 == 3 && d2 == 2)
                {
                    ab = ar * 100;
                }
                if (d1 == 3 && d2 == 4)
                {
                    ab = ar / 1000;
                }
                if (d1 == 3 && d2 == 5)
                {
                    ab = ar * 39.37;
                }
                if (d1 == 3 && d2 == 6)
                {
                    ab = ar * 3.281;
                }
                printf("\tTHE RESULT IS %f", ab);
            }
            if (d1 == 4 && d2 != 4)
            {
                if (d1 == 4 && d2 == 1)
                {
                    ab = ar * 1000000;
                }
                if (d1 == 4 && d2 == 2)
                {
                    ab = ar * 100000;
                }
                if (d1 == 4 && d2 == 3)
                {
                    ab = ar * 1000;
                }
                if (d1 == 4 && d2 == 5)
                {
                    ab = ar * 39370;
                }
                if (d1 == 4 && d2 == 6)
                {
                    ab = ar * 3281;
                }
                printf("\tTHE RESULT IS %f", ab);
            }
            if (d1 == 5 && d2 != 5)
            {
                if (d1 == 5 && d2 == 1)
                {
                    ab = ar * 25.4;
                }
                if (d1 == 5 && d2 == 2)
                {
                    ab = ar * 2.54;
                }
                if (d1 == 5 && d2 == 3)
                {
                    ab = ar / 39.37;
                }
                if (d1 == 5 && d2 == 4)
                {
                    ab = ar / 39370;
                }
                if (d1 == 5 && d2 == 6)
                {
                    ab = ar / 12;
                }
                printf("\tTHE RESULT IS %f", ab);
            }
            if (d1 == 6 && d2 != 6)
            {
                if (d1 == 6 && d2 == 1)
                {
                    ab = ar * 305;
                }
                if (d1 == 6 && d2 == 2)
                {
                    ab = ar * 30.48;
                }
                if (d1 == 6 && d2 == 3)
                {
                    ab = ar / 3.281;
                }
                if (d1 == 6 && d2 == 4)
                {
                    ab = ar / 3281;
                }

                if (d1 == 6 && d2 == 5)
                {
                    ab = ar * 12;
                }
                printf("\tTHE RESULT IS %f", ab);
            }

            printf("\n*------------------------------------------------*\n");
        }
    }
}

float time()
{

    int e1, e2;
    float tym, tm;
    printf("\n\n");
    printf("\t**WELCOME TO TIME CONVERTOR**");
    printf("\n\n");
    printf("*------------------------------------------------*\n");
    printf("|\tSECOND                  --   1           |\n");
    printf("|\tMINUTE                  --   2           |\n");
    printf("|\tHOUR                    --   3           |\n");
    printf("|\tDAY                     --   4           |\n");
    printf("|\tWEEK                    --   5           |\n");
    printf("|\tMONTH                   --   6           |\n");
    printf("|\tYEAR                    --   7           |\n");
    printf("|\tDECADE                  --   8           |\n");
    printf("|\tCENTURY                 --   9           |\n");
    printf("*------------------------------------------------*\n");

    printf("\nENTER THE FROM CODE : ");
    scanf("%d", &e1);
    if (e1 == 0 || e1 > 9)
    {
        printf("*------------------------------------------------*\n");
        printf("\t**PLEASE SELECT A VALID OPERATION**\n");
        printf("*------------------------------------------------*\n");
    }
    else
    {
        printf("\nENTER THE TO CODE : ");
        scanf("%d", &e2);

        if (e2 == 0 || e2 > 9)
        {
            printf("*------------------------------------------------*\n");
            printf("\t**PLEASE SELECT A VALID OPERATION**\n");
            printf("*------------------------------------------------*\n");
        }
        else
        {
            printf("\nENTER THE TIME : ");
            scanf("%f", &tm);

            //IF BOTH THE FROM AND TO ARE SAME
            printf("\n*------------------------------------------------*\n");
            if (e1 == 1 && e2 == 1)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 2 && e2 == 2)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (e1 == 3 && e2 == 3)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 4 && e2 == 4)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 5 && e2 == 5)
            {
                printf("\tBOTH THE UN=ITS ARE SAME");
            }
            if (e1 == 6 && e2 == 6)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 7 && e2 == 7)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 8 && e2 == 8)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }
            if (e1 == 9 && e2 == 9)
            {
                printf("\tBOTH THE UNITS ARE SAME");
            }

            if (e1 == 1 && e2 != 1)
            {

                if (e1 == 1 && e2 == 2)
                {
                    tym = tm / 60.;
                }

                if (e1 == 1 && e2 == 3)
                {
                    tym = tm / 3600;
                }

                if (e1 == 1 && e2 == 4)
                {
                    tym = tm / 86400;
                }

                if (e1 == 1 && e2 == 5)
                {
                    tym = tm / 604800;
                }
                if (e1 == 1 && e2 == 6)
                {
                    tym = tm / 2628000;
                }
                if (e1 == 1 && e2 == 7)
                {
                    tym = tm / 31540000;
                }
                if (e1 == 1 && e2 == 8)
                {
                    tym = tm / 315400000;
                }
                if (e1 == 1 && e2 == 9)
                {
                    tym = tm / 3154000000;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 2 && e2 != 2)
            {

                if (e1 == 2 && e2 == 1)
                {
                    tym = tm * 60;
                }
                if (e1 == 2 && e2 == 3)
                {
                    tym = tm / 60;
                }
                if (e1 == 2 && e2 == 4)
                {
                    tym = tm / 1440;
                }
                if (e1 == 2 && e2 == 5)
                {
                    tym = tm / 10080;
                }
                if (e1 == 2 && e2 == 6)
                {
                    tym = tm / 43800;
                }
                if (e1 == 2 && e2 == 7)
                {
                    tym = tm / 525600;
                }
                if (e1 == 2 && e2 == 8)
                {
                    tym = tm / 5256000;
                }
                if (e1 == 2 && e2 == 9)
                {
                    tym = tm / 52560000;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 3 && e2 != 3)
            {

                if (e1 == 3 && e2 == 1)
                {
                    tym = tm * 3600;
                }

                if (e1 == 3 && e2 == 2)
                {
                    tym = tm * 60;
                }
                if (e1 == 3 && e2 == 4)
                {
                    tym = tm / 24;
                }
                if (e1 == 3 && e2 == 5)
                {
                    tym = tm / 168;
                }

                if (e1 == 3 && e2 == 6)
                {
                    tym = tm / 730;
                }
                if (e1 == 3 && e2 == 7)
                {
                    tym = tm / 8760;
                }
                if (e1 == 3 && e2 == 8)
                {
                    tym = tm / 87600;
                }
                if (e1 == 3 && e2 == 9)
                {
                    tym = tm / 876000;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 4 && e2 != 4)
            {
                if (e1 == 4 && e2 == 1)
                {
                    tym = tm * 86400;
                }
                if (e1 == 4 && e2 == 2)
                {
                    tym = tm * 1440;
                }
                if (e1 == 4 && e2 == 3)
                {
                    tym = tm * 24;
                }
                if (e1 == 4 && e2 == 5)
                {
                    tym = tm / 7;
                }
                if (e1 == 4 && e2 == 6)
                {
                    tym = tm / 30.417;
                }
                if (e1 == 4 && e2 == 7)
                {
                    tym = tm / 365;
                }
                if (e1 == 4 && e2 == 8)
                {
                    tym = tm / 3650;
                }
                if (e1 == 4 && e2 == 9)
                {
                    tym = tm / 36500;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 5 && e2 != 5)
            {
                if (e1 == 5 && e2 == 1)
                {
                    tym = tm * 604800;
                }
                if (e1 == 5 && e2 == 2)
                {
                    tym = tm * 10080;
                }
                if (e1 == 5 && e2 == 3)
                {
                    tym = tm * 168;
                }
                if (e1 == 5 && e2 == 4)
                {
                    tym = tm * 7;
                }
                if (e1 == 5 && e2 == 6)
                {
                    tym = tm / 4.345;
                }
                if (e1 == 5 && e2 == 7)
                {
                    tym = tm / 52.143;
                }
                if (e1 == 5 && e2 == 8)
                {
                    tym = tm / 521;
                }
                if (e1 == 5 && e2 == 9)
                {
                    tym = tm / 5214;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 6 && e2 != 6)
            {
                if (e1 == 6 && e2 == 1)
                {
                    tym = tm * 2628000;
                }
                if (e1 == 6 && e2 == 2)
                {
                    tym = tm * 43800;
                }
                if (e1 == 6 && e2 == 3)
                {
                    tym = tm * 730;
                }
                if (e1 == 6 && e2 == 4)
                {
                    tym = tm * 30.417;
                }
                if (e1 == 6 && e2 == 5)
                {
                    tym = tm * 4.345;
                }
                if (e1 == 6 && e2 == 7)
                {
                    tym = tm / 12;
                }
                if (e1 == 6 && e2 == 8)
                {
                    tym = tm / 120;
                }
                if (e1 == 6 && e2 == 9)
                {
                    tym = tm / 1200;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 7 && e2 != 7)
            {
                if (e1 == 7 && e2 == 1)
                {
                    tym = tm * 31540000;
                }
                if (e1 == 7 && e2 == 2)
                {
                    tym = tm * 525600;
                }
                if (e1 == 7 && e2 == 3)
                {
                    tym = tm * 8760;
                }
                if (e1 == 7 && e2 == 4)
                {
                    tym = tm * 365;
                }
                if (e1 == 7 && e2 == 5)
                {
                    tym = tm * 52.143;
                }
                if (e1 == 7 && e2 == 6)
                {
                    tym = tm * 12;
                }
                if (e1 == 7 && e2 == 8)
                {
                    tym = tm / 10;
                }
                if (e1 == 7 && e2 == 9)
                {
                    tym = tm / 100;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            else if (e1 == 8 && e2 != 8)
            {
                if (e1 == 8 && e2 == 1)
                {
                    tym = tm * 315400000;
                }
                if (e1 == 8 && e2 == 2)
                {
                    tym = tm * 5256000;
                }
                if (e1 == 8 && e2 == 3)
                {
                    tym = tm * 87600;
                }
                if (e1 == 8 && e2 == 4)
                {
                    tym = tm * 3650;
                }
                if (e1 == 8 && e2 == 5)
                {
                    tym = tm * 521;
                }
                if (e1 == 8 && e2 == 6)
                {
                    tym = tm * 120;
                }
                if (e1 == 8 && e2 == 7)
                {
                    tym = tm * 10;
                }
                if (e1 == 8 && e2 == 9)
                {
                    tym = tm / 10;
                }
                printf("\tTHE RESULT IS %f", tym);
            }

            if (e1 == 9 && e2 != 9)
            {
                if (e1 == 9 && e2 == 1)
                {
                    tym = tm * 3154000000;
                }
                if (e1 == 9 && e2 == 2)
                {
                    tym = tm * 52560000;
                }
                if (e1 == 9 && e2 == 3)
                {
                    tym = tm * 876000;
                }
                if (e1 == 9 && e2 == 4)
                {
                    tym = tm * 36500;
                }
                if (e1 == 9 && e2 == 5)
                {
                    tym = tm * 5214;
                }
                if (e1 == 9 && e2 == 6)
                {
                    tym = tm * 1200;
                }
                if (e1 == 9 && e2 == 7)
                {
                    tym = tm * 100;
                }
                if (e1 == 9 && e2 == 8)
                {
                    tym = tm * 10;
                }
                printf("\tTHE RESULT IS %f", tym);
            }
            printf("\n*------------------------------------------------*\n");
        }
    }
}