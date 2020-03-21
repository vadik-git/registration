#include <iostream>
#include "Header.h"

using namespace std;

int main() {


	int a = 0;


	do {
		init();
		cout << "1.autorization" << endl;
		cout << "2.entry login" << endl;
		cout << "3.Exit" << endl;
		cout << "selekt action" << endl;

		switch (a) {

		case 1:
			autorization();
			break;
		case 2:
			entry();
			break;
		case 3:
			return 0;
			break;



		}





	
	} while (a != 3);

	




	system("pause");
	return 0;

}