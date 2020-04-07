#!/usr/bin/env bash

[ ! -f "$POTATO_CORE" ] && echo "Please get potato first..." && exit || . $POTATO_CORE

potato_load_app

potato_include 'inc'

potato_exec "${@}"
