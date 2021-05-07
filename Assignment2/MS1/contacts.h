


//--------------------------------
// Structure Types
//--------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        structures here...                       |
// +-------------------------------------------------+

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
struct Address {
	unsigned int streetNumber;
	char street[41];
	unsigned int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Place your code here...


// Structure type Numbers declaration
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};

// Place your code here...


// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};
// NOTE:  Make sure the structure name does not have an 's' on the end!

// Place your code here...



//--------------------------------
// Function Prototypes
//--------------------------------
void getName(struct Name* name);
void getAddress(struct Address* address);
void getNumbers(struct Numbers* numbers);
void getContact(struct Contact* contact);

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Get and store from standard input the values for Name
// Place your code here...


// Get and store from standard input the values for Address
// Place your code here...


// Get and store from standard input the values for Numbers
// Place your code here...


// Get and store from standard input the values for a Contact (NOT: Contacts)
// NOTE:  Make sure the structure Contact does not have an 's' on the end!
// Put function prototype below:
