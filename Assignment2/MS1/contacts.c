

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Name* name) {
	char yesorno = 0;
	printf("Please enter the contact's first name: ");
	scanf(" %31[^\n]", (*name).firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yesorno);

	//while (yesorno != y || yesorno != Y )
	//To make a proper output when the input is not y or n while should be used

	if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", (*name).middleInitial);
	} // condition to ask for input IF the user wants

	printf("Please enter the contact's last name: ");
	scanf(" %36[^\n]", (*name).lastName);
}

// getAddress:
void getAddress(struct Address* address) {
	char yesorno = 0;
	printf("Please enter the contact's street number: ");
	scanf(" %u", &(*address).streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %41[^\n]", (*address).street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yesorno);

	if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%u", &(*address).apartmentNumber);
	} // condition to ask for input IF the user wants

	printf("Please enter the contact's postal code: ");
	scanf(" %8[^\n]", (*address).postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %41[^\n]", (*address).city);
}

// getNumbers:
void getNumbers(struct Numbers* numbers) {
	char yesorno = 0;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yesorno);

	if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11s", (*numbers).cell);
	} // condition to ask for input IF the user wants

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yesorno);

	if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf(" %11s", (*numbers).home);
	} // condition to ask for input IF the user wants

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yesorno);

	if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf(" %11s", (*numbers).business);
	} // condition to ask for input IF the user wants
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
void getContact(struct Contact* contact) {

}
// Define Empty function definition below:
