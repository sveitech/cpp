
BUILD_ROOT := ./build

.PHONY:toolchain
toolchain:
	rm -rf ${BUILD_ROOT}

	conan install . \
		--install-folder=${BUILD_ROOT} \
		--profile=default \
		--settings=build_type=Release \
		--build=missing

	cmake \
		-DCMAKE_TOOLCHAIN_FILE=${BUILD_ROOT}/conan_toolchain.cmake \
		-DCMAKE_BUILD_TYPE=Release \
		-DCMAKE_EXPORT_COMPILE_COMMANDS=Yes \
		-B ${BUILD_ROOT} \
		.

.PHONY:clean
clean:
	rm -rf ./build
