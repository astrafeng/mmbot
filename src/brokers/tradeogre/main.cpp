/*
 * main.cpp
 *
 *  Created on: 22. 9. 2021
 *      Author: ondra
 */


#include "../api.h"
#include "tradeogre.h"


int main(int argc, char **argv) {
	using namespace json;

	if (argc < 2) {
		std::cerr << "Requires a signle parametr" << std::endl;
		return 1;
	}

	TradeOgreIFC ifc(argv[1]);
	ifc.dispatch();

}

