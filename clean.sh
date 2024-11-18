#!/bin/bash

# Directory to start the cleanup (defaults to the current directory if not provided)
DIR=${1:-.}

echo "Starting cleanup in directory: $DIR"

# Find and delete .exe files
find "$DIR" -type f -name "*.exe" -exec rm -v {} \;

# Find and delete .out files
find "$DIR" -type f -name "*.out" -exec rm -v {} \;

echo "Cleanup complete."

