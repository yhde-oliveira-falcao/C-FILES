

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:

#include "contactHelpers.h" 


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n') {
		;
	}
} //This function clears the keyboard input buffer from the '\n\ character

// pause: Empty function definition goes here:
void pause(void) {
	while (getchar() != '\n') {
		printf("(Press Enter to continue)");
		clearKeyboard();
	}
}

// getInt: Empty function definition goes here:
int getInt(void) {
	int number = 0;
	int end = -1;
	char letter;

	do {
		scanf("%d%c",&number, &letter);
		if (letter != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
		else {
			end = 0;
		}
	} while (end == -1);
	return number;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max) {
	int key = getInt();
	int end = -1
	
	do {
	scanf("%d%d", &min, &max);
	if (key < min || key > max) {
		printf("***OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		number = getint();
	} 
	else {
		end = 0;
	} while (end == -1);
	return key;
}

// yes: Empty function definition goes here:
int yes(void) {
	char yorn1 = 'k';
	char yorn2 = 'k';
	int result = -1;
	int flag = -1;
	scanf(" %c%c", &yorn1, &yorn2);
	do {
		if (yorn1 != 'Y' || yorn != 'y' || yorn != 'N' || yorn != 'n' && yorn2 != '\n') {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf(" %c%c", &yorn1, &yorn2);
		}
		else if (yorn1 == 'Y' || yorn1 == 'y') {
			result = 1;
			flag = 1;
		}
		else if (yorn1 == 'N' || yorn1 == 'n') {
			result = 0;
			flag = 1;
		} while (flag == -1);
		return result;
}

// menu: Empty function definition goes here:
int menu(void) {
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n"); 
	printf("Select an option : ");
	return getIntInRange(0, 6);
	printf("\n");
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void) {

}