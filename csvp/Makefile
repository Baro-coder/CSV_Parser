# Makefile
## Variables
### -- Compiler
CC = g++
### -- Initial compiler flags
CFLAGS = -Wall -Iinclude/

### -- OS platform get
OS = $(shell uname)

### -- Target core name
TARGET = csvp
### -- Var for library name
LIB_TARGET = ,
### -- Unit tests executable entry
TEST_TARGET = execute_tests

### -- Library sources and objects
SOURCES = $(wildcard src/*.cpp)
_SRC_W = $(wildcard src/*/*/*.cpp)
OBJECTS = $(patsubst src/%.cpp, obj/%.o, $(SOURCES))
OBJECTS += $(patsubst src/%.cpp, obj/%.o, $(_SRC_W))

### -- Unit tests sources and objects
SOURCES_TESTS = $(wildcard tests/*.cpp)
OBJECTS_TESTS = $(patsubst tests/%.cpp, obj/tests/%.o, $(SOURCES_TESTS))
# --------------------------------------------

# --------------------------------------------
# - OS Platform Check -
# --------------------------------------------
$(info [*] OS platform checking...)
ifeq (${OS}, Linux)
$(info [+] Detected supported OS: $(OS))

$(eval LIB_TARGET = lib$(TARGET).a)
$(eval CFLAGS += -DLIN_OS)

else
ifeq (${OS}, Windows_NT)
$(info [+] Detected supported OS: $(OS))

$(eval LIB_TARGET = lib$(TARGET).so)
$(eval EXE_TARGET = $(TEST_TARGET).exe)
$(eval CFLAGS += -DWIN_OS)

$(error [!] Compiling rules not implemented yet. Please, contact with project administrator.)

else
$(error [!] Detected unsupported OS: $(OS))

endif
endif
# --------------------------------------------

# --------------------------------------------
# - MAIN RULES -
# --------------------------------------------
## Main Rule : make library and compile main
all: clean build $(LIB_TARGET)
## Tests Rule : Build and run all tests from tests/
tests: clean build $(LIB_TARGET) $(TEST_TARGET)
## Install Rule : install library into the system
install: all uninstall
	$(info [*] Install : Installing library:)
	@echo "\t sudo mkdir /usr/include/csvp"
	@sudo mkdir /usr/include/csvp
	
	@echo "\t sudo cp -R ./include/csvp/* /usr/include/csvp/"
	@sudo cp -R ./include/csvp/* /usr/include/csvp/
	
	@echo "\t sudo cp ./lib/$(LIB_TARGET) /usr/lib/"
	@sudo cp ./lib/$(LIB_TARGET) /usr/lib/

	@echo "\n-- Library was successfully installed. -- \n"

## Uninstall Rule : remove library from the system
uninstall:
	$(info [*] Uninstall : Removing library from system (if it exists):)
	@echo "\t sudo rm -fr /usr/include/csvp/"
	@sudo rm -fr /usr/include/csvp/

	@echo "\t sudo rm -f /usr/lib/$(LIB_TARGET)"
	@sudo rm -f /usr/lib/$(LIB_TARGET)

	@echo "\n-- Library was successfully removed. -- \n"

## Clean Rule : remove work directories
clean:
	$(info [*] Clean : Cleaning workspace:)
	@echo "\t rm -fr bin/ obj/ ./*.s"
	@rm -fr bin/ obj/ lib/ ./*.s
	@echo

## Build Rule : Create work directories
build: clean
	$(info [*] Build : Making directories:)
	@echo "\t mkdir bin/ obj/ lib/"
	@mkdir -p bin/ lib/ obj/tests obj/classes/private obj/classes/public
	@echo

# --------------------------------------------

# --------------------------------------------
# - PARAMETRIZED RULES -
# --------------------------------------------
## Rule : Making static library
$(LIB_TARGET): $(OBJECTS)
	$(info [*] Library : $@ : Making static library:)
	@echo "\t ar crs lib/$@ $^\n"
	@ar crs lib/$@ $^

	@echo "-- Library '$@' successfully made in lib/ --\n"

## Rule : Building C/C++ Object files
$(OBJECTS):
	$(info [+] Object : $@ : Building object:)\

	@echo "\t $(CC) -c $(patsubst obj/%, src/%, $(*D))/$(*F).cpp -o $@ $(CFLAGS)\n"
	@$(CC) -c $(patsubst obj%, src%, $(*D))/$(*F).cpp -o $@ $(CFLAGS)

## Rule : Compile main test source file with linkinkg of already made library
$(TEST_TARGET): $(OBJECTS_TESTS)
	$(info [*] Executable Test : $@ : Comppiling executable:)

	$(eval CFLAGS += -Llib/)
	$(eval CFLAGS += -l$(TARGET))

	@echo "\t $(CC) $^ -o bin/$@ $(CFLAGS)\n"
	@$(CC) $^ -o bin/$@ $(CFLAGS)

	@echo "-- Executable '$@' successfully created in bin/ --\n"

## Rule : Building C/C++ Object files from unit test source files
$(OBJECTS_TESTS):
	$(info [+] Object : $@ : Building object:)

	@echo "\t $(CC) -c $(patsubst obj/%, %, $(*D))/$(*F).cpp -o $@ $(CFLAGS)\n"	
	@$(CC) -c $(patsubst obj/%, %, $(*D))/$(*F).cpp -o $@ $(CFLAGS)
