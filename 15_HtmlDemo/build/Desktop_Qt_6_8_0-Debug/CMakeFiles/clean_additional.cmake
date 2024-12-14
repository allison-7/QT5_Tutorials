# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "15_HtmlDemo_autogen"
  "CMakeFiles/15_HtmlDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/15_HtmlDemo_autogen.dir/ParseCache.txt"
  )
endif()
