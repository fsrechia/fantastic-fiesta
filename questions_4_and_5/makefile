CXX = g++
CPPFLAGS =        # put pre-processor settings (-I, -D, etc) here
CXXFLAGS = -Wall  # put compiler settings here
LDFLAGS =         # put linker settings here

concat_remove_app:
	$(CXX) ConcatRemove.cpp main.cpp -o $@ $(CXXFLAGS) $(LDFLAGS)

test:
	$(CXX) ConcatRemove.cpp ConcatRemoveTest.cpp -o $@ $(CXXFLAGS) $(LDFLAGS)

clean:
	rm -vf test
	rm -vf concat_remove_app