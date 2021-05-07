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
	//while (getchar() != '\n') 
	{
		printf("(Press Enter to Continue)");
		clearKeyboard();
	}
}

// getInt: Empty function definition goes here:
int getInt(void) {
	int number = 0;
	//int end = -1;
	char letter;

	//do {
		scanf("%d%c",&number, &letter);
		while (letter != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			scanf("%d%c", &number, &letter);

		}
		if (number < 0 && number > -1000) { //I REALLY DON'T KNOW HOW TO SOLVE THIS
			//clearKeyboard();
			printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
			scanf("%d%c", &number, &letter);
		} else if (number < 0 && number < -1000) {
			//clearKeyboard();
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			scanf("%d%c", &number, &letter);
		}
		//else {
			//end = 0;
		//}
	//} //while (end == -1);
	return number;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max) {
	int key = getInt();
	//int end = -1;
	//int number;
	
	//do {
	//scanf("%d%d", &min, &max);
	while ((key < min) || (key > max)) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		key = getInt();

		//key = getint();
	} 
	//else {
		//end = 0;
	//}
	//} 
	//while (end == -1);
	return key;
}

// yes: Empty function definition goes here:
int yes(void) 
{
	char yorn1 = 'k';
	char yorn2 = 'k';
	int result = -1;
	//int flag = -1;

	scanf(" %c%c", &yorn1, &yorn2);
	while (((yorn1 != 'Y') || (yorn1 != 'y') || (yorn1 != 'N') || (yorn1 != 'n')) && (yorn2 != '\n')) {
			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			scanf(" %c%c", &yorn1, &yorn2);
		}
		if (yorn1 == 'Y' || yorn1 == 'y') {
			result = 1;
			
		}
		else if (yorn1 == 'N' || yorn1 == 'n') {
			result = 0;
			
		} 
		return result;
	//} //while (flag == -1);
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
	printf("Select an option:> ");
	return getIntInRange(0, 6);
	printf("\n");
}

// contactManagerSystem: Empty function definition goes here:
void contactManagerSystem(void) {
	int select;
	do {
		select = menu();

		switch (select) {
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			int option = yes();
			if (option == 1) {
				printf("\nContact Management System: terminated\n");
				return;
			}
			else {
				printf("\n");
			}
			break;
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		default:
			printf("*** OUT OF RANGE *** <Enter a number between 0 and 6> ");
			break;
		}
	} while (select >= 0 || select <= 0);
	return;
}
