# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "26_QNotepad_autogen"
  "CMakeFiles/26_QNotepad_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/26_QNotepad_autogen.dir/ParseCache.txt"
  )
endif()
