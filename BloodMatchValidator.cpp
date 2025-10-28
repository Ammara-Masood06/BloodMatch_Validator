/*               Blood Match Validator                */

#include <iostream>
#include <string>

using namespace std;

int main() {

	string recipient_group, donar_group;                         // Variables initialization for both blood groups of Donar and Reciever

	int case1 = 0, case2 = 0;                                   // Variables for Case checking 

	cout << "Enter Blood Group of Reciever : ";
	cin >> recipient_group;                                     // User input for Reciever Blood Group

	cout << "Enter Blood Group of Donar : ";
	cin >> donar_group;                                         // User Input for Donator Blood Group

	cout << '\n' << '\n';
	//*****************************************************************************************************************
	//            If - Else for Checking of Recipient Variable User input(if user input is any of blood group or not)
	//*****************************************************************************************************************
	if (recipient_group == "AB+" || recipient_group == "ab+" || recipient_group == "AB-" || recipient_group == "ab-" || recipient_group == "O-" || recipient_group == "o-" || recipient_group == "O+" || recipient_group == "o+" || recipient_group == "A+" || recipient_group == "a+" || recipient_group == "a-" || recipient_group == "A-" || recipient_group == "B+" || recipient_group == "b+" || recipient_group == "b-" || recipient_group == "B-") {

		cout << "Recipient blood group : " << recipient_group << " is a blood group" << endl;
		case1 = 1;

	}
	else if (recipient_group != "AB+" || recipient_group != "ab+" || recipient_group != "AB-" || recipient_group != "ab-" || recipient_group != "O-" || recipient_group != "o-" || recipient_group != "O+" || recipient_group != "o+" || recipient_group != "A+" || recipient_group != "a+" || recipient_group != "a-" || recipient_group != "A-" || recipient_group != "B+" || recipient_group != "b+" || recipient_group != "b-" || recipient_group != "B-") {

		cout << "Recipient blood group : " << recipient_group << " is NOT a blood group" << endl;
		case1 = 0;

	}


	//*****************************************************************************************************************
	//            If - Else for Checking of Donar Variable User input(if user input is any of blood group or not)
	//*****************************************************************************************************************
	if (donar_group == "AB+" || donar_group == "ab+" || donar_group == "AB-" || donar_group == "ab-" || donar_group == "O-" || donar_group == "o-" || donar_group == "O+" || donar_group == "o+" || donar_group == "A+" || donar_group == "a+" || donar_group == "a-" || donar_group == "A-" || donar_group == "B+" || donar_group == "b+" || donar_group == "b-" || donar_group == "B-") {

		cout << "Donar blood group : " << donar_group << " is a blood group" << endl;
		case2 = 1;

	}
	else if (donar_group != "AB+" || donar_group != "ab+" || donar_group != "AB-" || donar_group != "ab-" || donar_group != "O-" || donar_group != "o-" || donar_group != "O+" || donar_group != "o+" || donar_group != "A+" || donar_group != "a+" || donar_group != "a-" || donar_group != "A-" || donar_group != "B+" || donar_group != "b+" || donar_group != "b-" || donar_group != "B-") {

		cout << "Donar blood group : " << donar_group << " is NOT a blood group" << endl;
		case2 = 0;

	}

	cout << '\n';
	cout << "case 1 : " << case1 << endl;
	cout << "case 2 : " << case2 << endl;
	cout << '\n';

	/*                If - else if for checking applicable case

	        case1 = 0, case1 = 0   ---->    both blood groups entered are not blood groups
	        case1 = 0, case1 = 1   ---->    blood groups entered where recipient blood group is not a blood group while Donar Blood group is a Blood group
			case1 = 1, case1 = 0   ---->    blood groups entered where recipient blood group is a blood group while Donar Blood group is not a blood group 
			case1 = 1, case1 = 1   ---->    both blood groups entered are blood groups
	
	*/


	if (case1 == 0 && case2 == 0) {

		cout << "Blood Donation is Not possible as .... both blood groups entered are not blood groups !!!" << endl;

	}
	else if (case1 == 1 && case2 == 0) {

		cout << "Blood Donation is Not possible as .... Donar Blood group entered is not a blood group !!!" << endl;

	}
	else if (case1 == 0 && case2 == 1) {

		cout << "Blood Donation is Not possible as .... Recipient Blood group entered is not a blood group !!!" << endl;

	}
	else if (case1 == 1 && case2 == 1) {


		// Reciepient Blood group = "O-" or "o-"
		// (Approved) Donar Blood Group = "o-" or "O-"
		if ((recipient_group == "O-" || recipient_group == "o-") && (donar_group == "O-" || donar_group == "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "O-" || recipient_group == "o-") && (donar_group != "O-" || donar_group != "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "O+" or "o+"
		//(Approved)Donar Blood Group = "O-" or "o-" or "O+" or "o+"
		if ((recipient_group == "O+" || recipient_group == "o+") && (donar_group == "O+" || donar_group == "o+" || donar_group == "O-" || donar_group == "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "O+" || recipient_group == "o+") && (donar_group != "O+" || donar_group != "o+" || donar_group != "O-" || donar_group != "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}

		//Recipient Blood Group = "B-" or "b-"
		// (Approved) Donar Blood Group = "O-" or "o-" or "B-" or "b-"
		if ((recipient_group == "B-" || recipient_group == "b-") && (donar_group == "O-" || donar_group == "o-" || donar_group == "b-" || donar_group == "B-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "B-" || recipient_group == "b-") && (donar_group != "O-" || donar_group != "o-" || donar_group != "b-" || donar_group != "B-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "B+" or "b+"
		// (Approved) Donar Blood Group = "O-" or "o-" or "O+" or "o+" or "B+" or "b+" or "B-" or "b-"
		if ((recipient_group == "B+" || recipient_group == "b+") && (donar_group == "O-" || donar_group == "o-" || donar_group == "O+" || donar_group == "o+" || donar_group == "B+" || donar_group == "b+" || donar_group == "b-" || donar_group == "B-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "B+" || recipient_group == "b+") && (donar_group != "O-" || donar_group != "o-" || donar_group != "O+" || donar_group != "o+" || donar_group != "B+" || donar_group != "b+" || donar_group != "b-" || donar_group != "B-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "A-" or "a-"
		// (Approved) Donar Blood Group = "O-" or "o-" or "A-" or "a-"
		if ((recipient_group == "A-" || recipient_group == "a-") && (donar_group == "A-" || donar_group == "a-" || donar_group == "O-" || donar_group == "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "A-" || recipient_group == "a-") && (donar_group != "A-" || donar_group != "a-" || donar_group != "O-" || donar_group != "o-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "A+" or "a+"
		// (Approved) Donar Blood Group = "O-" or "o-" or "O+" or "o+" or "A+" or "a+" or "A-" or "a-"
		if ((recipient_group == "A+" || recipient_group == "a+") && (donar_group == "O-" || donar_group == "o-" || donar_group == "O+" || donar_group == "o+" || donar_group == "A+" || donar_group == "a+" || donar_group == "A-" || donar_group == "a-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "A+" || recipient_group == "a+") && (donar_group != "O-" || donar_group != "o-" || donar_group != "O+" || donar_group != "o+" || donar_group != "A+" || donar_group != "a+" || donar_group != "A-" || donar_group != "a-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "AB+" or "ab+"
		// (Approved) Donar Blood Group = "AB-" or "ab-" or "AB+" or "ab+" or "A-" or "a-" or "A+" or "a+" or "B-" or "b-" or "B+" or "b+"or "O-" or "o-" or "O+" or "o+"
		if ((recipient_group == "AB+" || recipient_group == "ab+") && (donar_group == "O+" || donar_group == "o+" || donar_group == "O-" || donar_group == "o-" || donar_group == "A+" || donar_group == "a-" || donar_group == "A-" || donar_group == "a-" || donar_group == "B+" || donar_group == "b+" || donar_group == "B-" || donar_group == "b-" || donar_group == "AB+" || donar_group == "ab+" || donar_group == "AB-" || donar_group == "ab-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "AB+" || recipient_group == "ab+") && (donar_group != "O+" || donar_group != "o+" || donar_group != "O-" || donar_group != "o-" || donar_group != "A+" || donar_group != "a-" || donar_group != "A-" || donar_group != "a-" || donar_group != "B+" || donar_group != "b+" || donar_group != "B-" || donar_group != "b-" || donar_group != "AB+" || donar_group != "ab+" || donar_group != "AB-" || donar_group != "ab-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}


		//Recipient Blood Group = "AB-" or "ab-"
		// (Approved) Donar Blood Group = "AB-" or "ab-" or "A-" or "a-" or "B-" or "b-" or "O-" or "o-"
		if ((recipient_group == "AB-" || recipient_group == "ab-") && (donar_group == "O-" || donar_group == "o-" || donar_group == "A-" || donar_group == "a-" || donar_group == "B-" || donar_group == "b-" || donar_group == "AB-" || donar_group == "ab-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               Can be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		else if ((recipient_group == "AB-" || recipient_group == "ab-") && (donar_group != "O-" || donar_group != "o-" || donar_group != "A-" || donar_group != "a-" || donar_group != "B-" || donar_group != "b-" || donar_group != "AB-" || donar_group != "ab-")) {

			cout << "Recipient Blood Group : " << recipient_group << endl;
			cout << "Donar Blood Group : " << donar_group << endl;
			cout << '\n';
			cout << "-------------------------------------------------" << endl;
			cout << "               CANNOT be Donated                    " << endl;
			cout << "-------------------------------------------------" << endl;

		}
		
	}

	return 0;

}
