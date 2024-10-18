#pragma once
//array_funcs.h

void swap_grades(int grades[], int idx1, int idx2)
{
	int temp = grades[idx1];
	grades[idx1] = grades[idx2];
	grades[idx2] = temp;
}

// ���� �����ϴ� �Լ�
void insertion_sort(int grades[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = grades[i];
		int j = i - 1;

		//grades[0..i - 1]�� �̵��ϱ�
		while (j >= 0 && grades[j] > key)
		{
			grades[j + 1] = grades[j];
			j--;
		}
		grades[j + 1] = key;
	}
}