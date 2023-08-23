#!/bin/bash


function main(){
    echo "input push or pull"
    case $1 in
    'push'  )
        echo "git push origin git@github.com:BIG-A-K/Atcoder.git"
        git push git@github.com:BIG-A-K/Atcoder.git
        ;;
    'pull' )
        echo "git pull git@github.com:BIG-A-K/Atcoder.git"
        git pull git@github.com:BIG-A-K/Atcoder.git
        ;;
    esac
}

main $1