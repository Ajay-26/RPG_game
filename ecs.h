#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include "component.h"

class System{
public:
	std::map<int, Component*> components_map;
	int get_ticket_number();
	void add_component(Component *c);
	void render_system();
	System();
	~System();
private:
	int ticket_id;
};