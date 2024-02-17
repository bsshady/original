cmake_minimum_required(VERSION 3.12)

project(labatwo)

# Установите используемую версию Visual Studio
set(CMAKE_GENERATOR "Visual Studio 16 2019")

# Установите конфигурации сборки
set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

# Добавьте все исходные файлы вашего проекта
set(SOURCES
    Res2/secondLaba.cpp
)

# Создайте исполняемый файл проекта
add_executable(MyProject ${SOURCES})
