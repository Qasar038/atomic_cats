#!/bin/bash
echo "Building Atomic Cats projects..."
cd projects/backend
g++ sorter.cpp -o sorter.out
g++ square.cpp -o square.out
echo "Done!"
