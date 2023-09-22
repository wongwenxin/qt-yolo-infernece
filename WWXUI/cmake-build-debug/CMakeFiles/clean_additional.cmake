# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/WWXUI_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/WWXUI_autogen.dir/ParseCache.txt"
  "WWXUI_autogen"
  )
endif()
