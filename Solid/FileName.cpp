#include <vector>
#include<iostream>
//SOLID

//S - single responsibility principle
//Принцып единой ответственности
//Класс выполняет только одну функцию(метод)
/*
class ClientServer {
public:
	void ShowClients(std::vector<Client*>clients) {
		for (const auto &it : clients)
			it->Pay;
	}
};
*/
//O - open-closed principle
//Открыт для расширения, но закрыт для модификации
/*
class Animal {
private:
	std::string _type;
public:
	Animal(std::string type) : _type(type) { }
	virtual std::string GetSound() = 0;
};
	class Cow : public Animal {
	public:
		Cow(): Animal ("Cow"){ }
		std::string GetSound() override {
			return "MOOOOO";
		}
	};
	void AnimalSound(Animal& animal) {
		std::cout<<animal.GetSound()<<'\n';
	}
	int main() {
		Cow* cow = new Cow();
		AnimalSound(*cow);
	}
	*/
	//Неправильно
	/*
}; void AnimalSound(Animal& animal) {
	if (animal.GetSound() == "Lion")
		std::cout << "Rawr";
	else if (animal.GetSound() == "Cat")
		std::cout << "Meow";
	else if (animal.GetSound() == "Dog")
		std::cout << "Bark";
	else if (animal.GetSound() == "Cow")
		std::cout << "Moooooo";
		*/
