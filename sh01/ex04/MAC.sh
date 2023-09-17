#!/bin/bash
ifconfig | sed -n '/ether /p' | awk -F' ' '{print $2}'
