export PICO_SDK_PATH=../pico-sdk

default:
	@cd build && cmake ..
	@cd build && make

clean:
	rm -rf build/*
