#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	char play;
	int numofq = 0;
	int answer;
	int numcorrect = 0;
	int numincorrect = 0;

	cout << "Are you smarter than a 9th grader?" << endl;
	cout << "Would you like to play? Type y or n." << endl;
	cin >> play;


	if (play == 'n') {
		cout << "That's too bad! Come again!" << endl;
	}
	if (play == 'y'){
		while (numofq < 10) {
			cout << "Who is the current prime minister of England? \n"
				"1.John Major \n"
				"2.Gordon Brown \n"
				"3.David Cameron \n"
				"4.Tony Blair \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 3. David Cameron." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 3. David Cameron." << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Correct! The answer was 3. David Cameron." << endl;
				numofq++;
				numcorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 3. David Cameron." << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}

			cout << "Which U.S. State has the largest population density? \n"
				"1. Calfornia \n"
				"2. New Jersey \n"
				"3. New York \n"
				"4. Rhode Island \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 2. New Jersey." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Correct! The answer was 2. New Jersey" << endl;
				numofq++;
				numcorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 2. New Jersey" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 2. New Jersey" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "What was the date of the Normandy ladning by the United States (also known as D-Day)? \n"
				"1. July 4th, 1965 \n"
				"2. August 22nd, 1960 \n"
				"3. September 11th, 2001 \n"
				"4. June 6th, 1944 \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 4. June 6th, 1944." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 4. June 6th, 1944" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 4. June 6th, 1944" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Correct! The answer was 4. June 6th, 1944" << endl;
				numofq++;
				numcorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "What annimal has the longest lifespan? \n"
				"1. Whale \n"
				"2. Elephant \n"
				"3. Tortise \n"
				"4. Bear \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Correct! The answer was 1. Whale." << endl;
				numofq++;
				numcorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 1. Whale" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 1. Whale" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 1. Whale" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "Who was the 35th U.S. President? \n"
				"1. Bill Clinton \n"
				"2. John F. Kennedy \n"
				"3. Dwight D. Eisenhower \n"
				"4. Richard Nixon \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 2. John F. Kennedy." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Correct! The answer was 2. John F. Kennedy" << endl;
				numofq++;
				numcorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 2. John F. Kennedy" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 2. John F. Kennedy" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "What year was the first computer built? \n"
				"1. 1989 \n"
				"2. 1965 \n"
				"3. 1946 \n"
				"4. 1992 \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 3. 1946." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 3. 1946" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Correct! The answer was 3. 1946" << endl;
				numofq++;
				numcorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 3. 1946" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "Who discovered gravity? \n"
				"1. Sir Issac Newton \n"
				"2. Albert Einstien \n"
				"3. Benjamin Franklin \n"
				"4. Nikola Tesla \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Correct! The answer was 1. Sir Issac Newton." << endl;
				numofq++;
				numcorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 1. Sir Issac Newton" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 1. Sir Issac Newton" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 1. Sir Issac Newton" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "Which desert is the largest in the world? \n"
				"1. Sahara \n"
				"2. Gobi \n"
				"3. Antarctic \n"
				"4. Arctic \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 3. Antarctic." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 3. Antarctic" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Correct! The answer was 3. Antarctic" << endl;
				numofq++;
				numcorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 3. Antarctic" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "Where is the city of Reykjavik located? \n"
				"1. Germany \n"
				"2. Iceland \n"
				"3. Russia \n"
				"4. Norway \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 2. Iceland." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Correct! The answer was 2. Iceland" << endl;
				numofq++;
				numcorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 2. Iceland" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Incorrect. The answer was 2. Iceland" << endl;
				numofq++;
				numincorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}
			cout << "How many letters does the longest English word have? \n"
				"1. 221 \n"
				"2. 35 \n"
				"3. 62 \n"
				"4. 189,819 \n" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "Incorrect. The answer was 4. 189,819." << endl;
				numofq++;
				numincorrect++;
				break;
			case 2:
				cout << "Incorrect. The answer was 4. 189,819" << endl;
				numofq++;
				numincorrect++;
				break;
			case 3:
				cout << "Incorrect. The answer was 4. 189,819" << endl;
				numofq++;
				numincorrect++;
				break;
			case 4:
				cout << "Correct! The answer was 4. 189,819c" << endl;
				numofq++;
				numcorrect++;
				break;
			default:
				cout << "Sorry you didnt enter a valid answer. Please type a number 1 through 4." << endl;
				system("pause");
				return 0;
			}


		}
	

		if (numcorrect >=0 && numcorrect < 2) {
			cout << "Wow! You really don't know your trivia." << endl;
		}
		if (numcorrect >= 2 && numcorrect < 4) {
			cout << "Meh! You know some things I guess." << endl;
		}
		if (numcorrect >= 4 && numcorrect < 6) {
			cout << "Sorry not smart enough." << endl;
		}
		if (numcorrect >= 6 && numcorrect < 8) {
			cout << "Maybe you're smarter than a 5th grader..." << endl;
		
		if (numcorrect >= 8 && numcorrect < 10) {
				cout << "Congratuations you're smarter than a 9th grader!" << endl;
			}
		}
		cout << "Number Correct : " << numcorrect << " /10" << endl;
		cout << "Number Inorrect : " << numincorrect << " /10" << endl;
	
	}

	system("pause");
	return 0;



}