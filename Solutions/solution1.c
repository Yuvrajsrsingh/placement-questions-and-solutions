#include <stdio.h>
 
 int main(){
    int number,digit;
    int even_sum = 0;
    int odd_sum = 0;
    
    printf("Enter the number: ");
    scanf("%d",number);


    while(number>0){
        // get the last digit as in ex of 234578 
        //in th first iteration we get digit = 8
         digit = number % 10 ;

         // check if the digit is even or odd and add to sum 
         if (digit%2 == 0){
            even_sum += digit;
         }
         else{
            odd_sum += digit;
         }
         //remove the last digit 
    number /= 10;
    }
    // print the max_sum among the even and odd numbers 

       if (even_sum > odd_sum) {
        printf("Maximum sum is: %d\n", even_sum);
    } else {
        printf("Maximum sum is: %d\n", odd_sum);
    }

    return 0;
}