/* 
 * File:   main.c
 * Author: jefftruong
 *
 * Created on December 17, 2014, 3:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void);
void pH();
void closerTwo();
void numbersToWords();
void teens(int);
void hundred(int);
void tens(int);
void ones(int);
void temperature();
void OOP();

struct animal{
        int age;
        int amountOfLeg;
        int amountOfArms;
    }monkey;
    
int main(void) {
    int choice;
 
do
{
 printf("\nMenu\n");
 printf("1. pH\n");
 printf("2. Closer to two\n");
 printf("3. Numbers to Words\n");
 printf("4. Temperature\n");
 printf("5. OOP\n");
 printf("6. Exit\n");
 scanf("%d",&choice);
   
 switch (choice)
 {
     case 1: 
     pH();
          break;
     case 2: 
     closerTwo();
          break;
     case 3: 
     numbersToWords();
          break;
     case 4: 
     temperature();
          break;
     case 5:
     OOP();
         break;
     case 6: 
     printf("You have exited the program\n"); 
     exit(0);
         break;
     default: printf("Wrong Choice. Enter again\n");
              break;
 } 
  
} while (choice != 3);
    
return (EXIT_SUCCESS);
}





void pH() {  
    printf("This programs allows you to check the pH level wither its"
            "too acidic, basic, or neutral.\nType your pH level: ");
    float p;
    scanf("%f", &p);
    if ((p >= 6.5) && (p <= 7.5)) {
        printf("NEUTRAL - FISH IN STREAMS, RIVERS AND LAKES WILL SURVIVE.");
    } else if ((p < 0) || (p > 14)) {
        printf("pH is invalid");
    } else if (p <= 6.5) {
        printf("TOO ACIDIC - FISH IN STREAMS, RIVERS AND LAKES WILL NOT SURVIVE.");
    } else if (p >= 7.5) {
        printf("TOO ALKALINE - FISH IN STREAMS, RIVERS AND LAKES WILL NOT SURVIVE.");
    }
}

void closerTwo() {
    
    printf("This program prints out the result of the divided number and is reused"
            "as the numerator. It stops as the result equals it reaches 2.\n");
    float result = 0;
    int dem = 1;

    while (result < 2) {

        printf("%f + 1/%d = ", result, dem);
        result = result + (1.0 / dem);
        dem = dem * 2;
        printf("%f\n", result);
    }
}


void numbersToWords() {
    printf("This programs prints out numbers in words after typing a number.\n");
    printf("Enter your number: ");
    int number;
    scanf("%d", &number);
        //declares what number type it is
        if (number >= 10 && number <= 19) {
            teens(number);
        } else if (number % 100 >= 10 && number % 100 <= 19) {
          hundred(number);
            teens(number % 100);
        } else {
            hundred(number);
            tens(number);
            ones(number);
        }
}
void hundred(int number) {
    int hundreds; 
    hundreds= (number / 100) % 10;
        switch (hundreds) {
            case 1:
                printf("one hundred");
                break;
            case 2:
                 printf("two hundred");
                break;
            case 3:
                 printf("three hundred");
                break;
            case 4:
                 printf("four hundred");
                break;
            case 5:
                 printf("five hundred");
                break;
            case 6:
                 printf("six hundred");
                break;
            case 7:
                 printf("seven hundred");
                break;
            case 8:
                 printf("eight hundred");
                break;
            case 9:
                 printf("nine hundred");
                break;

        }
    }

void tens(int number){
 int tens = (number / 10) % 10;
        switch (tens) {
            case 1:
                printf("ten");
                break;
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }
}
void teens(int number){
    switch (number) {
            case 10:
                printf("ten");
                break;
            case 11:
                printf("eleven");
                break;
            case 12:
                printf("twelve");
                break;
            case 13:
                printf("thirteen");
                break;
            case 14:
                printf("fourteen");
                break;
            case 15:
                printf("fifteen");
                break;
            case 16:
                printf("sixteen");
                break;
            case 17:
                printf("seventeen");
                break;
            case 18:
                printf("eighteen");
                break;
            case 19:
                printf("nineteen");
                break;
        }
}
void ones(int number) {
    int ones = number % 10;
        switch (ones) {
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;

        }
}

void temperature() {
    int totalDays = 6;
    int day[totalDays];

    char* dayName[7];
        
    dayName[0] = "Monday";
    dayName[1] = "Tuesday";
    dayName[2] = "Wednesday";
    dayName[3] = "Thursday";
    dayName[4] = "Friday";
    dayName[5] = "Saturday";
    dayName[6] = "Sunday";
    printf("This program prints out the temperature it will be on a specific day, "
           "after storing them into an array.\n");

    
    int i;
    for (i =0; i <= totalDays; i++) {   
       printf("On %s the temperature is: ", dayName[i]);
        scanf("%d" , &day[i]); 
        
    }
    
    for (i = 0; i <= totalDays; i++) {
       printf("The temperature on %s will be %d Degrees C\n" , dayName[i], day[i]);
    }
}
    void OOP() {
    printf("This program prints out how many legs, arms, and the age of a animal"
            " by using objects in C.\n");
    
    monkey.age = 5;
    monkey.amountOfLeg = 2;
    monkey.amountOfArms = 3;
       
    printf("The monkey age is %d\n", monkey.age);
    printf("The amount of legs the monkey has are %d\n", monkey.amountOfArms);
    printf("The amount of arms the monkey has are %d\n", monkey.amountOfLeg);
 
    }
