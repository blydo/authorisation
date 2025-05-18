#include <iostream>
#include <string>
#include <utility>
int LoginCheck(int size, std::string logins[]);
bool PasswordCheck(int size, std::string pass[], int index);
bool Autorisation(int size, std::string pass[], std::string logins[]);


int main()
{
	setlocale(LC_ALL, "ru");


	int const size = 6;
	

	std::string logins[size]{ "yashagey", "roma1123", "seregapedik", "lizagyc", "dimlox54", "kira12345" };
	std::string pass[size]{ "yasha2004$", "roma2110@", "penis1161#@", "gyc148825$", "loxna9812*&", "kirabernipodik#" };


	while(!Autorisation(size, pass, logins));
	{
	}







	return 0;
}
 int LoginCheck(int size, std::string logins[])
{
	std::string userLogin;
	std::cout << "Введите логин: ";
	std::cin >> userLogin;
	for (int i = 0; i < size; i++)
	{
		if (userLogin == logins[i])
		{
			return i;
		}
	}
	return -1;
		
	

}
bool PasswordCheck(int size, std::string pass[], int index)
{
	std::string userPass;
	std::cout << "Введите пароль: ";
	std::cin >> userPass;
	
	if (userPass == pass[index])
	{
		return true;
	}
	return false;
}


bool Autorisation(int size, std::string pass[], std::string logins[]) {
	if (PasswordCheck(size, pass, (LoginCheck(size, logins))) == true)
	{
		return true;
	}
	std::cerr << "\nНеправильное имя пользователя или пароль\n\n";
	return false;
}