
#include <stdio.h>
/* Function

So, what is a function? 

An analogy that resonated with me is a toaster. A toaster takes in a 
regular bread and it will give you a toasted bread. We (or at least I)
don't really know how toaster works but I know that when I give a 
toaster a regular bread (and plug it in, of course), there will be
a toasted bread within a few minutes.

In Mathematics, we have used functions since I can remember. 
The trigonometry function sin(x), for example, is a function.
I still remembered in the lab that I forgot how sin(x) can be 
implemented but that partly is the point of a function. 

     x                                     pi
   \   /                                 \   / 
    | |                                   | |
||==   ========||                     ||==   ========||
||             ||                     ||             ||
|| Function f: ||                     ||    sin(x)   ||
||             ||                     ||             ||   
||========   ==||                     ||========   ==||
          | |                                   | |
         /   \                                 /   \
          f(x)                                   1

  Diagram 4.1: lol it turns out you can be artsy in gedit

So, what is the purpose of functions? Well, I, for one, only
want to look at wikepedia once, look up the formula of sin(x),
implement it, and then forget all about it. Joking aside, 
functions are useful if we are doing the same thing over and
over again. It also helps us think about the bigger picture 
since your main function will most likely be cleaner.

So, how does function work? Let's take a look at the following 
code */

//returns 1 + 2 + ... + num
int sum_from_one_to_num(int num) {
    int i = 1;
    int sum = 0; 
    while (i <= num) {
        sum += i;
        i++;
    }
    return sum;
}

/* Right, so what do we have here? We are adding from 1 to num.
Sure, instead of writing a function, we can just write the whole
thing in our main function */

int not_real_main_0(void) {
    int num;
    scanf("%d", &num);

    int i = 1;
    int sum = 0; 
    while (i <= num) {
        sum += i;
        i++;
    }
    printf("The sum from 1 to %d is %d\n", num, sum);

    return 0;
}

/* But what if we want to keep asking the user until the user has
had enough (i.e. them pressing ctrl + d) (Also, this is a hint for
the Reverse Array lab question). We would need the following: */

int not_real_main_1(void) {

    int num;

    int scanf_value = scanf("%d", &num);
    while (scanf_value == 1) {

        int i = 1;
        int sum = 0; 
        while (i <= num) {
            sum += i;
            i++;
        }
        printf("The sum from 1 to %d is %d\n", num, sum);

        // when user stops scanning (ctrl + d), scanf will return
        // 0 and hence it will break the while loop
        scanf_value = scanf("%d", &num);
    }

    return 0;
}

/* Raise your hand if you are confused with the piece of code
above (lol I should probably stop sounding like I am tutoring). 
I, too, am confused. WTF is going on? There is a while within 
a while and no, we are not talking about 2d arrays. This is 
where functions come in and save the day. Remember that earlier
we made the sum_from_one_to_num function (line 42)? It is time
to use that. */

int main(void) {

    int num;

    int scanf_value = scanf("%d", &num);
    while (scanf_value == 1) {

        int sum = sum_from_one_to_num(num);
        printf("The sum from 1 to %d is %d\n", num, sum);

        scanf_value = scanf("%d", &num);
    }

    return 0;
}

/* This suddenly looks clearer right? The while loop above
acts so that it stops when the user wants to stop by pressing
ctrl+d (assignment hint). But rather than being confused with
what's inside the while loop, we can clearly see that now we know
that the while loop keeps doing sum_from_one_to_num. */

/*Digging deeper into the main components of a function:
1. Return Type
2. Function Name
3. Input parameters
4. Body of the Function 
Observe the following function: */

//finds average between two numbers and returns it as a double
double average (int num1, int num2) {
    int sum = num1 + num2;
    double avg = sum / 2.0; //so that decimals are conserved

    return avg;
}

/* Here we expect the function to return a double, meaning the 
output (think about the toasted bread) is of the type double.
The function name is "average" and it takes 2 input parameters,
namely "num1" and "num2" (maybe this is a toaster that need 
a bread and can decide how long you want to toast it for). */

/* I hope you understand functions better now. */

/*============================================================*/

/*
Disclaimer: This is not official 1511 material. 

Refrain from reuploading this to other platforms.

If you find any mistakes, please contact me (Alvin Fujito).

*/