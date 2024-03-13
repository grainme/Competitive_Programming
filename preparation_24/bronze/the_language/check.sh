#!/bin/bash

# Compile the C++ code
g++  solve.cpp -o solve

# Run the solution with input from input.txt and save output to temp_output.txt
./solve < input.txt > temp_output.txt

# Compare the output with the expected output
if diff -q temp_output.txt output.txt; then
    echo "Test Passed: Output matches expected output."
else
    echo "Test Failed: Output does not match expected output."
fi

# Clean up temporary files
rm temp_output.txt

