#include <iostream>
#include <list>

int main() {
	//�w�̃��X�g
	std::list<const char*> yamanote1970 = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachumachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho",
	};


	//1970�N
	std::cout << "Yamanote1970" << std::endl;
	for (std::list<const char*>::iterator itr = yamanote1970.begin(); itr != yamanote1970.end(); ++itr) {
		std::cout << *itr << std::endl;
	}


	//2001�N
	std::cout << "\nYamanote2001" << std::endl;
	for (std::list<const char*>::iterator itr = yamanote1970.begin(); itr != yamanote1970.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = yamanote1970.insert(itr, "Nishi-Nippori");
			std::cout << *itr << std::endl;
			itr++;
		}
		std::cout << *itr << std::endl;
	}


	//2022�N
	std::cout << "\nYamanote2022" << std::endl;
	for (std::list<const char*>::iterator itr = yamanote1970.begin(); itr != yamanote1970.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = yamanote1970.insert(itr, "Takanawa-Gateway");
			std::cout << *itr << std::endl;
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	return 0;
}