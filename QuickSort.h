#pragma once
#include "Sort.h"

//選択ソート
class QuickSort : public Sort
{
public:
	virtual void Exec(int* array, int size)override;
};
