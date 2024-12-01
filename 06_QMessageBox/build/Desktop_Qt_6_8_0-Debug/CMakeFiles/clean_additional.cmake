# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "06_QMessageBox_autogen"
  "CMakeFiles/06_QMessageBox_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/06_QMessageBox_autogen.dir/ParseCache.txt"
  )
endif()
