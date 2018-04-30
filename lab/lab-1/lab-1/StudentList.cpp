#include "stdafx.h"
#include "StudentList.h"
#include "Student.h"
#include <string>

using namespace System;
using namespace System::Collections;
using namespace System::IO;

StudentList::StudentList()
{
	List = gcnew ArrayList();
}

bool StudentList::StudentSearch(int five, int four, int three, int two, int Assessments)
{
	int layoutfive = 0, layoutfour = 0, layoutthree = 0, layouttwo = 0;
	Student^ st = gcnew Student();
	while (Assessments % 10 != 0)
	{
		if (Assessments % 10 == 2)
			layouttwo++;
		if (Assessments % 10 == 3)
			layoutthree++;
		if (Assessments % 10 == 4)
			layoutfour++;
		if (Assessments % 10 == 5)
			layoutfive++;
		Assessments = Assessments / 10;
	}
	if (five == layoutfive && four == layoutfour && three == layoutthree && two == layouttwo)
	{
		return true;
	}
	return false;
}

bool StudentList::FillArrayList()
{
	Student^ st = gcnew Student();
	st->SetName("Dima");
	st->SetAssessments(54532);
	List->Add(st);
	st = gcnew Student();
	st->SetName("Kostya");
	st->SetAssessments(33345);
	List->Add(st);
	return true;
}

ArrayList^ StudentList::GetList()
{
	return List;
}