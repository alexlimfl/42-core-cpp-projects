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
echo
echo "------Test Char------"
echo "./convert A"
./convert A
echo "./convert B"
./convert B
echo "./convert C"
./convert C
echo
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
echo
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
echo
echo "------Test  pseudo literals------"
echo "./convert inff"
./convert inff
echo "./convert -inff"
./convert -inff
echo "./convert +inff"
./convert +inff
echo "./convert nanf"
./convert nanf
echo "./convert inf"
./convert inf
echo "./convert -inf"
./convert -inf
echo "./convert +inf"
./convert +inf
echo "./convert nan"
./convert nan