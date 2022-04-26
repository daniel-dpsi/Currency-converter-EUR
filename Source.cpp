#include <iostream>
#include <stdlib.h>
#include <string>
#include <Windows.h>
using namespace std; // generally recommended to avoid in later stages of writing in c++ (and is optional)

class Currencies {
private:
	double USD; // United States dollar
	double EUR; // Euro
	double GBP; // Pound sterling
	double CAD; // Canadian dollar
	double YEN; // Japanese yen
	double AUD; // Australian dollar
	double NZD; // New Zealand dollar
	double CHF; // Swiss franc
public:
	Currencies(double usd = 0.00, double eur = 0.00, double gbp = 0.00, double cad = 0.00, double yen = 0.00, double aud = 0.00, double nzd = 0.00, double chf = 0.00) :
		USD{ usd }, EUR{ eur }, GBP{ gbp }, CAD{ cad }, YEN{ yen }, AUD{ aud }, NZD{ nzd }, CHF{ chf } {}; // initializing all the public currency properties 

	void setEuro(double eur = 0.00) {
		this->EUR = eur; // setter method for EUR
	}

	double getEuro() { return EUR; } // getter method for EUR
};

int main() {
	Currencies currency; // initializes the object currency using properties from the class Currencies

	cout << "Currency converter program" << endl;
	Sleep(1000);

	bool conversion = true;
	while (conversion) { // an infinite loop that runs until the user decides to cancle it (by pressing exit program at nr. 8)
		cout << "==============================================================" << endl;
		cout << "Select an amount you would like to convert (in EUR): " << endl;
		cout << "==============================================================" << endl;
		double amount = 0;
		cin >> amount; // getting the conversion amount 

		Sleep(2000);
		system("cls");

		cout << "Select a currency you would like to convert to | (EUR -> ___) |" << endl; // selection of all the available currencies
		cout << "=============SELECTION=============" << endl;
		cout << "\n1.) USD (United States Dollar).\n" << endl;
		cout << "\n2.) GBP (Pound Sterling).\n" << endl;
		cout << "\n3.) CHF (Swiss Franc).\n" << endl;
		cout << "\n4.) CAD (Canadian Dollar).\n" << endl;
		cout << "\n5.) YEN (Japanese Yen).\n" << endl;
		cout << "\n6.) AUD (Australian Dollar).\n" << endl;
		cout << "\n7.) NZD (New Zealand Dollar).\n" << endl;
		cout << "===============OTHER===============" << endl;
		cout << "\n8.) Exit program.\n" << endl; // when selected exits out of the infinite loop (exits the converter)
		cout << "===================================" << endl;


		currency.setEuro(amount); // setting the amount that is provided to convert by passing it into the setter method

		int sel = 0; // initializing the selection by pressing a number from 1 to 8
		cin >> sel;

		if (sel == 1) {
			system("cls");
			cout << "You have choosen EUR -> USD." << endl; // prints out the users selected currency of ___
			cout << "\nGetting rates..." << endl;
			Sleep(2000); // 2s sleep for a "visual effect"

			double rate = 1.07; // EUR->USD rate as of @ 26.04.2022 - 11:01 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " USD (United States Dollar)." << endl; // converts the actual provided value to the selected 1 by multiplying it by the specified rate
			cout << "\n";

		}

		if (sel == 2) {
			system("cls");
			cout << "You have chosen EUR -> GBP." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 0.84; // EUR->GBP rate as of @ 26.04.2022 - 11:07 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " GBP (Pound Sterling)." << endl;
			cout << "\n";
		}

		if (sel == 3) {
			system("cls");
			cout << "You have chosen EUR -> CHF." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 1.03; // EUR->CHF rate as of @ 26.04.2022 - 11:07 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " CHF (Swiss Frank)." << endl;
			cout << "\n";
		}

		if (sel == 4) {
			system("cls");
			cout << "You have chosen EUR -> CAD." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 1.36; // EUR->CAD rate as of @ 26.04.2022 - 11:12 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " CAD (Canadian Dollar)." << endl;
			cout << "\n";
		}

		if (sel == 5) {
			system("cls");
			cout << "You have chosen EUR -> YEN." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 136.61; // EUR->YEN rate as of @ 26.04.2022 - 11:13 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " YEN (Japanese Yen)." << endl;
			cout << "\n";
		}

		if (sel == 6) {
			system("cls");
			cout << "You have chosen EUR -> AUD." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 1.48; // EUR->AUD rate as of @ 26.04.2022 - 11:13 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " AUD (Australian Dollar)." << endl;
			cout << "\n";
		}

		if (sel == 7) {
			system("cls");
			cout << "You have chosen EUR -> NZD." << endl;
			cout << "\nGetting rates..." << endl;
			Sleep(2000);

			double rate = 1.61; // EUR->NZD rate as of @ 26.04.2022 - 11:17 CEST @ TradingView

			cout << "\n" << currency.getEuro() << " EUR is equal to " << currency.getEuro() * rate << " NZD (New Zealand Dollar)." << endl;
			cout << "\n";
		}

		if (sel == 8) {
			system("cls");
			cout << "Exiting program..." << endl;
			Sleep(2000);
			conversion = !conversion; // switches the infinite loop from on->off which exits the program (converter)
		}

	}


}