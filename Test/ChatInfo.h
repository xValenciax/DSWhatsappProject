#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class ChatInfo
{
private: String^ lastSeen;
private: int CH_ID_FK = 1;
private: int User_ID_Type = 1;

public: int getID() {
	return this->CH_ID_FK;
}public: int getUserID() {
	return this->User_ID_Type;
}
public: String^ getLast() {
	return this->lastSeen;
}
public: void setCHID(int id) {
	this->CH_ID_FK = id;
}
public: void setUserID(int type) {
	this->User_ID_Type = type;
}
public: void setLastSeen(String^ last) {
	this->lastSeen = last;
}
};

