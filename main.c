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
//add include math.h

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
    int amtTendered = 10000; //or 10,000
    int itemCost = 2117;
    int changeAmt; //should be 7,883
    int twentysNeeded; //should be equal to 3
    int remainderAfter20s; //should be equal to 1,883
    int tensNeeded; // should be equal to 1
    int remainderAfter10s; // should equal 883
    int fivesNeeded; // should be 1
    int remainderAfter5s; // should equal 383
    int onesNeeded; //should equal 3
    int remainderAfter1s; //should equal 83
    int quartersNeeded; // should equal 3
    int remainderAfter25c; // should equal 8
    int nickelsNeeded; // should equal 1
    int remainderAfter5c; // should equal 3
    int penniesNeeded; // should equal 3
    int remainderAfter1c;// should equal 0
    
    changeAmt = amtTendered - itemCost;
    
    twentysNeeded = changeAmt / twenty;
    remainderAfter20s = changeAmt % twenty;
    
    tensNeeded = remainderAfter20s / ten;
    remainderAfter10s = remainderAfter20s % ten;
    
    fivesNeeded = remainderAfter10s / five;
    remainderAfter5s = remainderAfter10s % five;
    
    onesNeeded = remainderAfter5s / one;
    remainderAfter1s = remainderAfter5s % one;
    
    quartersNeeded = remainderAfter1s / quarter;
    remainderAfter25c = remainderAfter1s % quarter;
    
    nickelsNeeded = remainderAfter25c / nickel;
    remainderAfter5c = remainderAfter25c % nickel;
    
    penniesNeeded = remainderAfter5c / penny;
    remainderAfter1c = remainderAfter5c % penny;
    
    
    //after variable declarations include the stmt fp = fopen("csis.txt", "w");
    fp = fopen("csis.txt", "w");
    
    printf("Hello, World!\n");
    return 0;
}
