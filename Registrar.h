#pragma once
#include "GUI\GUI.h"
#include "Actions\Action.h"
#include "Rules.h"
#include "StudyPlan/StudyPlan.h"
#include "Courses\Course.h"


//The maestro class for the application
class Registrar
{
	GUI *pGUI;	//pointer to GUI 
	Rules RegRules;	//Registration rules
	StudyPlan *pSPlan;

public:
	Registrar();
	GUI* getGUI() const;
	Action* CreateRequiredAction();
	bool ExecuteAction(Action*);
	void UpdateInterface();
	StudyPlan* getStudyPlay() const;

	void Run();

	~Registrar();
	//from here
	//this function for checking if the course code is found in the courses cataloge
	CourseInfo* getcourseinfo(Course_Code code);
	//CourseInfo* getcoursecrd(Course_Code code, Course crd);
	AcademicYearOfferings* getyear(string year);

};

