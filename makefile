#Main building methods
flatcore: flatcore.o
	g++ objects/flatcore.o -o flatcore $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

flatcore.o: src/flatcore.cpp
	g++ -o objects/flatcore.o -c src/flatcore.cpp $$(pkg-config --libs allegro-5.0 allegro_main-5.0)

#object methods
vector.o: src/vector.cpp
	g++ -o objects/vector.o -c src/vector.cpp 


#Clean methods
clean:
	rm objects/*
	rm flatcore

clean_test:
	rm flatcore_test
