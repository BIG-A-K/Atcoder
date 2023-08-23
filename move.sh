#! /bin/bash

function main(){
    find $1 -name \*.out -delete
    find $1 -name Makefile -delete
    find $1 -empty -delete
    mv ~/Atcoder/$1 ~/Atcoder/AtCoder_Beginner_Contests
}

main $1
