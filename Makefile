chapters = $(patsubst %,@%,$(wildcard ch*))

.phony: $(chapters)

default: $(chapters)

@ch%:
	cd $(patsubst @ch%,ch%,$@); make;

clean:
	rm -f */*.o */*.exe
