//==============================================
// Name:               
// Student Number: 
// Email:         
// Section:        NUU
// Workshop:       5 (at_home)
//==============================================

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements



#define _CRT_SECURE_NO_WARNINGS
// Define Number of Employees "SIZE" to be 2
#define SIZE 4

#include <stdio.h>


// Declare Struct Employee 
struct Employee
{
	int id;
	int age;
	double salary;
};


/* main program */
int
main(void)
{
	int option = 0, i = 0, size = 0, employeeID = 0, n, z;
	double newsalary = 0;


	struct Employee employees[SIZE] = { {0} };
	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do
	{
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option)
		{
		case 0:		// Exit the program

			break;

		case 1:		// Display Employee Data
		  // @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 
			for (size = 0; size < i; size++)
			{
				if (employees[size].id > 0)
				{
					printf("%6d%9d%11.2lf\n", employees[size].id,
						employees[size].age, employees[size].salary);
				}

			}
			printf("\n");
			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0
			break;

		case 2:		// Adding Employee
		  // @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			// Check for limits on the array and add employee 
			// data accordingly. 
			if (i >= SIZE)
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
				printf("\n");
			}
			else
			{
				printf("Enter Employee ID: ");
				scanf("%d", &employees[i].id);

				while (employees[i].id < 0)
				{
					printf("\nPlease imput a value higher than 0; ");
					scanf("%d", &employees[i].id);
				}
				printf("Enter Employee Age: ");
				scanf("%d", &employees[i].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &employees[i].salary);
				printf("\n");
				i++;
			}

			break;


		case 3:
			printf("Update Employee Salary\n");
			printf("======================\n");

			do {
				printf("Enter Employee ID: ");
				scanf("%d", &employeeID);
				if /*(emlployeeID != employees[0] || employeeID != employees[1] ||
					employeeID != employees[2] || employeeID != employees[3] ||
					employeeID != employees[4] || employeeID == 12345)
					CHANGE FOR ALOT OF ELSEIF, ELSE IF,ELSEIF...)*/
				{
					printf("*** ERROR: Employee ID not found! ***"); 
					printf("\n");
					employeeID = 12345;
				}
				else {
					switch (employeeID)
					{
					case employee[0].id:
						printf("The current salary is %.2lf\n",
							employees[0].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &newsalary);
						employees[0].salary = newsalary;
						break;
					case employee[1].id:
						printf("The current salary is %.2lf\n",
							employees[1].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &newsalary);
						mployees[1].salary = newsalary;
						break;
					case employee[2].id:
						printf("The current salary is %.2lf\n",
							employees[2].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &newsalary);
						mployees[2].salary = newsalary;
						break;
					case employee[3].id:
						printf("The current salary is %.2lf\n",
							employees[3].salary);
						printf("Enter Employee New Salary: ");
						scanf("%lf", &newsalary);
						mployees[3].salary = newsalary;
						break;
					default:
						printf("*** ERROR: Employee ID not found! ***");
						employeeID = 12345;
					}
				}
						
					
			} while (employeeID != employees[0] || employeeID != employees[1] ||
						employeeID != employees[2] || employeeID != employees[3] ||
						employeeID != employees[4] || employeeID != 0);




			/*printf("Update Employee Salary\n");
			printf("======================\n");

			do {
				printf("Enter Employee ID: ");
				scanf("%d", &employeeID);
				
				do {
					for (n = 0; n < SIZE; n++)
					{
						if (employees[n].id == employeeID)
						{
							printf("The current salary is %.2lf\n",
								employees[n].salary);
							printf("Enter Employee New Salary: ");
							scanf("%lf", &newsalary);


							employees[n].salary = newsalary;
							n = SIZE;

						}
						else {
							printf("*** ERROR: Employee ID not found! ***");
							printf("\n");
							n = SIZE + 1;
						}
					}	
				} while (employees[n].id != employeeID && employeeID != 0);
			} while (employeeID < 1 || newsalary == 0);

			break;*/

		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &employeeID);
				for (z = 0; z < size; z++)
				{
					if (employees[z].id == employeeID)
					{
						printf("Employee %d will be removed\n", employeeID);
						printf("\n");
						employees[z].id = 0;
						employees[z].age = 0;
						employees[z].salary = 0;
						z = size;
					}
				}
			} while (employeeID < 1 || size > SIZE);

			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);

	printf("Exiting Employee Data Program. Good Bye!!!\n");

	return 0;
}
