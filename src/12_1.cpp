// 응용 알고리즘 - 최대합 구조 표현

#include <cstdio>
#include <cstdlib>
#include <queue>
#include <algorithm>
using namespace std;
void PrintList(int list[], int size){
	for (int i = 0; i < size; ++i){
		printf("%5d", list[i]);
	}
	printf("\n");
}

class Priority_queque{
	int list[10];
	int size = 0;
public:
	Priority_queque() : size(0) {}
	void push(int data){
		list[size++] = data;
		push_heap(list, list+size);
	}
	int top(){
		return list[0];
	}
	void pop(){
		pop_heap(list, list+size);
		--size;
	}
};

int main(){
	Priority_queque pq;
	pq.push(50);
	pq.push(60);
	pq.push(30);
	pq.push(10);
	pq.push(20);
	pq.push(90);
	pq.push(70);
	pq.push(58);
	
	printf("%5d\n", pq.top());
	pq.pop();
	printf("%5d\n", pq.top());
	pq.pop();	
	printf("%5d\n", pq.top());
	pq.pop();
	
	// int list[10] = { 50, 60, 30, 10, 20, 90, 70, 58 };
	// int size = 0;
	// PrintList(list, size);
	// size = 8;
	// make_heap(list, list + size);
	// sort_heap(list, list + size);
	// size = 0;
	// PrintList(list, 8);
		
	// make_heap(list , list + size);
	// pop_heap(list, list + size);
	// --size;
	// pop_heap(list, list + size);
	// --size;
	// pop_heap(list, list + size);
	// --size;
	// pop_heap(list, list + size);
	// --size;
	// PrintList(list, 8);
	
	// make_heap(list , list + size);
	// ++size;
	// push_heap(list , list + size);
	// PrintList(list, size);
	// ++size;
	// push_heap(list , list + size);
	// PrintList(list, size);
	// ++size;
	// push_heap(list , list + size);
	// PrintList(list, size);
	// ++size;
	// push_heap(list , list + size);
	// PrintList(list, size);
	// ++size;
	// push_heap(list , list + size);
	// PrintList(list, size);
	
	system('pause');
}