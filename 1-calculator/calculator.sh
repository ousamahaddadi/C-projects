#!/bin/bash
while true; do
    # Compile the C program
    gcc -o calculator calculator.c

    # Check if compilation was successful
    if [ $? -eq 0 ]; then
        # Run the compiled program
        ./calculator
    else
        echo "Compilation failed."
        break
    fi
    read -p "Calculate again ? (y/n): " choice
    if [ $choice != "n" ]; then
        break
    fi
done
