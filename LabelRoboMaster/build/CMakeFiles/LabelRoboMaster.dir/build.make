# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ouxiang/RM_vision/LabelRoboMaster

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ouxiang/RM_vision/LabelRoboMaster/build

# Include any dependencies generated for this target.
include CMakeFiles/LabelRoboMaster.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LabelRoboMaster.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LabelRoboMaster.dir/flags.make

qrc_resource.o:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_resource.o"
	/home/ouxiang/Qt5.12.11/5.12.11/gcc_64/bin/rcc --name resource --pass 2 --temp /home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles/rcc_object_resource.dir/qrc_resourcetmp.cpp.o --output /home/ouxiang/RM_vision/LabelRoboMaster/build/qrc_resource.o /home/ouxiang/RM_vision/LabelRoboMaster/resource.qrc

CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o: LabelRoboMaster_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/build/LabelRoboMaster_autogen/mocs_compilation.cpp

CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/build/LabelRoboMaster_autogen/mocs_compilation.cpp > CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.i

CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/build/LabelRoboMaster_autogen/mocs_compilation.cpp -o CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.s

CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o: ../drawonpic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/drawonpic.cpp

CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/drawonpic.cpp > CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.i

CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/drawonpic.cpp -o CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.s

CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o: ../labeldialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/labeldialog.cpp

CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/labeldialog.cpp > CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.i

CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/labeldialog.cpp -o CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.s

CMakeFiles/LabelRoboMaster.dir/main.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LabelRoboMaster.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/main.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/main.cpp

CMakeFiles/LabelRoboMaster.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/main.cpp > CMakeFiles/LabelRoboMaster.dir/main.cpp.i

CMakeFiles/LabelRoboMaster.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/main.cpp -o CMakeFiles/LabelRoboMaster.dir/main.cpp.s

CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/mainwindow.cpp

CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/mainwindow.cpp > CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.i

CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/mainwindow.cpp -o CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.s

CMakeFiles/LabelRoboMaster.dir/model.cpp.o: CMakeFiles/LabelRoboMaster.dir/flags.make
CMakeFiles/LabelRoboMaster.dir/model.cpp.o: ../model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LabelRoboMaster.dir/model.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LabelRoboMaster.dir/model.cpp.o -c /home/ouxiang/RM_vision/LabelRoboMaster/model.cpp

CMakeFiles/LabelRoboMaster.dir/model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LabelRoboMaster.dir/model.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ouxiang/RM_vision/LabelRoboMaster/model.cpp > CMakeFiles/LabelRoboMaster.dir/model.cpp.i

CMakeFiles/LabelRoboMaster.dir/model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LabelRoboMaster.dir/model.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ouxiang/RM_vision/LabelRoboMaster/model.cpp -o CMakeFiles/LabelRoboMaster.dir/model.cpp.s

# Object files for target LabelRoboMaster
LabelRoboMaster_OBJECTS = \
"CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o" \
"CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o" \
"CMakeFiles/LabelRoboMaster.dir/main.cpp.o" \
"CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o" \
"CMakeFiles/LabelRoboMaster.dir/model.cpp.o"

# External object files for target LabelRoboMaster
LabelRoboMaster_EXTERNAL_OBJECTS = \
"/home/ouxiang/RM_vision/LabelRoboMaster/build/qrc_resource.o"

LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/LabelRoboMaster_autogen/mocs_compilation.cpp.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/drawonpic.cpp.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/labeldialog.cpp.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/main.cpp.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/mainwindow.cpp.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/model.cpp.o
LabelRoboMaster: qrc_resource.o
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/build.make
LabelRoboMaster: /home/ouxiang/Qt5.12.11/5.12.11/gcc_64/lib/libQt5Svg.so.5.12.11
LabelRoboMaster: /usr/local/lib/libopencv_gapi.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_stitching.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_alphamat.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_aruco.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_barcode.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_bgsegm.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_bioinspired.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_ccalib.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_dnn_objdetect.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_dnn_superres.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_dpm.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_face.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_freetype.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_fuzzy.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_hdf.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_hfs.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_img_hash.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_intensity_transform.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_line_descriptor.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_mcc.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_quality.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_rapid.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_reg.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_rgbd.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_saliency.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_sfm.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_stereo.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_structured_light.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_superres.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_surface_matching.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_tracking.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_videostab.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_wechat_qrcode.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_xfeatures2d.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_xobjdetect.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_xphoto.so.4.5.4
LabelRoboMaster: /home/ouxiang/Qt5.12.11/5.12.11/gcc_64/lib/libQt5Widgets.so.5.12.11
LabelRoboMaster: /home/ouxiang/Qt5.12.11/5.12.11/gcc_64/lib/libQt5Gui.so.5.12.11
LabelRoboMaster: /home/ouxiang/Qt5.12.11/5.12.11/gcc_64/lib/libQt5Core.so.5.12.11
LabelRoboMaster: /usr/local/lib/libopencv_shape.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_highgui.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_datasets.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_plot.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_text.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_ml.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_phase_unwrapping.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_optflow.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_ximgproc.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_video.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_videoio.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_imgcodecs.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_objdetect.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_calib3d.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_dnn.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_features2d.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_flann.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_photo.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_imgproc.so.4.5.4
LabelRoboMaster: /usr/local/lib/libopencv_core.so.4.5.4
LabelRoboMaster: CMakeFiles/LabelRoboMaster.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable LabelRoboMaster"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LabelRoboMaster.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LabelRoboMaster.dir/build: LabelRoboMaster

.PHONY : CMakeFiles/LabelRoboMaster.dir/build

CMakeFiles/LabelRoboMaster.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LabelRoboMaster.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LabelRoboMaster.dir/clean

CMakeFiles/LabelRoboMaster.dir/depend: qrc_resource.o
	cd /home/ouxiang/RM_vision/LabelRoboMaster/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ouxiang/RM_vision/LabelRoboMaster /home/ouxiang/RM_vision/LabelRoboMaster /home/ouxiang/RM_vision/LabelRoboMaster/build /home/ouxiang/RM_vision/LabelRoboMaster/build /home/ouxiang/RM_vision/LabelRoboMaster/build/CMakeFiles/LabelRoboMaster.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LabelRoboMaster.dir/depend

