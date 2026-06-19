# Install script for directory: F:/common/cpps/libs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/cppslibs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("F:/common/cpps/libs/socket/cmake_install.cmake")
  include("F:/common/cpps/libs/mariadb/cmake_install.cmake")
  include("F:/common/cpps/libs/mysql/cmake_install.cmake")
  include("F:/common/cpps/libs/json/cmake_install.cmake")
  include("F:/common/cpps/libs/http/cmake_install.cmake")
  include("F:/common/cpps/libs/base64/cmake_install.cmake")
  include("F:/common/cpps/libs/hashlib/cmake_install.cmake")
  include("F:/common/cpps/libs/encoding/cmake_install.cmake")
  include("F:/common/cpps/libs/logging/cmake_install.cmake")
  include("F:/common/cpps/libs/compress/cmake_install.cmake")
  include("F:/common/cpps/libs/smtp/cmake_install.cmake")
  include("F:/common/cpps/libs/quotedprintable/cmake_install.cmake")
  include("F:/common/cpps/libs/htmlparser/cmake_install.cmake")
  include("F:/common/cpps/libs/uuid/cmake_install.cmake")
  include("F:/common/cpps/libs/winreg/cmake_install.cmake")
  include("F:/common/cpps/libs/rsa/cmake_install.cmake")
  include("F:/common/cpps/libs/csv/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "F:/common/cpps/libs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
