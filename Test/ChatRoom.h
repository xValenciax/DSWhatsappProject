#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class ChatRoom
{
private: int CH_ID = 1;
private: int CH_TYPE = 1;

public: int getCHID() {
	return this->CH_ID;
}public: int getCHType() {
	return this->CH_TYPE;
}
public: void setCHID(int id) {
	this->CH_ID = id;
}
public: void setCHType(int type) {
	this->CH_TYPE = type;
}
};

