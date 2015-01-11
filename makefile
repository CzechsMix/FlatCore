#Main building methods
flatcore: flatcore.o
	g++ objects/flatcore.o -o flatcore $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

flatcore.o: src/flatcore.cpp
	g++ -o objects/flatcore.o -c src/flatcore.cpp $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

#object methods
sprite.o: drawable.o src/sprite.cpp
	g++ -o objects/sprite.o -c src/sprite.cpp

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
