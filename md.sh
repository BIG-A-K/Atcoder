#!/bin/bash -e

mkdir $1
set -eu
for i in `seq 1 5`
    do
    touch 0$i.cpp
    mv 0$i.cpp $1
    touch A.py
    mv A.py $1
    touch B.py
    mv B.py $1
    touch C.py
    mv C.py $1
    touch D.py
    mv D.py $1
    touch E.py
    mv E.py $1
    done
