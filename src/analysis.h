#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include <iostream>
#include <deque>
#include <algorithm>
#include <map>
#include "parameters.h"
#include "utils.h"

typedef std::map<std::string, std::map<uint, std::pair<float, float> > > table;

void analysis(Parameters& parameters);
