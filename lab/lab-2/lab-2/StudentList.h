#pragma once
using namespace System;
using namespace System::Collections;

ref class StudentList
{

public:
	ArrayList ^ List;
	StudentList(void);
	bool StudentSearch(int five, int four, int three, int two, int Assessments);
	bool FillArrayList();
	ArrayList^ GetList();
};