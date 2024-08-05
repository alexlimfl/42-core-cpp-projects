#!/bin/bash

echo "------Test Invalid------"
echo "./convert ++"
./convert ++
echo "./convert -=-439.5"
./convert -=-439.5
echo "./convert 8938.fun"
./convert 8938.fun
echo "./convert --+847.6f"
./convert --+847.6f

echo "------Test Char------"
echo "./convert A"
./convert A
echo "./convert B"
./convert B
echo "./convert C"
./convert C

echo "------Test Int------"
echo "./convert 0"
./convert 0
echo "./convert -20"
./convert -20
echo "./convert 74"
./convert 74
echo "./convert -0"
./convert -0
echo "./convert 420"
./convert 420

echo "------Test float/double------"
echo "./convert 0.1"
./convert 0.1
echo "./convert -20.5"
./convert -20.5
echo "./convert 74f"
./convert 74f
echo "./convert -0.7f"
./convert -0.7f
echo "./convert 420"
./convert 420