@echo off
title Adventure Game 
cls
echo Das Programm wird jetzt kompiliert ... 
g++ -g source/main.cpp source/Assessment.cpp source/Auswertung.cpp source/BeginnSemester.cpp source/Betriebssysteme.cpp source/Chef.cpp source/Englisch.cpp source/Game.cpp source/Informatik.cpp source/Mathe.cpp source/Programmieren.cpp source/Stage.cpp -o adventure.exe -std=c++17
echo Kompilierung abgeschlossen.
echo Druecke eine beliebige Taste um das Programm zu starten!
pause >nul
adventure.exe
