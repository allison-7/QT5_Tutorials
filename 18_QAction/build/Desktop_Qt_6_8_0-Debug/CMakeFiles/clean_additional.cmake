# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "18_QAction_autogen"
  "CMakeFiles/18_QAction_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/18_QAction_autogen.dir/ParseCache.txt"
  )
endif()
