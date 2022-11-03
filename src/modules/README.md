# Katastroff Modules

All the modules for the katastroff engine will be added here. A separate folder should be made
with the name of the module, and the inside of it a file named `${module_name}_module.h`. Inside of
this header a class which implements the `Module` interface from `modules.h` should be present.

`interfaces.h` is a common file in which modules can specify a interfaces, for accessing other modules
to use their functionalirt. A reference to the wanted module can be optained calling `core->get_module(MODULE_TYPE)`
where `MODULE_TYPE` is the enum value representing the module id.
