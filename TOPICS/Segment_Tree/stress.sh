#!/bin/bash

for ((i = 1; ; ++i)); do
    echo "Testing input $i"
    ./gen $i > int  # Generate input
    ./A < int > out_brute_force  # Run brute force solution
    ./B < int > out_optimized  # Run optimized solution

    # Compare outputs
    if ! cmp -s out_brute_force out_optimized; then
        echo "Outputs differ for input $i"
        break
    fi
done

echo "Test completed successfully up to input $i"

