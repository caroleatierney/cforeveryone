#include<stdio.h>
#include<strings.h>

typedef enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} month;
int max_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int max=0;
int next_day = 0;
typedef struct date{ month m; int d} date;

int today=0;
void print_date(m, d)
{
    switch(m){
        case jan: printf("January, %d", d); break;
        case feb: printf("February, %d", d); break;
        case mar: printf("March, %d", d); break;
        case apr: printf("April, %d", d); break;
        case may: printf("May, %d", d); break;
        case jun: printf("June, %d", d); break;
        case jul: printf("July, %d", d); break;
        case aug: printf("August, %d", d); break;
        case sep: printf("September, %d", d); break;
        case oct: printf("October, %d", d); break;  
        case nov: printf("November, %d", d); break;  
        case dec: printf("December, %d", d); break;  
        default: printf("%d is an error", d);
    }
}

next_date(m, d)
{
    for (int i=0; i < 11; i++)
    {
        if (m == i)
        {
           max = max_days[i];
        }
    }

    // int index = Array.IndexOf(max_days, m);
    // check if it is the last day of the month
    if (d==max) {
        d=1;
        // if it is also December, set to January 1
        if (m==11) {
            m=0;
        // if it is not December increment month
        } else {
            m++;
        }
    // if it is not the last day of the month, just increment the day
    } else {
        d++;
    }
    // print_date(month, day);
    print_date(m, d);
    printf("\n\n");
}

int main()
{
    month this_month = jan;
    today = 1;
    next_day=next_date(this_month, today);

    this_month = feb;
    today = 28;
    next_day=next_date(this_month, today);

    this_month = mar;
    today = 14;
    next_day=next_date(this_month, today);

    this_month = oct;
    today = 31;
    next_day=next_date(this_month, today);

    this_month = dec;
    today = 31;
    next_day=next_date(this_month, today);

    return 0;
}



// someone elses:

// /*
//  ============================================================================
//  Name        : date.c
//  Author      : Pedram Safi
//  Version     : 1.0
//  Date        : 12/28/2020
//  ============================================================================
//  */

// #include<stdio.h>

// typedef enum month {January, February, March, April, May, June, July,
//                     August, September, October, November, December} month; //declare type

// typedef struct date{
//     month m;
//     int d;
// } date;

// int last_day(month mo,int d){ // returns last day of each month
//     switch(mo){
//         case January: return(31);
//         case February: return(28);
//         case March: return(31);
//         case April: return(30);
//         case May: return(31);
//         case June: return(30);
//         case July: return(31);
//         case August: return(31);
//         case September: return(30);
//         case October: return(31);
//         case November: return(30);
//         case December: return(31);
//         default: printf("error");
//     }

// }

// const char* getName(month mo){ // gets name for each item in enum month

//     switch(mo){
//         case January: return("January");
//         case February: return("February");
//         case March: return("March");
//         case April: return("April");
//         case May: return("May");
//         case June: return("June");
//         case July: return("July");
//         case August: return("August");
//         case September: return("September");
//         case October: return("October");
//         case November: return("November");
//         case December: return("December");
//         default: printf("error");
//     }

// }

// void nextday(date *dt){
//     if(last_day(dt->m, dt->d)==dt->d){ //check if today is last day of month
//         printf("next day is %s %i\n\n", getName(((dt->m)+1)%12), 1);
//     }
//     else
//     {
//         printf("next day is %s %i\n\n", getName(dt->m), (dt->d)+1);
//     }
// }

// void printdate(date *dt){
//     printf("today is %s %i\n", getName(dt->m), dt->d);
    
// }

// int main(void){

//     date aDate;
//     month this_month = February;
//     //--------------------------
//     aDate.m = this_month;
//     aDate.d = 28;
//     printdate(&aDate);
//     nextday(&aDate);
//     //--------------------------
//     this_month = March;
//     aDate.m = this_month;
//     aDate.d = 14;
//     printdate(&aDate);
//     nextday(&aDate);
//     //--------------------------
//     this_month = October;
//     aDate.m = this_month;
//     aDate.d = 31;
//     printdate(&aDate);
//     nextday(&aDate);
//     //--------------------------   
//     this_month = December;
//     aDate.m = this_month;
//     aDate.d = 31;
//     printdate(&aDate);
//     nextday(&aDate);

//     return 0;
// }