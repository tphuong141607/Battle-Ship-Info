/** Given the following table which contains the information of some battleships in World War II, 
 *  create a structure to store the information, and do the following tasks (each one with a function): 
 *
 *  1) ask the user to input the information into an array of structure.
 *  2) display the ships as the original order;
 *  3) calculate the average values for numGuns and displacement, and display the result.
 *
 * Input Example:
 * NAME 		    TYPE    COUNTRY 	NUMGUNS     BORE    DISPLACEMENT
 * Bismarck 		    bb	    Germany	8	    15	    42000
 * North Carolina	    bb	    USA		9	    16	    37000
 * Tennessee		    bb	    USA		12	    14	    32000
 *
 * Created by Thao Phuong, 2/1/2018
 * Last edited 1/8/2019
 */


#include <stdio.h>
#include <string.h>

struct BattleShip {
	char name[50];
	char type[10];
	char country[50];
	int numGuns;
	int bore;
	int displacement;
};

int numOfShips;
struct BattleShip getInput(struct BattleShip shipInfo[]);
void printData(struct BattleShip shipInfo[]);
float averageNumGuns(struct BattleShip shipInfo[]);
float averageDisplacement(struct BattleShip shipInfo[]);
void printNumber(char s[], float a);


int main() {

    printf("Please enter the number of ships you wish to record: ");
    scanf("%d", &numOfShips);
    
	struct BattleShip ship[numOfShips];

	getInput(ship);
	printData(ship);
	float avgNumGuns = averageNumGuns(ship);
	float avgDisplacement = averageDisplacement(ship);
	printNumber("NumGuns", avgNumGuns);
	printNumber("Displacement", avgDisplacement);	
	
	return 0;
}

// Get input from the user
struct BattleShip getInput(struct BattleShip shipInfo[]) {
	for(int i = 0; i < numOfShips; i++) {
		char temp;

		printf("\nPlease Enter details of the ship %d\n", i+1);

		printf("Enter name: ");
		scanf(" %[^\n]", shipInfo[i].name);

		printf("Enter type: ");
		scanf(" %c", &temp);
		scanf("%[^\n]", shipInfo[i].type);
	
		printf("Enter country: ");
		scanf("%c", &temp);
		scanf("%[^\n]", shipInfo[i].country);

		printf("Enter numguns: ");
		scanf("%d", &shipInfo[i].numGuns);

		printf("Enter bore: ");
		scanf("%d", &shipInfo[i].bore);

		printf("Enter displacement: ");
		scanf("%d", &shipInfo[i].displacement);	
		scanf("%c", &temp);
	}
	return shipInfo[numOfShips];
}

// Print the entered data in a table-like format
void printData(struct BattleShip shipInfo[]) {
	
	printf("\n\tName\t\tType\tCountry\tNumguns\tBore\tDisplacement\n");
	for (int i = 0; i < numOfShips; i++) {
		printf("\t%s\t%s\t%s\t%d\t%d\t%d\n",
			shipInfo[i].name, 
			shipInfo[i].type,
			shipInfo[i].country,
			shipInfo[i].numGuns,
			shipInfo[i].bore,
			shipInfo[i].displacement);	
	}
	printf("\n");
}

// Calculate and return the average of the number of guns
float averageNumGuns(struct BattleShip shipInfo[]) {
	int sum = 0;
	for (int i = 0; i < numOfShips; i++) {
		sum += shipInfo[i].numGuns;	
	}
	
	float average = sum / (float)numOfShips;
	return average;
}

// Calculate and return the average of the displacement
float averageDisplacement(struct BattleShip shipInfo[]) {
	int sum = 0;
	for (int i = 0; i < numOfShips; i++) {
		sum += shipInfo[i].displacement;	
	}
	
	float average = sum / (float)numOfShips;
	return average;
}

void printNumber(char s[], float a) {
	printf("The average of %s is %0.2f\n",s ,a);
}






	
