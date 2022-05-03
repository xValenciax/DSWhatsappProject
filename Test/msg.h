#pragma 
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class msg
{
private: int Msg_ID = 0;
private: int User_ID_FK = 0;
private: int Chat_ID_FK = 0;
private: String^ Text;

public: int getMsgID() {
	return this->Msg_ID;
}
public: int getChatID() {
	return this->Chat_ID_FK;
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
public: void setUserID(int user_id) {
	this->User_ID_FK = user_id;
}
public: void setChatID(int chat_id) {
	this->Chat_ID_FK = chat_id;
}
};

