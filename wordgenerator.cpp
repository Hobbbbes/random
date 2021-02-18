/* I meant to make this as a graffiti tag name generator,
given that you typically want round letters next to one another
for throwies, blah and blah, so I decided to make a word generator
where you could choose which letters in the sequence you wanted
to be a consonant vs. which you wanted to be a vowel, at random
least to say */

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <string>

int main(){

srand(time(NULL)); // Seed	

std::vector<int> choice = {}; // User choice input
std::vector<std::string> choices = {"CharOne: \n\n", "CharTwo: \n\n", "CharThree: \n\n", "CharFour: \n\n", "CharFive: \n\n"}; // Message display
std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'}; //Vowel Vector
std::vector<char> consts = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'}; // Consonant vector
std::vector<char> result; // Where our random word generated will go

std::cout << "Input '1' for a Consonant, '2' for a vowel. Input '0' for a shorter word.\n";

for(int i = 0; i < choices.size(); i++) { // Display message from vector(choices), read user input, add to our vector(choice) - if input is not 0, 1 or 2, terminate program.

    std::cout << choices[i];
    int temp;
    std::cin >> temp;
    choice.push_back(temp);
    
    if(temp == 1 || temp == 2 || temp == 0) {
     } else {
    std::cout << "Invalid input, program terminated.\n";
    return 0;
    }
   	
}


for(int j = 0; j < choice.size(); j++) { // Random letter selection to total length of our desired word

	switch(choice[j]){
		case 0: // Zero input = technically you can make words less than 5 letters long which is what I wanted
			break; 
			
		case 1: // Generates a random seed between 1 and 21, selects a const from our vector, pushes it back to our result
			int con;
			con = rand() % 21 + 1;
			char temp2;
			temp2 = consts[con];
			result.push_back(temp2);
			break;
		case 2:
			int vow;
			vow = rand() % 4 + 1; // Number between 1 and 5, selects a vowel from our vector, pushes it back to result
			char temp3;
			temp3 = vowels[vow];
			result.push_back(temp3);
			break;
		default:
			return 0;
			break;
	
	
	}


}

// Display the result
std::cout << "\n\nYour word is the following: \n";

for (int z = 0; z < choice.size(); z++) {
	std::cout << result[z];
}
std::cout << "\n\n";
}
