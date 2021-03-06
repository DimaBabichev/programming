#include "stdafx.h"
#include "Student.h"
#include "StudentList.h"
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Collections;

void main()
{
	Student^ st = gcnew Student();
	StudentList^ sl = gcnew StudentList();
	ArrayList^ list = gcnew ArrayList();
	int five, four, three, two, i = 0;
	bool s;
	bool fill = sl->FillArrayList();
	list = sl->GetList();

	Console::WriteLine("Введите количество пятерок: ");
	cin >> five;
	Console::WriteLine("Введите количество четверок: ");
	cin >> four;
	Console::WriteLine("Введите количество троек: ");
	cin >> three;
	Console::WriteLine("Введите количество двоек: ");
	cin >> two;
	cout << endl;

	while (i < list->Count)
	{
		st = (Student^)list[i];
		s = sl->StudentSearch(five, four, three, two, st->GetAssessments());
		if (s == true)
		{
			Console::WriteLine(st->GetName());
		}
		i++;
	}
	Console::ReadKey();
}
