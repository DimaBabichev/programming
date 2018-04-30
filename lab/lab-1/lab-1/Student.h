#pragma once
using namespace std;
using namespace System;
using namespace System::Collections;

ref class Student
{
public:
	String ^ Name;
	int Assessments;
	Student();
	void SetName(String^);
	void SetAssessments(int);
	String^ GetName();
	int GetAssessments();
};