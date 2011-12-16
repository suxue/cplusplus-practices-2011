#include<iostream>
using namespace std;
class Felid{
	void Set_Name(string name){
		Name=name;
	}
	string Get_Name(){
		return Name;
	}
	virtual void sound();
	private:
	string Name;
};
class Cat:public Felid{
	 void sound(int i){
		sound_kind=i;
	}
	int Get_sound(){
	return sound_kind;
	}
	private:
	int sound_kind;
};
class Leopard:public Felid{
	 void  sound(int i){
		sound_kind=i;
	}
	int Get_sound(){
		return sound_kind;
	}
	private:
	int sound_kind;
};