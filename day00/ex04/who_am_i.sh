#!/bin/sh
ldapwhoami | sed -n 's/^dn://p'


