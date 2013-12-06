hello: hello.cpp
	$(CXX) $(CXXFLAGS) $(INC) $(LDFLAGS) $(LDLIBS) -o $@ $< $(OBJS)

clean:
	rm -rf *.o
	rm -rf *.gch