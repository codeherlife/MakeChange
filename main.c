//
//  change.c
//  ChangeLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Change Lab;
//  Date: 9/10/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>

FILE *fp;

int main(void) {
    int twenty = 2000;
    int ten = 1000;
    int five = 500;
    int one = 100;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int amtTendered = 10000;
    int itemCost = 2117;
    int changeAmt;
    int twentysNeeded;
    int tensNeeded;
    int fivesNeeded;
    int onesNeeded;
    int quartersNeeded;
    int dimesNeeded;
    int nickelsNeeded;
    int penniesNeeded;

    fp = fopen("csis.txt", "w");
    
    changeAmt = amtTendered - itemCost;
    
    twentysNeeded = changeAmt / twenty;
    changeAmt = changeAmt % twenty;
    
    tensNeeded = changeAmt / ten;
    changeAmt = changeAmt % ten;
    
    fivesNeeded = changeAmt / five;
    changeAmt = changeAmt % five;
    
    onesNeeded = changeAmt / one;
    changeAmt = changeAmt % one;
    
    quartersNeeded = changeAmt / quarter;
    changeAmt = changeAmt % quarter;
    
    dimesNeeded = changeAmt / dime;
    changeAmt = changeAmt % dime;
    
    nickelsNeeded = changeAmt / nickel;
    changeAmt = changeAmt % nickel;
    
    penniesNeeded = changeAmt / penny;
    changeAmt = changeAmt % penny;
    
    printf("%s %s\n", "Amount Tendered: ", "$100.00");
    fprintf(fp, "%s %s\n", "Amount Tendered: ", "$100.00");
    printf("%s %12s\n", "Item Cost: ", "$21.17");
    fprintf(fp, "%s %12s\n", "Item Cost: ", "$21.17");
    printf("%s %10d\n", "Twenties: ", twentysNeeded);
    fprintf(fp, "%s %10d\n", "Twenties: ", twentysNeeded);
    printf("%s %14d\n", "Tens: ", tensNeeded);
    fprintf(fp, "%s %14d\n", "Tens: ", tensNeeded);
    printf("%s %13d\n", "Fives: ", fivesNeeded);
    fprintf(fp, "%s %13d\n", "Fives: ", fivesNeeded);
    printf("%s %14d\n", "Ones: ", onesNeeded);
    fprintf(fp, "%s %14d\n", "Ones: ", onesNeeded);
    printf("%s %10d\n", "Quarters: ", quartersNeeded);
    fprintf(fp, "%s %10d\n", "Quarters: ", quartersNeeded);
    printf("%s %13d\n", "Dimes: ", dimesNeeded);
    fprintf(fp, "%s %13d\n", "Dimes: ", dimesNeeded);
    printf("%s %11d\n", "Nickels: ", nickelsNeeded);
    fprintf(fp, "%s %11d\n", "Nickels: ", nickelsNeeded);
    printf("%s %11d\n", "Pennies: ", penniesNeeded);
    fprintf(fp, "%s %11d\n", "Pennies: ", penniesNeeded);

    return 0;
}
