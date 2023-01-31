cmake_minimum_required(VERSION 3.20)
project(qt_cmake)

file(GLOB SOURCE "*.cpp" "*.c"  "*.cc")
file(GLOB HEAD "*.h" "*.hpp")
file(GLOB QT "*.qrc" "*.ui")

message("CMAKE_GENERATOR_PLATFORM = ${CMAKE_GENERATOR_PLATFORM}")
message("CMAKE_VS_PLATFORM_NAME = ${CMAKE_VS_PLATFORM_NAME}")
message("CMAKE_OSX_ARCHITECTURES = ${CMAKE_OSX_ARCHITECTURES}")

message("QT = ${QT}")

# set(Qt6_DIR ${CMAKE_PREFIX_PATH}/lib/cmake/Qt6)

# 获取执行程序依赖的QT库文件 
# set(windeployqt "${CMAKE_PREFIX_PATH}/bin/windeployqt.exe")

# # 导入QT的库
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()
set(CMAKE_AUTORCC ON)

# 编译执行程序
message("QT_VERSION_MAJOR= ${QT_VERSION_MAJOR}")
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(${PROJECT_NAME}
        ${SOURCE}
        ${HEAD}
        ${QT}
    )
else()
    add_executable(${PROJECT_NAME}
        ${SOURCE}
        ${HEAD}
        ${QT}
    )
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE
Qt6::Widgets 
)

target_compile_definitions(${PROJECT_NAME} PRIVATE QT_NO_VERSION_TAGGING)

set_target_properties(${PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

set(INSTALL_PATH 
${CMAKE_INSTALL_PREFIX}/${CMAKE_VS_PLATFORM_NAME})


#设置Debug和Release输出路径一致（windows）
set(RUMTIME ${CMAKE_BINARY_DIR}/bin)
set_target_properties(${PROJECT_NAME} 
PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${RUMTIME}
RUNTIME_OUTPUT_DIRECTORY_DEBUG ${RUMTIME}
RUNTIME_OUTPUT_DIRECTORY_RELEASE ${RUMTIME}
)

#[[
install(TARGETS ${PROJECT_NAME} 
CONFIGURATIONS Debug Release
RUNTIME DESTINATION ${INSTALL_PATH}
)
]]

# $<TARGET_FILE:${PROJECT_NAME}> 获取输出文件的全路径
# $<TARGET_FILE_DIR:${PROJECT_NAME}>  获取输出文件所在目录全路径

# J:/Qt/Qt5.14.2/5.14.2/msvc2017_64/bin/windeployqt build\Debug\qt_cmake.exe 
# cmake -S . -B x64 -A x64 -DCMAKE_INSTALL_PREFIX=out -DQT5=J:/Qt/Qt5.14.2/5.14.2/msvc2017_64
# 1 windeployqt直接复制qt库文件到输出路径

# 执行windeployqt 复制依赖的qt库到输出文件目录下
# install( CODE "
# execute_process(COMMAND 
# ${windeployqt} $<TARGET_FILE:${PROJECT_NAME}>
# WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
# )
# "
# )

# # 复制输出的执行程序和依赖的qt库到安装路径
install(DIRECTORY 
$<TARGET_FILE_DIR:${PROJECT_NAME}>
DESTINATION
${INSTALL_PATH}
)

# if(QT_VERSION_MAJOR EQUAL 6)
#     qt_finalize_executable(${PROJECT_NAME})
# endif()