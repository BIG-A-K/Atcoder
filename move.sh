#! /bin/bash

function main(){
    find $1 -empty -delete
    find $1 -name \*.out -delete
    mv ~/Atcoder/$1 ~/Atcoder/AtCoder_Beginner_Contests
}

main $1
