#!/bin/sh

echo "start test"
echo "test 1 2 3 4 5"
./push_swap 1 2 3 4 5 | wc -l

echo "test 1 2 3 5 4"
./push_swap 1 2 3 5 4 | wc -l

echo "test 1 2 4 3 5"
./push_swap 1 2 3 4 5 | wc -l

echo "test 1 2 4 5 3"
./push_swap 1 2 4 3 5 | wc -l

echo "test 1 2 5 4 3"
./push_swap 1 2 5 4 3 | wc -l

echo "test 1 2 5 3 4"
./push_swap 1 2 5 3 4 | wc -l

echo "test 1 3 4 5 2"
./push_swap 1 3 4 5 2 | wc -l

echo "test 1 3 4 2 5"
./push_swap 1 3 4 2 5 | wc -l

echo "test 1 3 5 4 2"
./push_swap 1 3 5 4 2 | wc -l

echo "test 1 3 5 2 4"
./push_swap 1 3 5 2 4 | wc -l

echo "test 1 3 4 2 5"
./push_swap 1 3 4 2 5 | wc -l

echo "test 1 3 4 5 2"
./push_swap 1 3 4 5 2 | wc -l

echo "test 1 4 5 3 2"
./push_swap 1 4 5 3 2 | wc -l

echo "test 1 4 5 2 3"
./push_swap 1 4 5 2 3 | wc -l

echo "test 1 4 3 2 5"
./push_swap 1 4 3 2 5 | wc -l

echo "test 1 4 3 5 2"
./push_swap 1 4 3 5 2 | wc -l

echo "test 1 4 2 5 3"
./push_swap 1 4 2 5 3 | wc -l

echo "test 1 4 2 3 5"
./push_swap 1 4 2 3 5 | wc -l

echo "test 1 5 4 3 2"
./push_swap 1 5 4 3 2 | wc -l

echo "test 1 5 4 2 3"
./push_swap 1 5 4 2 3 | wc -l

echo "test 1 5 3 2 4"
./push_swap 1 5 3 2 4 | wc -l

echo "test 1 5 3 4 2"
./push_swap 1 5 3 4 2 | wc -l

echo "test 1 5 2 4 3"
./push_swap 1 5 2 4 3 | wc -l

echo "test 1 5 2 3 4"
./push_swap 1 5 2 3 4 | wc -l

echo "test 2 3 4 5 1"
./push_swap 2 3 4 5 1 | wc -l

echo "test 2 3 4 1 5"
./push_swap 2 3 4 1 5 | wc -l

echo "test 2 3 5 1 4"
./push_swap 2 3 5 1 4 | wc -l

echo "test 2 3 5 4 1"
./push_swap 2 3 5 4 1 | wc -l

echo "test 2 3 1 5 4"
./push_swap 2 3 1 5 4 | wc -l

echo "test 2 3 1 4 5"
./push_swap 2 3 1 4 5 | wc -l

echo "test 2 1 3 4 5"
./push_swap 2 1 3 4 5 | wc -l

echo "test 2 1 3 5 4"
./push_swap 2 1 3 5 4 | wc -l

echo "test 2 1 4 5 3"
./push_swap 2 1 4 5 3 | wc -l

echo "test 2 1 4 3 5"
./push_swap 2 1 4 3 5 | wc -l

echo "test 2 1 5 3 4"
./push_swap 2 1 5 3 4 | wc -l

echo "test 2 1 5 4 3"
./push_swap 2 1 5 4 3 | wc -l

echo "test 2 5 1 4 3"
./push_swap 2 5 1 4 3 | wc -l

echo "test 2 5 1 3 4"
./push_swap 2 5 1 3 4 | wc -l

echo "test 2 5 4 3 1"
./push_swap 2 5 4 3 1 | wc -l

echo "test 2 5 4 1 3"
./push_swap 2 5 4 1 3 | wc -l

echo "test 2 5 3 1 4"
./push_swap 2 5 3 1 4 | wc -l

echo "test 2 5 3 4 1"
./push_swap 2 5 3 4 1 | wc -l

echo "test 2 4 5 1 3"
./push_swap 2 4 5 1 3 | wc -l

echo "test 2 4 5 3 1"
./push_swap 2 4 5 3 1 | wc -l

echo "test 2 4 1 3 5"
./push_swap 2 4 1 3 5 | wc -l

echo "test 2 4 1 5 3"
./push_swap 2 4 1 5 3 | wc -l

echo "test 2 4 3 5 1"
./push_swap 2 4 3 5 1 | wc -l

