// 탐욕알고리즘#4
/*
6리터의 가방에 최대한 과일을 많이 담으려면?
- 과일 질량, 과일 가격
(1) 배 : 5L / 2,500원
(2) 바나나 : 3L / 1,500원
(3) 사과 : 2L / 1,500원
(4) 딸기 : 1L / 2,000원
*/

#include <cstdio>
#include <cstdlib>

struct Fruit{
    const char* name;
    int size;
    int price;

};

void PrintFruits(Fruit fruit[], int countFruits){
    for (int i = 0; i < countFruits; ++i){
        printf("%s, %d, %d\n", fruit[i].name, fruit[i].size, fruit[i].price);
    }
}

int ChooseFruit(Fruit fruits[], int countFruits, int size){
	int maxIndex = -1;
	for (int maxIndex = 0; maxIndex < countFruits; ++maxIndex){
		if (fruits[maxIndex].size <= size ){
			break; 
		}
	}
	if (maxIndex == countFruits){
		return -1;
	}
	for (int i = maxIndex+1; i < countFruits; ++i){
		if (fruits[i].size <= size && fruits[maxIndex].price < fruits[i].price){
			maxIndex = i;
		}
	return maxIndex;
	}
}

void RemoveFruit(Fruit fruits[], int& countFruits, int idx){
	for (int i = 0; i < countFruits-1; ++i){
		fruits[i] = fruits[i+1];
	}
	--countFruits;
}

void Greedy(Fruit fruits[], int countFruits, int& backpackSize){
	while(1){
		int idx = ChooseFruit(fruits, countFruits, backpackSize);
		if (idx >= 0){
			backpackSize -= fruits[idx].size;
			printf("%s, %d, %d\n", fruit[idx].name, fruit[idx].size, fruit[idx].price);
			RemoveFruit(fruits, countFruits, idx);
		}
		else{
			break;
		}
	}
	printf("남은 백팩의 공간 : %d\n", backpackSize);
}

int main(){
    Fruit fruits[4] = {{"배", 5, 2500},
                      {"바나나", 3, 1500},
                      {"사과", 2, 1500},
                      {"딸기", 1, 2000}};
	int countFruits = 4;
    int backpackSize = 6;
	
	Greedy(fruits, countFruits, backpackSize);
    system("pause");
//	if(idx >= 0){
//        printf("%s, %d, %d\n", fruit[idx].name, fruit[idx].size, fruit[idx].price);
//	}
    
    // PrintFruits(fruits, 4);
	// int countFruits = 4;
	// RemoveFruit(fruits, countFruits, 1);
	// PrintFruits(fruits. ChooseFruit);
}