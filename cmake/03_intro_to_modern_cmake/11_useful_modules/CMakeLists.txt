# ! CMakeDependentOption

include(CMakeDependentOption)
cmake_dependent_option(BUILD_TESTS "Build your tests" ON "VALUE1;VALUE2" OFF)
# sets the option based on the value of VALUE1 & VALUE2

# ! CMakePrintHelpers

include(CMakePrintHelpers)
cmake_print_properties()
cmake_print_variables()

# ! CheckCXXCompilerFlag

include (CheckCXXCompilerFlag)
check_cxx_compiler_flag(-compiler-flag COMPILER_FLAG_SUPPORTED)

# ! try_compile & try_run
# attempts to compile or run code at configure time
try_compile(
    RESULT_VAR
        bindir
    SOURCES
        source.cpp
)

# ! FeatureSummary
# extends default information for packages

include(FeatureSummary)
set_package_properties(OtherPackage PROPERTIES
    URL "www."
    DESCRIPTION "A package"
    PURPOSE "To demonstrate FeatureSummary"
)

# include an option from the package within the feature summary
add_feature_info(WITH_OTHERPACKAGE OtherPackage_CXX_FOUND "OtherPackage (Thread safe FCNs only)")

feature_summary(WHAT ENABLED_FEATURES DISABLED_FEATURES PACKAGES_FOUND)
feature_summary(FILENAME ${CMAKE_CURRENT_BINARY_DIR}/features.log WHAT ALL)

