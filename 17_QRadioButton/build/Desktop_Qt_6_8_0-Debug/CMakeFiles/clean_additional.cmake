# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "17_QRadioButton_autogen"
  "CMakeFiles/17_QRadioButton_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/17_QRadioButton_autogen.dir/ParseCache.txt"
  )
endif()
