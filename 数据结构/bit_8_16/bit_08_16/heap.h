//堆
#ifndef _HEAP_H_
#define _HEAP_H_//避免头文件重复使用

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* data;
	int size;
	int capacity;
}Heap;

void AdjustDown(Heap* hp, int n);
void HeapInit(Heap* hp, HPDataType* a, int n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
void HeapPrint(Heap* hp);
void HeapPrints(Heap* hp);
void HeapSort(Heap* hp);

#endif /*_HEAP_H_*/