echo "test 2 4 3 1 5"
./push_swap 2 4 3 1 5 | wc -l

echo "test 3 1 2 4 5"
./push_swap 3 1 2 4 5 | wc -l

echo "test 3 1 2 5 4"
./push_swap 3 1 2 5 4 | wc -l

echo "test 3 1 4 5 2"
./push_swap 3 1 4 5 2 | wc -l

echo "test 3 1 4 2 5"
./push_swap 3 1 4 2 5 | wc -l

echo "test 3 1 5 2 4"
./push_swap 3 1 5 2 4 | wc -l

echo "test 3 1 5 4 2"
./push_swap 3 1 5 4 2 | wc -l

echo "test 3 2 1 4 5"
./push_swap 3 2 1 4 5 | wc -l

echo "test 3 2 1 5 4"
./push_swap 3 2 1 5 4 | wc -l

echo "test 3 2 4 5 1"
./push_swap 3 2 4 5 1 | wc -l

echo "test 3 2 4 1 5"
./push_swap 3 2 4 1 5 | wc -l

echo "test 3 2 5 1 4"
./push_swap 3 2 5 1 4 | wc -l

echo "test 3 2 5 4 1"
./push_swap 3 2 5 4 1 | wc -l

echo "test 3 4 5 2 1"
./push_swap 3 4 5 2 1 | wc -l

echo "test 3 4 5 1 2"
./push_swap 3 4 5 1 2 | wc -l

echo "test 3 4 2 1 5"
./push_swap 3 4 2 1 5 | wc -l

echo "test 3 4 2 5 1"
./push_swap 3 4 2 5 1 | wc -l

echo "test 3 4 1 5 2"
./push_swap 3 4 1 5 2 | wc -l

echo "test 3 4 1 2 5"
./push_swap 3 4 1 2 5 | wc -l

echo "test 3 5 1 2 4"
./push_swap 3 5 1 2 4 | wc -l

echo "test 3 5 1 4 2"
./push_swap 3 5 1 4 2 | wc -l

echo "test 3 5 2 4 1"
./push_swap 3 5 2 4 1 | wc -l

echo "test 3 5 2 1 4"
./push_swap 3 5 2 1 4 | wc -l

echo "test 3 5 4 1 2"
./push_swap 3 5 4 1 2 | wc -l

echo "test 3 5 4 2 1"
./push_swap 3 5 4 2 1 | wc -l

echo "test 4 1 2 3 5"
./push_swap 4 1 2 3 5 | wc -l

echo "test 4 1 2 5 3"
./push_swap 4 1 2 5 3 | wc -l

echo "test 4 1 3 5 2"
./push_swap 4 1 3 5 2 | wc -l

echo "test 4 1 3 2 5"
./push_swap 4 1 3 2 5 | wc -l

echo "test 4 1 5 2 3"
./push_swap 4 1 5 2 3 | wc -l

echo "test 4 1 5 3 2"
./push_swap 4 1 5 3 2 | wc -l

echo "test 4 2 5 3 1"
./push_swap 4 2 5 3 1 | wc -l

echo "test 4 2 5 1 3"
./push_swap 4 2 5 1 3 | wc -l

echo "test 4 2 3 1 5"
./push_swap 4 2 3 1 5 | wc -l

echo "test 4 2 3 5 1"
./push_swap 4 2 3 5 1 | wc -l

echo "test 4 2 1 5 3"
./push_swap 4 2 1 5 3 | wc -l

echo "test 4 2 1 3 5"
./push_swap 4 2 1 3 5 | wc -l

echo "test 4 3 1 2 5"
./push_swap 4 3 1 2 5 | wc -l

echo "test 4 3 1 5 2"
./push_swap 4 3 1 5 2 | wc -l

echo "test 4 3 2 5 1"
./push_swap 4 3 2 5 1 | wc -l

echo "test 4 3 2 1 5"
./push_swap 4 3 2 1 5 | wc -l

echo "test 4 3 5 1 2"
./push_swap 4 3 5 1 2 | wc -l

echo "test 4 3 5 2 1"
./push_swap 4 3 5 2 1 | wc -l

echo "test 4 5 3 2 1"
./push_swap 4 5 3 2 1 | wc -l

echo "test 4 5 3 1 2"
./push_swap 4 5 3 1 2 | wc -l

echo "test 4 5 2 1 3"
./push_swap 4 5 2 1 3 | wc -l

echo "test 4 5 2 3 1"
./push_swap 4 5 2 3 1 | wc -l

