# ! target folders

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET MyFile PROPERTY FOLDER "scripts")

# ! file folders
source_group("src\\directory" REGULAR_EXPRESSION ".*\\.c[ucp]p?")
# 3.8 +
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/base/dir" PREFIX "Header Files" FILES ${FILE_LIST})
