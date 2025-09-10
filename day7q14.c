Write a program to input a character and check whether it is a vowel or consonant using if–else.

int main() {
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check whether vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a Vowel.\n", ch);
    } else {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}
