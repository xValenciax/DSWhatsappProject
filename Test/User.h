#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;

ref class User
{
private: int id;
private: int lastLogged;
public: String^ pass;
private: String^ First_Name;
private: String^ Last_Name;
public: String^ phone_number;

public: int getID() {
	return id;
}
public: int getLogged() {
	return lastLogged;
}
public: String^ getPass() {
	return pass;
}
public: String^ getFirst() {
	return First_Name;
}
public: String^ getLast() {
	return Last_Name;
}
public: String^ getPhone() {
	return phone_number;
}
public: void setPass(String^ pass) {
	this->pass = pass;
}
public: void setID(int id) {
	this->id = id;
}
public: void setLogged(int lg) {
	this->lastLogged = lg;
}
public: void setFirst(String^ first) {
	this->First_Name = first;
}
public: void setLast(String^ last) {
	this->Last_Name = last;
}
public: void setPhone(String^ phone) {
	this->phone_number = phone;
}
};

