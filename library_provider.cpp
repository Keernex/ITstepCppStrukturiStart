#include "library_provider.h"

AnimalProvider::AnimalProvider() {
	count = 0;
	animals = new Animal * [capacity];
}

AnimalProvider::~AnimalProvider() {
	delete[] animals;
	count = 0;
}

void AnimalProvider::add(Animal* animal) {
	if (count < capacity) {
		animals[count] = animal;
		count++;
	}
}

void AnimalProvider::remove(int index) {
	if (index >= 0 && index < count) {
		delete animals[index];
		for (int i = index; i < count - 1; i++) {
			animals[i] = animals[i + 1];
		}
		count--;
	}
}

Animal* AnimalProvider::get(int index) {
	if (index >= 0 && index < count) {
		return animals[index];
	}
	return nullptr;
}

int AnimalProvider::size() {
	return count;
}

void AnimalProvider::print() {
	for (int i = 0; i < count; i++) {
		cout << "Name: " << animals[i]->name << endl;
		cout << "Age: " << animals[i]->age << endl;
		cout << "Weight: " << animals[i]->weight << endl;
		cout << "Height: " << animals[i]->height << endl;
		cout << "Type: " << animals[i]->type << endl;

		animals[i]->DoSth();
	}
}