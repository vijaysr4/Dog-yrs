#include <iostream>

int main() {
  //my dog age in years
  int dog_age;
  std::string dog_name;
   
  //Enter your dog's age 
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;
  
  //Enter your dog's name
  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;

  int early_years; 
  int later_years;
  int human_years;

  //The first two years of a dog’s life count as 21 human years.
  early_years = 21;

  //Each following year counts as 4 human years.
  later_years = (dog_age - 2) * 4;

  //dog years converted to human years
  human_years = early_years + later_years;
  //end output
  std::cout << "My name is " << dog_name <<"! Ruff ruff, I am " << human_years << " years old in human years.";

  
}