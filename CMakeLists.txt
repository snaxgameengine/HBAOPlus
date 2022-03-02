cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
cmake_policy(VERSION 3.15)

set(HBAOPLUS_HEADERS
  include/GFSDK_SSAO.h
  src/BuildVersion.h
  src/Common.h
  src/Common_DX12.h
  src/ConstantBuffers.h
  src/d3dx12.h
#  src/d3dx12p.h
  src/InputDepthInfo.h
  src/InputNormalInfo.h
  src/InputViewport.h
  src/MathUtil.h
  src/MatrixView.h
  src/OutputInfo.h
  src/PerfMarkers.h
  src/PipelineStateObjects_DX12.h
  src/ProjectionMatrixInfo.h
  src/RandomTexture.h
  src/Renderer_DX12.h
  src/RenderTargets_DX12.h
  src/Shaders_DX12.h
  src/States_DX12.h
  src/TextureUtil.h
  src/UserTexture.h
  src/Viewports.h
)

set(HBAOPLUS_SOURCE
  src/API.cpp
  src/ConstantBuffers.cpp
  src/PipelineStateObjects_DX12.cpp
  src/ProjectionMatrixInfo.cpp
  src/RandomTexture.cpp
  src/Renderer_DX12.cpp
  src/Shaders_DX12.cpp
  src/States_DX12.cpp
)
	
add_library(HBAOPlus SHARED ${HBAOPLUS_SOURCE} ${HBAOPLUS_HEADERS})

include_directories("include/")

add_compile_definitions(SUPPORT_D3D12=1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /permissive")

target_link_libraries(HBAOPlus "d3d12.lib")

add_custom_command(
    TARGET HBAOPlus 
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:HBAOPlus>
        ${SNAX_BUILD_3RD_DIR}
)