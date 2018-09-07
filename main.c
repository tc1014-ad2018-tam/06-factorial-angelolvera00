/*This program was created for the purpose of asking the user for a number and then calculating its factorial
 *
 * Author: Angel Daniel Olvera Perales
 * Date: September 6
 * email:angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
    //Variables are declared
    int counter =1;
    int i;
    int total=1;
// The user is asked to enter a number and the computer will calculate the factorial of the given number
    printf("Of which number do you want its factorial?");
    scanf("%d", &i);
// If the use for some reason enters a negative number, the program will tell them that it isn't valid and that they should enter only postive numbers or 0
    if(i<0){
        printf("Not valid, enter a positive number or 0");
    }
    //The loop for calculating the factorial starts here, where the number you enter is multiplied by all numbers before it. For 3, the operation would be: 3*2*1, which would mean its factorial is 6.
    else {
        while (counter <= i) {
            total = total * counter;
            counter++;
        }
        //The result is given
        printf("The factorial of %d is: %d", i, total);
    }
    return 0;
}
