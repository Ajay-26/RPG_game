#include "ecs.h"

System::System(){
	this->ticket_id = 0;
	return;
}

System::~System(){
	for(auto p : this->components_map){
		delete p.second;
	}
	this->ticket_id = 0;
}

int System::get_ticket_number(){
	this->ticket_id++;
	return this->ticket_id - 1;
}

void System::render_system(){
	for(auto p :this->components_map){
		(p.second)->render();
	}
}