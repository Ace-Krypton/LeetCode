#!/bin/bash

EXECUTABLE_LIST="test_all_elf.sh"
EXECUTABLES=$(cat "$EXECUTABLE_LIST")
EXECUTABLE_DIR="."
FAILED_TESTS=""

for executable in $EXECUTABLES; do
    if [ -f "$EXECUTABLE_DIR/$executable" ]; then
        ./"$EXECUTABLE_DIR/$executable" > /dev/null 2>&1
        exit_code=$?

        if [ "$exit_code" -ne 0 ]; then
            FAILED_TESTS="$FAILED_TESTS $executable"
        fi
    else
        echo "Executable '$executable' not found."
    fi
done

if [ -n "$FAILED_TESTS" ]; then
    echo "There are failing tests:"
    for test in $FAILED_TESTS; do
        echo "$test"
    done
    exit 1
else
    echo "All tests passed successfully!"
    exit 0
fi