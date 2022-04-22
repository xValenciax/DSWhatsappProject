#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class UserChatRoom
{
private: int CH_ID_FK;
private: int User_ID_FK;

public: int getCHID() {
	return this->CH_ID_FK;
}
public: int getUserID() {
	return this->User_ID_FK;
}
public: void setCHID(int chat) {
	this->CH_ID_FK = chat;
}
public: void setUserID(int user) {
	this->CH_ID_FK = user;
}
};

