#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Actions\Action.h"
#include "Actions\Action.h"
class AddNotes
{
public:
	void ActionAddNotes(Registrar *p);
	bool Execute();
	virtual ~ActionAddNotes();  //m4 3rfa a3mel action
};

