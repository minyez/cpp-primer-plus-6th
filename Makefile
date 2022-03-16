chapters = $(patsubst %,@%,$(wildcard ch*))

.phony: $(chapters)

default: $(chapters)

@ch%:
	cd $(patsubst @ch%,ch%,$@); $(MAKE);

clean:
	rm -f */*.o */*.exe
