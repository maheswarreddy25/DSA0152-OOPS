#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
   return reversed;
}
int isPalindrome(int num) {
    return (num == reverseNumber(num));
}
int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversedNumber = reverseNumber(number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
