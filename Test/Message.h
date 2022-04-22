#pragma 
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class Message
{
private: int Msg_ID;
private: int User_ID_FK;
private: String^ Text;

public: int getMsgID() {
	return this->Msg_ID;
}
public: int getUserIDFK() {
	return this->User_ID_FK;
}
public: String^ getMsg() {
	return this->Text;
}
public: void setMsg(String^ msg) {
	this->Text = msg;
}
public: void setMsgID(int id) {
	this->Msg_ID = id;
}
public: void setMsg(int user_id) {
	this->User_ID_FK = user_id;
}
};

