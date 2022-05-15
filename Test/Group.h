#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;

ref class Group
{
private: String^ groupName;
private: String^ groupDesc;
private: String^ pic;
private: int CH_ID_FK;

public: void setName(String^ name) {
	this->groupName = name;
}
public: void setDesc(String^ desc) {
	this->groupDesc = desc;
}
public: void setPic(String^ pic) {
	this->pic = pic;
}
public: void setID(int id) {
	this->CH_ID_FK = id;
}
public: String^ getName() {
	return this->groupName;
}
public: String^ getDesc() {
	return this->groupDesc;
}
public: String^ getPic() {
	return this->pic;
}
public: int getID() {
	return this->CH_ID_FK;
}
};

