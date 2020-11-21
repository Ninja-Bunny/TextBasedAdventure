#!/bin/bash
clang++ -g source/main.cpp source/Assessment.cpp source/Auswertung.cpp source/BeginnSemester.cpp source/Betriebssysteme.cpp source/Chef.cpp source/Englisch.cpp source/Game.cpp source/Informatik.cpp source/Mathe.cpp source/Programmieren.cpp source/Stage.cpp -o adventure -std=c++17

./adventure
