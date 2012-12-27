include Makefile.inc

PLOTS = cpp-test.svg

all: $(PLOTS)
  
$(PLOTS): %.svg: %.escad
	extopenscad $< $@

cpp-test.escad: cpp-test.txt plate.escad StepperMounts/size34.escad
	cpp -C -P $< -o $@

clean:
	rm $(PLOTS) $(patsubst %.svg,%.escad,$(PLOTS))
