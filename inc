#!/usr/bin/env bash

function _app_test() {
    echo "Testing app:"
    echo "|__ Command name: "$0
    local -a tasks=( "$(potato_app_get_tasks)" )
    echo "|__ Available tasks"
    printf "   |__ %s\n" ${tasks[@]}
    # This is how you put all the arguments in an array
    local -a args=( "${POTATO_THIS_ARGS[@]}" )
    echo "|__ Args (#${#args[@]})"
    for index in ${!args[@]}; do
        (( arg=index + 1 ))
        # This is how to get the value for an arg:
        echo "   |__ arg $index:" $(potato_get_arg $arg)
    done
}
