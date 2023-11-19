#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[left]) && left < right)
            left++;

        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[right]) && left < right)
            right--;

        // Compare characters
        if (tolower(str[left]) != tolower(str[right]))
            return 0; // Not a palindrome

        // Move to the next pair of characters
        left++;
        right--;
    }

    return 1; // It is a palindrome
}

int main() {
    char input[100];

    // Input from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character
    input[strcspn(input, "\n")] = '\0';

    // Check if the input is a palindrome
    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
