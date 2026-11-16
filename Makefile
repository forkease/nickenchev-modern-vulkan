.PHONY: usage cmake ninja clean
# TODO: cmake presets and invoke them for building
BUILD := build

usage:
	@echo "        usage: make [clean,cmake,ninja]"

cmake:
	@cmake -B $(BUILD) -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

ninja:
	@ninja -C $(BUILD)

clean:
	@rm -fr $(BUILD)
	@git restore $(BUILD)
