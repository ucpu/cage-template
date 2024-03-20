
message(STATUS "----------------------------------------------------------------")
message(STATUS "cage-template")
message(STATUS "----------------------------------------------------------------")

file(GLOB_RECURSE sources "game/*")
add_executable(cage-template ${sources})
target_link_libraries(cage-template cage-simple)
cage_ide_category(cage-template cage-template)
cage_ide_sort_files(cage-template)
cage_ide_working_dir_in_place(cage-template)
cage_ide_startup_project(cage-template)
