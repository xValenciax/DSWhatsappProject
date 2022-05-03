#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class msgStatus
{
private: String^ date_of_msg;
private: String^ time_of_msg;
private: int seen;
private: int Msg_ID_FK;

public: String^ getDate() {
	return this->date_of_msg;
}
public: String^ getTime() {
	return this->time_of_msg;
}
public: int getSeen() {
	return this->seen;
}
public: int getMsg_ID() {
	return this->Msg_ID_FK;
}
public: void setSeen(int seen) {
	this->seen = seen;
}
public: void setMsg_ID(int msg_id) {
	this->Msg_ID_FK = msg_id;
}
public: void setDate(String^ date) {
	this->date_of_msg = date;;
}
public: void setTime(String^ time) {
	this->time_of_msg = time;
}
};

