/*Brute-force prime calculator, by Vitor Shade*/

#include <iostream>

void PrintPrimes(int lower_num, int upper_num)
{
	bool is_prime = true;
	for(int num = lower_num; num <= upper_num; num++){
		if(num == 1 || 
		 ((num != 2) && (num % 2 == 0)) ||
		 ((num != 3) && (num % 3 == 0))	||		
	         ((num != 5) && (num % 5 == 0)) ||
		 ((num != 7) && (num % 7 == 0)) ||
		 ((num != 11) && (num % 11 == 0)) ||
		 ((num != 13) && (num % 13 == 0))){
			continue;
		}	
		for(int aux = 3; aux < num; aux+=2){
			if(num % aux == 0 && num != aux){
				is_prime = false;
				break;
			}
		}
		if(is_prime){
			std::cout << num << std::endl;
		}
		is_prime = true;
	}
}

int main(int argc, char** argv)
{
	int test_cases;
	std::cin >> test_cases;
	int numbers[20]; //Maximum test cases = 10
	for(int i = 0; i < test_cases; i++){
		std::cin >> numbers[(2*i)] >> numbers[(2*i) + 1];
	}
	for(int i = 0; i < test_cases; i++){
		PrintPrimes(numbers[(2*i)], numbers[(2*i) + 1]);
		std::cout << std::endl;
	}
	return 0;
}
