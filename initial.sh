#!/bin/bash

# Initialize environment.

cp /opt/mssql/bin/palrun palrun.elf
cp /opt/mssql/lib/*.so* .
cp /opt/mssql/lib/*.sfp .
strip --remove-section=.config palrun.elf
