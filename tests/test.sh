#!/bin/bash

# Variables
EXECUTABLE="test_program"
SOURCE_FILE="../src/main.c"
EXPECTED_OUTPUT="hello"

# Compilation
gcc -o $EXECUTABLE $SOURCE_FILE -iquote ../include -iquote ../Jarvis/include -L../Jarvis -lmy
if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi

# Execution and test
OUTPUT=$(./$EXECUTABLE)
EXIT_CODE=$?

if [ $EXIT_CODE -ne 0 ]; then
    echo "Test failed: Program exited with code $EXIT_CODE"
    exit 1
fi

if [ "$OUTPUT" == "$EXPECTED_OUTPUT" ]; then
    echo "Test passed: Output is correct"
else
    echo "Test failed: Expected '$EXPECTED_OUTPUT', but got '$OUTPUT'"
    exit 1
fi

# Cleanup
rm -f $EXECUTABLE
echo "All tests passed"