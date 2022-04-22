	#pragma once
	using namespace System;
	using namespace System::Data;
	using namespace System::Windows;
	ref class Profile
	{
	private:String^ Description;
	private:String^ Photo;
	private:int User_ID_FK;
	private:int Visibility;
	private:int IsLogged;

		public: Profile() {}

		public: int getID() {
			return this->User_ID_FK;
		}
		public: int getVis() {
			return this->Visibility;
		}
		public: int getLogged() {
			return this->IsLogged;
		}
		public: String^ getDesc() {
			return this->Description;
		}
		public: String^ getPhoto() {
			return this->Photo;
		}
		public: void setID(int id) {
			this->User_ID_FK = id;
		}
		public: void setVis(int vis) {
			this->Visibility = vis;
		}
		public: void setLogged(int log) {
			this->IsLogged = log;
		}
		public: void setDesc(String^ desc) {
			this->Description = desc;
		}
		public: void setPhoto(String^ photo) {
			this->Photo = photo;
		}
	};

