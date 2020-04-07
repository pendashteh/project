#!/usr/bin/env bash

[ ! -f "$POTATO_CORE" ] && echo "Please get potato first..." && exit || . $POTATO_CORE

potato_load_app

potato_include '_inc'

# Ensure that required structure is in place and variables are initiated
_app_boot

potato_exec "${@}"
