# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "16_QCheckBox_autogen"
  "CMakeFiles/16_QCheckBox_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/16_QCheckBox_autogen.dir/ParseCache.txt"
  )
endif()
