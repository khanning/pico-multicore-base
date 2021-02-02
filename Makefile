export PICO_SDK_PATH=../pico-sdk

default:
	@mkdir -p build
	@cd build && cmake ..
	@cd build && make

clean:
	rm -rf build/*
