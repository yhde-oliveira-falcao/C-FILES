//==============================================
// Name:          
// Student Number: 
// Email:          
// Section:        NUU
// Date:           
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Name* name) {
	//char yesorno = 0;
	int bla;

	printf("Please enter the contact's first name: ");
	scanf(" %31[^\n]", (*name).firstName);
	clearKeyboard();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	bla = yes();
	//scanf(" %c", &yesorno);

	//while (yesorno != y || yesorno != Y )
	//To make a proper output when the input is not y or n while should be used

	//if (yesorno == 'y' || yesorno == 'Y') {
	if (bla == 0) {
		name->middleInitial[0] = '\0';
	} else {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]", (*name).middleInitial);
	} // condition to ask for input IF the user wants
	clearKeyboard();

	printf("Please enter the contact's last name: ");
	scanf(" %9[^\n]", (*name).lastName);
	//clearKeyboard();
}

// getAddress:
void getAddress(struct Address* address) {
	//char yesorno = 0;
	printf("Please enter the contact's street number: ");
	//scanf(" %u", &(*address).streetNumber);
	address->streetNumber = getInt();

	printf("Please enter the contact's street name: ");
	scanf(" %41[^\n]", (*address).street);
	clearKeyboard();

	printf("Do you want to enter an apartment number? (y or n): ");
	//scanf(" %c", &yesorno);
	int bla = yes();

	//if (yesorno == 'y' || yesorno == 'Y') {
	if (bla == 0) {
		address->apartmentNumber = 0;
	} else{ 
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		//scanf("%u", &(*address).apartmentNumber);
	} // condition to ask for input IF the user wants

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", (*address).postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf(" %9[^\n]", (*address).city);
	clearKeyboard();
}

// getNumbers:
void getNumbers(struct Numbers* numbers) {
	//char yesorno = 0;
	//printf("Do you want to enter a cell phone number? (y or n): ");
	//scanf(" %c", &yesorno);
	int yesorno;

	//if (yesorno == 'y' || yesorno == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %11s", (*numbers).cell);
	//} // condition to ask for input IF the user wants

	printf("Do you want to enter a home phone number? (y or n): ");
	yesorno = yes();
	//scanf(" %c", &yesorno);

	//if (yesorno == 'y' || yesorno == 'Y') {
	if (yesorno == 0) {
		numbers->home[0] = '\0';
	} else {
		printf("Please enter the contact's home phone number: ");
		scanf(" %11s", (*numbers).home);
	} // condition to ask for input IF the user wants

	printf("Do you want to enter a business phone number? (y or n): ");
	yesorno = yes();
	//scanf(" %c", &yesorno);

	//if (yesorno == 'y' || yesorno == 'Y') {
	if (yesorno == 0) {
		numbers->business[0] = '\0';
	} else{
		printf("Please enter the contact's business phone number: ");
		scanf(" %11s", (*numbers).business);
	} // condition to ask for input IF the user wants
}

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 2 ======= |
// +-------------------------------------------+

// getContact:
void getContact(struct Contact *contact) {
	struct Contact ncontact;

	getName(&ncontact.name);
	getAddress(&ncontact.address);
	getNumbers(&ncontact.numbers);

	*contact = ncontact;
}
// Define Empty function definition below:
//?
