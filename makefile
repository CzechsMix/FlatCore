#Main building methods
flatcore: flatcore.o
	g++ -o flatcore objects/* $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

flatcore.o: src/flatcore.cpp game_engine.o
	g++ -o objects/flatcore.o -c src/flatcore.cpp $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

#object methods
game_engine.o: sprite.o src/game_engine.cpp
	g++ -o objects/game_engine.o -c src/game_engine.cpp

sprite.o: tangible.o src/sprite.cpp
	g++ -o objects/sprite.o -c src/sprite.cpp

tangible.o: drawable.o src/tangible.cpp
	g++ -o objects/tangible.o -c src/tangible.cpp

drawable.o: vector.o src/drawable.cpp
	g++ -o objects/drawable.o -c src/drawable.cpp

vector.o: src/vector.cpp
	g++ -o objects/vector.o -c src/vector.cpp 


#Clean methods
clean:
	@echo "cleaning object files..."
	@rm objects/*
	@test -f "flatcore" && { echo "cleaning executable..."; rm flatcore; }
	@echo "project cleaned!"
