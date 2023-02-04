# ! local
set(MY_VARIABLE "value")
set(VARIABLE_2 ${MY_VARIABLE})

set(MY_LIST "one" "two")
set(LIST_REAL "one;two")

set(MY_PATH "C:/A path with spaces/file.txt")
set(ERROR_PATH ${MY_PATH}) # error: could produce an error with the spaces as not wrapped in quotes
set(NEW_PATH "${MY_PATH}")

# ! cache
set(MY_CACHE_VARIABLE "VALUE" CACHE STRING "Description") # won't replace an existing value

set(MY_CACHE_VARIABLE "VALUE" CACHE STRING "" FORCE) # will always set this variable
mark_as_advanced(MY_CACHE_VARIABLE) # stops the variable showing up in list of commands

set(MY_CACHE_VARIABLE "VALUE" CACHE INTERNAL "") # equivalent to last two lines, but type is always string

set(MY_OPTION "Can set from command line" OFF)

# ! env
# often recommended to avoid using these as much as possible
set(ENV{MY_ENV_VAR} "VALUE")
set(ENV{NEW_ENV_VAR} "$ENV{MY_ENV_VAR}")

# ! properties
# variables attached to an object
set_property(
    TARGET TargetName
    PROPERTY CXX_STANDARD 11
)
set_target_properties(
    TargetName PROPERTIES
    CXX_STANDARD 11
)

get_property(ResultVar TARGET TargetName PROPERTY CXX_STANDARD)
