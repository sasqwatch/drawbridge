Some notes
==========

- The NT user mode kernel sits above a thin layer called DRTL (Drawbridge real-time library), presumably to reduce the trusted computing base.

- A PAL dumper ships with SQL Server on Linux.

- /var/opt/mssql/data/xtp/ is part of the PE loader whitelist, and is declared as such in sqlservr.sfp. Place the 3rd party executables that you want to run inside Drawbridge in that directory.

