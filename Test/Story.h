#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Windows;
ref class Story
{
private:String^ StoryTime;
private:String^ StoryImage;
private:String^ StoryText;
private: DateTime^ realTime;
private:int User_ID_FK;

public: void setTime(String^ time) {
	this->StoryTime = time;
}
public: void setrealTime(DateTime^ datetime) {
	this->realTime = datetime;
}
public: void setImage(String^ Image) {
	this->StoryImage = Image;
}
public: void setText(String^ Text) {
	this->StoryText = Text;
}
public: void setID(int id) {
	this->User_ID_FK = id;
}
public: String^ getTime() {
	return this->StoryTime;
}
public: String^ getImage() {
	return this->StoryImage;
}
public: String^ getText() {
	return this->StoryText;
}
public: DateTime^ getRealTime() {
	return this->realTime;
}
public: int getID() {
	return this->User_ID_FK;
}

};