echo "test 4 5 1 3 2"
./push_swap 4 5 1 3 2 | wc -l

echo "test 4 5 1 2 3"
./push_swap 4 5 1 2 3 | wc -l

echo "test 5 1 2 3 4"
./push_swap 5 1 2 3 4 | wc -l

echo "test 5 1 2 4 3"
./push_swap 5 1 2 4 3 | wc -l

echo "test 5 1 3 4 2"
./push_swap 5 1 3 4 2 | wc -l

echo "test 5 1 3 2 4"
./push_swap 5 1 3 2 4 | wc -l

echo "test 5 1 4 2 3"
./push_swap 5 1 4 2 3 | wc -l

echo "test 5 1 4 3 2"
./push_swap 5 1 4 3 2 | wc -l

echo "test 5 2 4 3 1"
./push_swap 5 2 4 3 1 | wc -l

echo "test 5 2 4 1 3"
./push_swap 5 2 4 1 3 | wc -l

echo "test 5 2 3 1 4"
./push_swap 5 2 3 1 4 | wc -l

echo "test 5 2 3 4 1"
./push_swap 5 2 3 4 1 | wc -l

echo "test 5 2 1 4 3"
./push_swap 5 2 1 4 3 | wc -l

echo "test 5 2 1 3 4"
./push_swap 5 2 1 3 4 | wc -l

echo "test 5 3 1 2 4"
./push_swap 5 3 1 2 4 | wc -l

echo "test 5 3 1 4 2"
./push_swap 5 3 1 4 2 | wc -l

echo "test 5 3 2 4 1"
./push_swap 5 3 2 4 1 | wc -l

echo "test 5 3 2 1 4"
./push_swap 5 3 2 1 4 | wc -l

echo "test 5 3 4 1 2"
./push_swap 5 3 4 1 2 | wc -l

echo "test 5 3 4 2 1"
./push_swap 5 3 4 2 1 | wc -l

echo "test 5 4 3 2 1"
./push_swap 5 4 3 2 1 | wc -l

echo "test 5 4 3 1 2"
./push_swap 5 4 3 1 2 | wc -l

echo "test 5 4 2 1 3"
./push_swap 5 4 2 1 3 | wc -l

echo "test 5 4 2 3 1"
./push_swap 5 4 2 3 1 | wc -l

echo "test 5 4 1 3 2"
./push_swap 5 4 1 3 2 | wc -l

echo "test 5 4 1 2 3"
./push_swap 5 4 1 2 3 | wc -l

echo "\n\n---- FIN TEST 5 -----\n\n"

echo "Full Error\n"
./push_swap 5 4 1 2 3 8 8

echo "\n"
./push_swap 5 4 1 2 3 8+8

echo "\n"
./push_swap 5 4 1 2 3 8-8

echo "\n"
./push_swap 5 4 1 2 3 - 8

echo "\n"
./push_swap 5 4 1 2 3 + 8

echo "\n"
./push_swap "5 4 1 2 3 8+8"

echo "\n"
./push_swap 5 4 1 2 3 +8 8

echo "\n"
./push_swap "5 4 1 2 3 8-8"

echo "\n"
./push_swap "5 4 1 2 3 - 8"

echo "\n"
./push_swap "5 4 1 2 3 + 8"

echo "\n"
./push_swap "5 4" 1 2 "3 8+8"

echo "\n"
./push_swap "5 4" 1 2 "3 8-8"

echo "\n"
./push_swap "5 4" 1 2 "3 - 8"

echo "\n"
./push_swap "5 4" 1 2 "3 + 8"

echo "\n"
./push_swap "--5 4" 1 2 "3 + 8"

echo "\n"
./push_swap "5- 4" 1 2 "3 + 8"

echo "\n"
./push_swap 0 1 2 18446744073709551615

echo "\n\n---- FIN TEST ERRORS -----\n\n"

echo "Test multi args"

echo "\n"
./push_swap "5 4" 1 2 "3 8"

echo "\n"
./push_swap "5 4" 1 2 "3 -8"

echo "\n"
./push_swap "5 4" 1 2 "3 +8"

echo "\nTest valgrind\n"

echo "\n"
valgrind ./push_swap ""

echo "\n\n\n\n"

echo "\n"
valgrind ./push_swap

echo "\n\n\n\n"

echo "\n"
valgrind ./push_swap "5 4" 1 2 "3 + 8"

echo "\n"
ARG=`ruby -e "puts (0..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | ./checker_linux $ARG
