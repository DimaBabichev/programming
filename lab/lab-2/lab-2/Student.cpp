#include "stdafx.h"
#include "Student.h"

using namespace System;

Student::Student()
{
}

void Student::SetName(String^ FIO)
{
	Name = FIO;
}

void Student::SetAssessments(int Assessment)
{
	Assessments = Assessment;
}

String^ Student::GetName()
{
	return Name;
}

int Student::GetAssessments()
{
	return Assessments;
}