# Battle Ship Info Program (C Language)
## What is it?
A piece of code that stores the entered Battle Ship information and performs simple calculations.

This simple program is written in C language. It will:
* Ask the user to input the information into an array of structure.
* Display the ships as the original order in a table-like format;
* Calculate the average values for numGuns and displacement, and display the result.

## Example 
#### Example of data:

| NAME          | TYPE | COUNTRY | NUMGUNS | BORE | DISPLACEMENT |
| --------------|------|---------|---------|------|--------------|
| Bismarck      | bb   | Germany | 8       | 15   | 42000        |
| North Carolina| bb   | USA     | 9       | 16   | 37000        |
| Tennessee     | bb   | USA     | 12      | 14   | 32000        |


#### Inputing data:

<img src="https://github.com/tphuong141607/Store-Battle-Ship-Info-and-Simple-Calculation/blob/master/Entering%20Input%20Example.png" width="60%">


#### What the output looks like:

<img src="https://github.com/tphuong141607/Store-Battle-Ship-Info-and-Simple-Calculation/blob/master/Program%20Output%20Example.png" width="80%">


## How to run this program on your computer locally?
#### Windows operating system 
1. Open the Command Prompt
2. Test if you have gcc installed by typing `gcc -v`. If it is not installed, please install gcc https://gcc.gnu.org/ 
3. Go to the source code directory
4. Compile the source code `gcc -o program BattleShip.c`
5. Run your program `program`

#### Macintosh operating systems
1. Open terminal
2. Install the command-line tools: `xcode-select --install`
3. Go to the source code directory 
4. Compile the source code `gcc -Wall -o program BattleShip.c`
5. Run your program `./program`


