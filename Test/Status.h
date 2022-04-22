#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class Status
{
private: int Seen;
private: String^ Date;
private: String^ Time;

public: String^ getDate() {
	return this->Date;
}
public: String^ getTime() {
	return this->Time;
}
public: void setDate(String^ date) {
	this->Date = date;
}
public: void setTime(String^ time) {
	this->Time = time;
}
};

