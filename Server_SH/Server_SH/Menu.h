#pragma once
#include"Server.h"
#include"User.h"
class USER :public MENU
{
	void CheckAutorization(int i, Server& obj);
public:
	void TakePropMenu(Server& obj, MENU& user, int i);
	void ExpertMenu(Server& obj, int i, MENU& user);
	void AdminMenu(Server& obj);
	void UserMenu(Server& obj, int i, MENU user);
	void startMenu(Server& obj);
	void MenuExpertReview(Server& obj);
	void MenuChangeUser(Server& obj, int i, MENU& user);
	void MenuChangeExpert(Server& obj, int i, MENU& user);
};

