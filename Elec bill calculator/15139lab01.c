#include <stdio.h>
#include <ctype.h>
main(){
    // Usage=U , Charge For Units=CFU , Fixed Charge=FC , Total Bill=TB
    int U;
    float CFU,FC,TB;
    // set CFU, FC, TB to zero.
    CFU=0.00;
    FC=0.00;
    TB=0.00;
    // Take the no of units used as the Input.
    printf("Enter the number of units used:\n");
    scanf("%d",&U);
    if(U<0)
        printf("-1\n");

    else
        if (U>60)
            if(U>90)
                if(U>120)
                    if(U>180)
                    {
                        CFU = 60*7.85 + 30*10.00 +30*27.75 +60*32.00 +(U-180)*45.00 ;
                        FC = 540.00 ;
                    }
                    else
                    {
                        CFU = 60*7.85 + 30*10.00 + 30*27.75 + (U-120)*32.00 ;
                        FC = 480.00 ;
                    }
                else
                    {
                    CFU = 60*7.85 + 30*10.00 + (U-90)*27.75 ;
                    FC = 480.00 ;
                    }
            else
                {
                CFU = 60*7.85 + (U-60)*10.00 ;
                FC = 90.00 ;
                }
        else
            if (U>30)
                {
                CFU = 30*2.50 + (U-30)*4.85 ;
                FC = 60.00 ;
                }
            else
                {
                CFU = U*2.50 ;
                FC = 30.00 ;
                }
    // Calculate the total bill
    TB = CFU + FC ;
    // Display the total bill as the Output.
    printf("Total Bill=%.2f",TB);
return 0;
}
