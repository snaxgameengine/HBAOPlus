static const char* g_CopyDepth_PS_RESOLVE_DEPTH_0_GL =
"#version 150\n"
"struct vec1 {\n"
"	float x;\n"
"};\n"
"struct uvec1 {\n"
"	uint x;\n"
"};\n"
"struct ivec1 {\n"
"	int x;\n"
"};\n"
"layout(std140) uniform;\n"
"uniform GlobalConstantBuffer {\n"
" 	uvec4 GlobalConstantBuffer_0;\n"
"	vec2 GlobalConstantBuffer_1;\n"
"	vec2 GlobalConstantBuffer_2;\n"
"	vec2 GlobalConstantBuffer_3;\n"
"	vec2 GlobalConstantBuffer_4;\n"
"	float GlobalConstantBuffer_5;\n"
"	float GlobalConstantBuffer_6;\n"
"	float GlobalConstantBuffer_7;\n"
"	float GlobalConstantBuffer_8;\n"
"	float GlobalConstantBuffer_9;\n"
"	float GlobalConstantBuffer_10;\n"
"	float GlobalConstantBuffer_11;\n"
"	int GlobalConstantBuffer_12;\n"
"	float GlobalConstantBuffer_13;\n"
"	float GlobalConstantBuffer_14;\n"
"	float GlobalConstantBuffer_15;\n"
"	float GlobalConstantBuffer_16;\n"
"	float GlobalConstantBuffer_17;\n"
"	float GlobalConstantBuffer_18;\n"
"	float GlobalConstantBuffer_19;\n"
"	float GlobalConstantBuffer_20;\n"
"	vec2 GlobalConstantBuffer_21;\n"
"	float GlobalConstantBuffer_22;\n"
"	float GlobalConstantBuffer_23;\n"
"	float GlobalConstantBuffer_24;\n"
"	float GlobalConstantBuffer_25;\n"
"	int GlobalConstantBuffer_26;\n"
"	vec4 GlobalConstantBuffer_27[4];\n"
"	float GlobalConstantBuffer_28;\n"
"	float GlobalConstantBuffer_29;\n"
"};\n"
"uniform sampler2D g_t0;\n"
"vec4 Input0;\n"
"out  vec4 PixOutput0;\n"
"#define Output0 PixOutput0\n"
"vec4 Temp[1];\n"
"ivec4 Temp_int[1];\n"
"uvec4 Temp_uint[1];\n"
"void main()\n"
"{\n"
"    Input0.xy = gl_FragCoord.xy;\n"
"    Temp[0].xy = vec4(Input0.xyxx + GlobalConstantBuffer_21.xyxx.xyxx).xy;\n"
"    Temp_int[0].xy = ivec4(Temp[0].xyxx).xy;\n"
"    Temp[0].zw = vec4(vec4(0.000000, 0.000000, 0.000000, 0.000000)).zw;\n"
"    Temp[0].x = texelFetch(g_t0, ivec2((Temp_int[0]).xy), 0).x;\n"
"    Output0.x = vec4(Temp[0].x).x;\n"
"    return;\n"
"}\n"
;
static const char* g_CopyDepth_PS_RESOLVE_DEPTH_1_GL =
"#version 150\n"
"struct vec1 {\n"
"	float x;\n"
"};\n"
"struct uvec1 {\n"
"	uint x;\n"
"};\n"
"struct ivec1 {\n"
"	int x;\n"
"};\n"
"layout(std140) uniform;\n"
"uniform GlobalConstantBuffer {\n"
" 	uvec4 GlobalConstantBuffer_0;\n"
"	vec2 GlobalConstantBuffer_1;\n"
"	vec2 GlobalConstantBuffer_2;\n"
"	vec2 GlobalConstantBuffer_3;\n"
"	vec2 GlobalConstantBuffer_4;\n"
"	float GlobalConstantBuffer_5;\n"
"	float GlobalConstantBuffer_6;\n"
"	float GlobalConstantBuffer_7;\n"
"	float GlobalConstantBuffer_8;\n"
"	float GlobalConstantBuffer_9;\n"
"	float GlobalConstantBuffer_10;\n"
"	float GlobalConstantBuffer_11;\n"
"	int GlobalConstantBuffer_12;\n"
"	float GlobalConstantBuffer_13;\n"
"	float GlobalConstantBuffer_14;\n"
"	float GlobalConstantBuffer_15;\n"
"	float GlobalConstantBuffer_16;\n"
"	float GlobalConstantBuffer_17;\n"
"	float GlobalConstantBuffer_18;\n"
"	float GlobalConstantBuffer_19;\n"
"	float GlobalConstantBuffer_20;\n"
"	vec2 GlobalConstantBuffer_21;\n"
"	float GlobalConstantBuffer_22;\n"
"	float GlobalConstantBuffer_23;\n"
"	float GlobalConstantBuffer_24;\n"
"	float GlobalConstantBuffer_25;\n"
"	int GlobalConstantBuffer_26;\n"
"	vec4 GlobalConstantBuffer_27[4];\n"
"	float GlobalConstantBuffer_28;\n"
"	float GlobalConstantBuffer_29;\n"
"};\n"
"uniform sampler2DMS g_t0;\n"
"vec4 Input0;\n"
"out  vec4 PixOutput0;\n"
"#define Output0 PixOutput0\n"
"vec4 Temp[1];\n"
"ivec4 Temp_int[1];\n"
"uvec4 Temp_uint[1];\n"
"void main()\n"
"{\n"
"    Input0.xy = gl_FragCoord.xy;\n"
"    Temp[0].xy = vec4(Input0.xyxx + GlobalConstantBuffer_21.xyxx.xyxx).xy;\n"
"    Temp_int[0].xy = ivec4(Temp[0].xyxx).xy;\n"
"    Temp[0].zw = vec4(vec4(0.000000, 0.000000, 0.000000, 0.000000)).zw;\n"
"    Temp[0].x = texelFetch(g_t0, ivec2((Temp_int[0]).xy), 0).x;\n"
"    Output0.x = vec4(Temp[0].x).x;\n"
"    return;\n"
"}\n"
;

namespace Generated
{
    void CopyDepth_PS::Create(DevicePointer Device)
    {
        m_Shader[ShaderPermutations::RESOLVE_DEPTH_0].Create(Device, g_CopyDepth_PS_RESOLVE_DEPTH_0_GL, sizeof(g_CopyDepth_PS_RESOLVE_DEPTH_0_GL));
        m_Shader[ShaderPermutations::RESOLVE_DEPTH_1].Create(Device, g_CopyDepth_PS_RESOLVE_DEPTH_1_GL, sizeof(g_CopyDepth_PS_RESOLVE_DEPTH_1_GL));
    }

    void CopyDepth_PS::Release(DevicePointer Device)
    {
        m_Shader[ShaderPermutations::RESOLVE_DEPTH_0].Release(Device);
        m_Shader[ShaderPermutations::RESOLVE_DEPTH_1].Release(Device);
    }
}