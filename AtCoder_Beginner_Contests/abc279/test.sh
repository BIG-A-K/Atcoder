#!/bin/bash -e

g++ $1 -o tmptmp.out
./tmptmp.out
rm tmptmp.out