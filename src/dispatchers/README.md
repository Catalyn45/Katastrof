# Dispatchers

Any detection is useless if the user can't see it. To have the flexibility to send the output
in different modes, a generic interface `Dispatcher` from `dispatcher.h` should be implemented
with different types of dispatchers.
For example if a graphical user interface want to be used,
a dispatcher that can communicate with that could be implemented, or if the detections should be
saved into a database some kind of `DatabaseDispatcher` could be implemented to mannipulate the data
in that specific way.
