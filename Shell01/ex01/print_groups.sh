#!/bin/bash
groups $FT_USER | awk -F ': ' '{print $2}' | tr ' ' ',' | tr -d '\n'
