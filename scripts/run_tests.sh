#!/bin/bash

# File containing the list of test executables
EXECUTABLE_LIST="test_all_elf.sh"

# Get the list of executables from the file
EXECUTABLES=$(cat "$EXECUTABLE_LIST")

# Path to the directory containing the executables
EXECUTABLE_DIR="."

# Initialize a variable to keep track of failed tests
FAILED_TESTS=""

# Loop through each executable in the list and run the tests
for executable in $EXECUTABLES; do
    if [ -f "$EXECUTABLE_DIR/$executable" ]; then
        ./"$EXECUTABLE_DIR/$executable" > /dev/null 2>&1
        exit_code=$?
        
        # If exit code is not 0, the test failed
        if [ "$exit_code" -ne 0 ]; then
            FAILED_TESTS="$FAILED_TESTS $executable"
        fi
    else
        echo "Executable '$executable' not found."
    fi
done

# Print the list of failed tests or success message
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
