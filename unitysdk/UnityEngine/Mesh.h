#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/GfxBufferTarget.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/IndexFormat.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttribute.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHINDICES_OFFSET UNITYSDK_OFFSET(0x1D116C30)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D116C20)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESH_OFFSET UNITYSDK_OFFSET(0x1D116A50)
#define UNITYENGINE_MESH_CHECKINDICESARRAYRANGE_OFFSET UNITYSDK_OFFSET(0x1D1174F0)
#define UNITYENGINE_MESH_CLEARIMPL_OFFSET UNITYSDK_OFFSET(0x1D112CD0)
#define UNITYENGINE_MESH_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1D118FB0)
#define UNITYENGINE_MESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D118FA0)
#define UNITYENGINE_MESH_COMBINEMESHESIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D40)
#define UNITYENGINE_MESH_COMBINEMESHES_1_OFFSET UNITYSDK_OFFSET(0x1D1195D0)
#define UNITYENGINE_MESH_COMBINEMESHES_OFFSET UNITYSDK_OFFSET(0x1D1195B0)
#define UNITYENGINE_MESH_DEFAULTDIMENSIONFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D112DB0)
#define UNITYENGINE_MESH_FROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1D1129D0)
#define UNITYENGINE_MESH_GETALLOCARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1D112B00)
#define UNITYENGINE_MESH_GETARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1D112B10)
#define UNITYENGINE_MESH_GETBASEVERTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A20)
#define UNITYENGINE_MESH_GETBASEVERTEX_OFFSET UNITYSDK_OFFSET(0x1D117490)
#define UNITYENGINE_MESH_GETBLENDSHAPEINDEX_OFFSET UNITYSDK_OFFSET(0x1D112B90)
#define UNITYENGINE_MESH_GETBLENDSHAPENAME_OFFSET UNITYSDK_OFFSET(0x1D112B80)
#define UNITYENGINE_MESH_GETBONEWEIGHTSIMPL_OFFSET UNITYSDK_OFFSET(0x1D112BE0)
#define UNITYENGINE_MESH_GETBONEWEIGHTSNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x1D112BF0)
#define UNITYENGINE_MESH_GETBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1D118E50)
#define UNITYENGINE_MESH_GETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x1D115C00)
#define UNITYENGINE_MESH_GETCOLORS_OFFSET UNITYSDK_OFFSET(0x1D1156C0)
#define UNITYENGINE_MESH_GETFIRSTVERTEX_OFFSET UNITYSDK_OFFSET(0x1D1195F0)
#define UNITYENGINE_MESH_GETINDEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D112BB0)
#define UNITYENGINE_MESH_GETINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0x1D119410)
#define UNITYENGINE_MESH_GETINDEXCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A10)
#define UNITYENGINE_MESH_GETINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D1173D0)
#define UNITYENGINE_MESH_GETINDEXSTARTIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A00)
#define UNITYENGINE_MESH_GETINDEXSTART_OFFSET UNITYSDK_OFFSET(0x1D117430)
#define UNITYENGINE_MESH_GETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A40)
#define UNITYENGINE_MESH_GETINDICESNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A70)
#define UNITYENGINE_MESH_GETINDICES_1_OFFSET UNITYSDK_OFFSET(0x1D1171F0)
#define UNITYENGINE_MESH_GETINDICES_2_OFFSET UNITYSDK_OFFSET(0x1D117240)
#define UNITYENGINE_MESH_GETINDICES_3_OFFSET UNITYSDK_OFFSET(0x1D117250)
#define UNITYENGINE_MESH_GETINDICES_OFFSET UNITYSDK_OFFSET(0x1D1171A0)
#define UNITYENGINE_MESH_GETNORMALS_OFFSET UNITYSDK_OFFSET(0x1D114B00)
#define UNITYENGINE_MESH_GETTOPOLOGYIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D30)
#define UNITYENGINE_MESH_GETTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1D1194D0)
#define UNITYENGINE_MESH_GETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A30)
#define UNITYENGINE_MESH_GETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1D117150)
#define UNITYENGINE_MESH_GETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D117100)
#define UNITYENGINE_MESH_GETUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D112D60)
#define UNITYENGINE_MESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0x1D116930)
#define UNITYENGINE_MESH_GETUVS_2_OFFSET UNITYSDK_OFFSET(0x1D116950)
#define UNITYENGINE_MESH_GETUVS_OFFSET UNITYSDK_OFFSET(0x1D116910)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEDIMENSION_OFFSET UNITYSDK_OFFSET(0x1D112AA0)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEFORMAT_OFFSET UNITYSDK_OFFSET(0x1D112AB0)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D112AD0)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTESTREAM_OFFSET UNITYSDK_OFFSET(0x1D112AC0)
#define UNITYENGINE_MESH_GETVERTEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1D112BA0)
#define UNITYENGINE_MESH_GETVERTEXBUFFERSTRIDE_OFFSET UNITYSDK_OFFSET(0x1D112B20)
#define UNITYENGINE_MESH_GETVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x1D119390)
#define UNITYENGINE_MESH_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1D114450)
#define UNITYENGINE_MESH_GET_BLENDSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1D112B70)
#define UNITYENGINE_MESH_GET_BONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1D118F90)
#define UNITYENGINE_MESH_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112CA0)
#define UNITYENGINE_MESH_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1D112C50)
#define UNITYENGINE_MESH_GET_CANACCESS_OFFSET UNITYSDK_OFFSET(0x1D112C10)
#define UNITYENGINE_MESH_GET_COLORS32_OFFSET UNITYSDK_OFFSET(0x1D114270)
#define UNITYENGINE_MESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1D114090)
#define UNITYENGINE_MESH_GET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1D112B50)
#define UNITYENGINE_MESH_GET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x1D1129E0)
#define UNITYENGINE_MESH_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1D112C00)
#define UNITYENGINE_MESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1D113410)
#define UNITYENGINE_MESH_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D112C30)
#define UNITYENGINE_MESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1D1135F0)
#define UNITYENGINE_MESH_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D116C40)
#define UNITYENGINE_MESH_GET_UV2_OFFSET UNITYSDK_OFFSET(0x1D1139B0)
#define UNITYENGINE_MESH_GET_UV3_OFFSET UNITYSDK_OFFSET(0x1D113B90)
#define UNITYENGINE_MESH_GET_UV4_OFFSET UNITYSDK_OFFSET(0x1D113D70)
#define UNITYENGINE_MESH_GET_UV5_OFFSET UNITYSDK_OFFSET(0x1D113E10)
#define UNITYENGINE_MESH_GET_UV6_OFFSET UNITYSDK_OFFSET(0x1D113EB0)
#define UNITYENGINE_MESH_GET_UV7_OFFSET UNITYSDK_OFFSET(0x1D113F50)
#define UNITYENGINE_MESH_GET_UV8_OFFSET UNITYSDK_OFFSET(0x1D113FF0)
#define UNITYENGINE_MESH_GET_UV_OFFSET UNITYSDK_OFFSET(0x1D1137D0)
#define UNITYENGINE_MESH_GET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1D112B30)
#define UNITYENGINE_MESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D112C20)
#define UNITYENGINE_MESH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1D113240)
#define UNITYENGINE_MESH_HASBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1D112BD0)
#define UNITYENGINE_MESH_HASVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D112A90)
#define UNITYENGINE_MESH_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1129A0)
#define UNITYENGINE_MESH_MARKDYNAMICIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D10)
#define UNITYENGINE_MESH_MARKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D119250)
#define UNITYENGINE_MESH_OPTIMIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D50)
#define UNITYENGINE_MESH_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1D1192C0)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D112A80)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSINDICES_OFFSET UNITYSDK_OFFSET(0x1D116970)
#define UNITYENGINE_MESH_RECALCULATEBOUNDSIMPL_OFFSET UNITYSDK_OFFSET(0x1D112CE0)
#define UNITYENGINE_MESH_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D118FC0)
#define UNITYENGINE_MESH_RECALCULATENORMALSIMPL_OFFSET UNITYSDK_OFFSET(0x1D112CF0)
#define UNITYENGINE_MESH_RECALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x1D119090)
#define UNITYENGINE_MESH_RECALCULATETANGENTSIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D00)
#define UNITYENGINE_MESH_RECALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1D119160)
#define UNITYENGINE_MESH_SETARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1D112AE0)
#define UNITYENGINE_MESH_SETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x1D1157D0)
#define UNITYENGINE_MESH_SETCOLORS_2_OFFSET UNITYSDK_OFFSET(0x1D115830)
#define UNITYENGINE_MESH_SETCOLORS_3_OFFSET UNITYSDK_OFFSET(0x1D115AA0)
#define UNITYENGINE_MESH_SETCOLORS_4_OFFSET UNITYSDK_OFFSET(0x1D115D30)
#define UNITYENGINE_MESH_SETCOLORS_5_OFFSET UNITYSDK_OFFSET(0x1D115DA0)
#define UNITYENGINE_MESH_SETCOLORS_6_OFFSET UNITYSDK_OFFSET(0x1D115E00)
#define UNITYENGINE_MESH_SETCOLORS_7_OFFSET UNITYSDK_OFFSET(0x1D115E80)
#define UNITYENGINE_MESH_SETCOLORS_8_OFFSET UNITYSDK_OFFSET(0x1D115EF0)
#define UNITYENGINE_MESH_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x1D115760)
#define UNITYENGINE_MESH_SETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A50)
#define UNITYENGINE_MESH_SETINDICESNATIVEARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1D112A60)
#define UNITYENGINE_MESH_SETINDICES_1_OFFSET UNITYSDK_OFFSET(0x1D1188D0)
#define UNITYENGINE_MESH_SETINDICES_2_OFFSET UNITYSDK_OFFSET(0x1D118640)
#define UNITYENGINE_MESH_SETINDICES_3_OFFSET UNITYSDK_OFFSET(0x1D118B60)
#define UNITYENGINE_MESH_SETINDICES_4_OFFSET UNITYSDK_OFFSET(0x1D118CF0)
#define UNITYENGINE_MESH_SETINDICES_5_OFFSET UNITYSDK_OFFSET(0x1D118DA0)
#define UNITYENGINE_MESH_SETINDICES_OFFSET UNITYSDK_OFFSET(0x1D1183C0)
#define UNITYENGINE_MESH_SETNATIVEARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1D112AF0)
#define UNITYENGINE_MESH_SETNORMALS_1_OFFSET UNITYSDK_OFFSET(0x1D114C10)
#define UNITYENGINE_MESH_SETNORMALS_2_OFFSET UNITYSDK_OFFSET(0x1D114C70)
#define UNITYENGINE_MESH_SETNORMALS_3_OFFSET UNITYSDK_OFFSET(0x1D114CF0)
#define UNITYENGINE_MESH_SETNORMALS_4_OFFSET UNITYSDK_OFFSET(0x1D114D60)
#define UNITYENGINE_MESH_SETNORMALS_5_OFFSET UNITYSDK_OFFSET(0x1D114FD0)
#define UNITYENGINE_MESH_SETNORMALS_OFFSET UNITYSDK_OFFSET(0x1D114BA0)
#define UNITYENGINE_MESH_SETSIZEDARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D112E20)
#define UNITYENGINE_MESH_SETSIZEDNATIVEARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1D113040)
#define UNITYENGINE_MESH_SETTANGENTS_1_OFFSET UNITYSDK_OFFSET(0x1D1151A0)
#define UNITYENGINE_MESH_SETTANGENTS_2_OFFSET UNITYSDK_OFFSET(0x1D115200)
#define UNITYENGINE_MESH_SETTANGENTS_3_OFFSET UNITYSDK_OFFSET(0x1D115280)
#define UNITYENGINE_MESH_SETTANGENTS_4_OFFSET UNITYSDK_OFFSET(0x1D1152F0)
#define UNITYENGINE_MESH_SETTANGENTS_5_OFFSET UNITYSDK_OFFSET(0x1D115560)
#define UNITYENGINE_MESH_SETTANGENTS_OFFSET UNITYSDK_OFFSET(0x1D115130)
#define UNITYENGINE_MESH_SETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x1D117070)
#define UNITYENGINE_MESH_SETTRIANGLES_10_OFFSET UNITYSDK_OFFSET(0x1D118300)
#define UNITYENGINE_MESH_SETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1D117B70)
#define UNITYENGINE_MESH_SETTRIANGLES_2_OFFSET UNITYSDK_OFFSET(0x1D1178F0)
#define UNITYENGINE_MESH_SETTRIANGLES_3_OFFSET UNITYSDK_OFFSET(0x1D117DF0)
#define UNITYENGINE_MESH_SETTRIANGLES_4_OFFSET UNITYSDK_OFFSET(0x1D117F70)
#define UNITYENGINE_MESH_SETTRIANGLES_5_OFFSET UNITYSDK_OFFSET(0x1D1180C0)
#define UNITYENGINE_MESH_SETTRIANGLES_6_OFFSET UNITYSDK_OFFSET(0x1D118010)
#define UNITYENGINE_MESH_SETTRIANGLES_7_OFFSET UNITYSDK_OFFSET(0x1D118160)
#define UNITYENGINE_MESH_SETTRIANGLES_8_OFFSET UNITYSDK_OFFSET(0x1D118220)
#define UNITYENGINE_MESH_SETTRIANGLES_9_OFFSET UNITYSDK_OFFSET(0x1D118240)
#define UNITYENGINE_MESH_SETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D117670)
#define UNITYENGINE_MESH_SETUVSIMPL_OFFSET UNITYSDK_OFFSET(0x1D116280)
#define UNITYENGINE_MESH_SETUVS_10_OFFSET UNITYSDK_OFFSET(0x1D116670)
#define UNITYENGINE_MESH_SETUVS_11_OFFSET UNITYSDK_OFFSET(0x1D1168B0)
#define UNITYENGINE_MESH_SETUVS_12_OFFSET UNITYSDK_OFFSET(0x1D1168E0)
#define UNITYENGINE_MESH_SETUVS_1_OFFSET UNITYSDK_OFFSET(0x1D1160E0)
#define UNITYENGINE_MESH_SETUVS_2_OFFSET UNITYSDK_OFFSET(0x1D116160)
#define UNITYENGINE_MESH_SETUVS_3_OFFSET UNITYSDK_OFFSET(0x1D1160A0)
#define UNITYENGINE_MESH_SETUVS_4_OFFSET UNITYSDK_OFFSET(0x1D116120)
#define UNITYENGINE_MESH_SETUVS_5_OFFSET UNITYSDK_OFFSET(0x1D1161A0)
#define UNITYENGINE_MESH_SETUVS_6_OFFSET UNITYSDK_OFFSET(0x1D1161E0)
#define UNITYENGINE_MESH_SETUVS_7_OFFSET UNITYSDK_OFFSET(0x1D116240)
#define UNITYENGINE_MESH_SETUVS_8_OFFSET UNITYSDK_OFFSET(0x1D116460)
#define UNITYENGINE_MESH_SETUVS_9_OFFSET UNITYSDK_OFFSET(0x1D1166A0)
#define UNITYENGINE_MESH_SETUVS_OFFSET UNITYSDK_OFFSET(0x1D116060)
#define UNITYENGINE_MESH_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1D114550)
#define UNITYENGINE_MESH_SETVERTICES_2_OFFSET UNITYSDK_OFFSET(0x1D1145B0)
#define UNITYENGINE_MESH_SETVERTICES_3_OFFSET UNITYSDK_OFFSET(0x1D114620)
#define UNITYENGINE_MESH_SETVERTICES_4_OFFSET UNITYSDK_OFFSET(0x1D1149A0)
#define UNITYENGINE_MESH_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x1D1144F0)
#define UNITYENGINE_MESH_SET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D112CC0)
#define UNITYENGINE_MESH_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1D112CB0)
#define UNITYENGINE_MESH_SET_COLORS32_OFFSET UNITYSDK_OFFSET(0x1D114310)
#define UNITYENGINE_MESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1D114130)
#define UNITYENGINE_MESH_SET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1D112B60)
#define UNITYENGINE_MESH_SET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x1D1129F0)
#define UNITYENGINE_MESH_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1D1134B0)
#define UNITYENGINE_MESH_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D112C40)
#define UNITYENGINE_MESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1D113690)
#define UNITYENGINE_MESH_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1D116D50)
#define UNITYENGINE_MESH_SET_UV2_OFFSET UNITYSDK_OFFSET(0x1D113A50)
#define UNITYENGINE_MESH_SET_UV3_OFFSET UNITYSDK_OFFSET(0x1D113C30)
#define UNITYENGINE_MESH_SET_UV_OFFSET UNITYSDK_OFFSET(0x1D113870)
#define UNITYENGINE_MESH_SET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1D112B40)
#define UNITYENGINE_MESH_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1D1132D0)
#define UNITYENGINE_MESH_UPLOADMESHDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1D112D20)
#define UNITYENGINE_MESH_UPLOADMESHDATA_OFFSET UNITYSDK_OFFSET(0x1D119280)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1D112BC0)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1D119460)
#define UNITYENGINE_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1129B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Mesh_TypeDefinitionIndex = 4181;

	class Mesh : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_INTERNAL_CREATE_OFFSET))(a1);
		}

		static ::UnityEngine::Mesh* FromInstanceID(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_FROMINSTANCEID_OFFSET))(a1);
		}

		::UnityEngine::Rendering::IndexFormat get_indexFormat()
		{
			return ((::UnityEngine::Rendering::IndexFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_INDEXFORMAT_OFFSET))(this);
		}

		::System::Void set_indexFormat(::UnityEngine::Rendering::IndexFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IndexFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_INDEXFORMAT_OFFSET))(this, a1);
		}

		::System::UInt32 GetIndexStartImpl(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXSTARTIMPL_OFFSET))(this, a1);
		}

		::System::UInt32 GetIndexCountImpl(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::UInt32 GetBaseVertexImpl(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBASEVERTEXIMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* GetTrianglesImpl(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLESIMPL_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* GetIndicesImpl(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICESIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetIndicesImpl(::System::Int32 a1, ::UnityEngine::MeshTopology a2, ::UnityEngine::Rendering::IndexFormat a3, ::System::Array* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICESIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetIndicesNativeArrayImpl(::System::Int32 a1, ::UnityEngine::MeshTopology a2, ::UnityEngine::Rendering::IndexFormat a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICESNATIVEARRAYIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void GetIndicesNonAllocImpl(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICESNONALLOCIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_PRINTERRORCANTACCESSCHANNEL_OFFSET))(this, a1);
		}

		::System::Boolean HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_HASVERTEXATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Int32 GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTEDIMENSION_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::UnityEngine::Rendering::VertexAttributeFormat(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTEFORMAT_OFFSET))(this, a1);
		}

		::System::Int32 GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTESTREAM_OFFSET))(this, a1);
		}

		::System::Int32 GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTEOFFSET_OFFSET))(this, a1);
		}

		::System::Void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::Array* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETARRAYFORCHANNELIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNATIVEARRAYFORCHANNELIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3)
		{
			return ((::System::Array*(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETALLOCARRAYFROMCHANNELIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::Array* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETARRAYFROMCHANNELIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GetVertexBufferStride(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFERSTRIDE_OFFSET))(this, a1);
		}

		::UnityEngine::GfxBufferTarget get_vertexBufferTarget()
		{
			return ((::UnityEngine::GfxBufferTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_VERTEXBUFFERTARGET_OFFSET))(this);
		}

		::System::Void set_vertexBufferTarget(::UnityEngine::GfxBufferTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GfxBufferTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_VERTEXBUFFERTARGET_OFFSET))(this, a1);
		}

		::UnityEngine::GfxBufferTarget get_indexBufferTarget()
		{
			return ((::UnityEngine::GfxBufferTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_INDEXBUFFERTARGET_OFFSET))(this);
		}

		::System::Void set_indexBufferTarget(::UnityEngine::GfxBufferTarget a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GfxBufferTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_INDEXBUFFERTARGET_OFFSET))(this, a1);
		}

		::System::Int32 get_blendShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BLENDSHAPECOUNT_OFFSET))(this);
		}

		::System::String* GetBlendShapeName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBLENDSHAPENAME_OFFSET))(this, a1);
		}

		::System::Int32 GetBlendShapeIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBLENDSHAPEINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* GetVertexBufferImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFERIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* GetIndexBufferImpl()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXBUFFERIMPL_OFFSET))(this);
		}

		::System::Boolean UseOptimizedVertexDataImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATAIMPL_OFFSET))(this);
		}

		::System::Boolean HasBoneWeights()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_HASBONEWEIGHTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::BoneWeight>* GetBoneWeightsImpl()
		{
			return ((::Il2CppArray<::UnityEngine::BoneWeight>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBONEWEIGHTSIMPL_OFFSET))(this);
		}

		::System::Void GetBoneWeightsNonAllocImpl(::Il2CppArray<::UnityEngine::BoneWeight>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoneWeight>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBONEWEIGHTSNONALLOCIMPL_OFFSET))(this, a1);
		}

		::System::Boolean get_isReadable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_ISREADABLE_OFFSET))(this);
		}

		::System::Boolean get_canAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_CANACCESS_OFFSET))(this);
		}

		::System::Int32 get_vertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 get_subMeshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_SUBMESHCOUNT_OFFSET))(this);
		}

		::System::Void set_subMeshCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_SUBMESHCOUNT_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_bounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_BOUNDS_OFFSET))(this, a1);
		}

		::System::Void ClearImpl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CLEARIMPL_OFFSET))(this, a1);
		}

		::System::Void RecalculateBoundsImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATEBOUNDSIMPL_OFFSET))(this);
		}

		::System::Void RecalculateNormalsImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATENORMALSIMPL_OFFSET))(this);
		}

		::System::Void RecalculateTangentsImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATETANGENTSIMPL_OFFSET))(this);
		}

		::System::Void MarkDynamicImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_MARKDYNAMICIMPL_OFFSET))(this);
		}

		::System::Void UploadMeshDataImpl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_UPLOADMESHDATAIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::MeshTopology GetTopologyImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTOPOLOGYIMPL_OFFSET))(this, a1);
		}

		::System::Void CombineMeshesImpl(::Il2CppArray<::UnityEngine::CombineInstance>* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHESIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OptimizeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_OPTIMIZEIMPL_OFFSET))(this);
		}

		::UnityEngine::Rendering::VertexAttribute GetUVChannel(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::VertexAttribute(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVCHANNEL_OFFSET))(this, a1);
		}

		static ::System::Int32 DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_DEFAULTDIMENSIONFORCHANNEL_OFFSET))(a1);
		}

		::System::Void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::Array* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETSIZEDARRAYFORCHANNEL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::IntPtr a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETSIZEDNATIVEARRAYFORCHANNEL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_vertices(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_VERTICES_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_normals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_NORMALS_OFFSET))(this);
		}

		::System::Void set_normals(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_NORMALS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_tangents()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_tangents(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_TANGENTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV_OFFSET))(this);
		}

		::System::Void set_uv(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv2()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV2_OFFSET))(this);
		}

		::System::Void set_uv2(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV2_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv3()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV3_OFFSET))(this);
		}

		::System::Void set_uv3(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV3_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv4()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV4_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv5()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV5_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv6()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV6_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv7()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV7_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv8()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV8_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color>* get_colors()
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_COLORS_OFFSET))(this);
		}

		::System::Void set_colors(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_COLORS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color32>* get_colors32()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_COLORS32_OFFSET))(this);
		}

		::System::Void set_colors32(::Il2CppArray<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_COLORS32_OFFSET))(this, a1);
		}

		::System::Void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTICES_OFFSET))(this, a1);
		}

		::System::Void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_OFFSET))(this, a1);
		}

		::System::Void SetVertices_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVertices_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_2_OFFSET))(this, a1);
		}

		::System::Void SetVertices_3(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_3_OFFSET))(this, a1);
		}

		::System::Void SetVertices_4(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETNORMALS_OFFSET))(this, a1);
		}

		::System::Void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_OFFSET))(this, a1);
		}

		::System::Void SetNormals_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNormals_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_2_OFFSET))(this, a1);
		}

		::System::Void SetNormals_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNormals_4(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_4_OFFSET))(this, a1);
		}

		::System::Void SetNormals_5(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_OFFSET))(this, a1);
		}

		::System::Void SetTangents_1(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTangents_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_2_OFFSET))(this, a1);
		}

		::System::Void SetTangents_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTangents_4(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_4_OFFSET))(this, a1);
		}

		::System::Void SetTangents_5(::Il2CppArray<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETCOLORS_OFFSET))(this, a1);
		}

		::System::Void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_OFFSET))(this, a1);
		}

		::System::Void SetColors_1(::System::Collections::Generic::List_1<::UnityEngine::Color>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetColors_2(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_2_OFFSET))(this, a1);
		}

		::System::Void SetColors_3(::Il2CppArray<::UnityEngine::Color>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetColors_1(::System::Collections::Generic::List_1<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETCOLORS_1_OFFSET))(this, a1);
		}

		::System::Void SetColors_4(::System::Collections::Generic::List_1<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_4_OFFSET))(this, a1);
		}

		::System::Void SetColors_5(::System::Collections::Generic::List_1<::UnityEngine::Color32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetColors_6(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_6_OFFSET))(this, a1);
		}

		::System::Void SetColors_7(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetColors_8(::Il2CppArray<::UnityEngine::Color32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetUVs(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUVs_4(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUVs_5(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUVs_6(::System::Int32 a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_6_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_7(::System::Int32 a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUvsImpl(::System::Int32 a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVSIMPL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetUVs_8(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_8_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_9(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_9_OFFSET))(this, a1, a2);
		}

		::System::Void SetUVs_10(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_10_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUVs_11(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_11_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetUVs_12(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_12_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetUVs(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_OFFSET))(this, a1, a2);
		}

		::System::Void GetUVs_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetUVs_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_2_OFFSET))(this, a1, a2);
		}

		::System::Void PrintErrorCantAccessIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_PRINTERRORCANTACCESSINDICES_OFFSET))(this);
		}

		::System::Boolean CheckCanAccessSubmesh(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESH_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckCanAccessSubmeshTriangles(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESHTRIANGLES_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanAccessSubmeshIndices(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESHINDICES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_triangles()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_triangles(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_TRIANGLES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* GetTriangles(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* GetTriangles_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLES_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* GetIndices(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* GetIndices_1(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetIndices_2(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetIndices_3(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_3_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetIndexStart(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXSTART_OFFSET))(this, a1);
		}

		::System::UInt32 GetIndexCount(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetBaseVertex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBASEVERTEX_OFFSET))(this, a1);
		}

		::System::Void CheckIndicesArrayRange(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKINDICESARRAYRANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTrianglesImpl(::System::Int32 a1, ::UnityEngine::Rendering::IndexFormat a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLESIMPL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void SetTriangles(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_OFFSET))(this, a1, a2);
		}

		::System::Void SetTriangles_1(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTriangles_2(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTriangles_3(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetTriangles_4(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetTriangles_5(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTriangles_6(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTriangles_7(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetTriangles_8(::UnityEngine::Pooled::PooledList_1<::System::Int32>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_8_OFFSET))(this, a1, a2);
		}

		::System::Void SetTriangles_9(::UnityEngine::Pooled::PooledList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetTriangles_10(::UnityEngine::Pooled::PooledList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_10_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetIndices(::Il2CppArray<::System::Int32>* a1, ::UnityEngine::MeshTopology a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetIndices_1(::Il2CppArray<::System::Int32>* a1, ::UnityEngine::MeshTopology a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetIndices_2(::Il2CppArray<::System::Int32>* a1, ::UnityEngine::MeshTopology a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetIndices_3(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetIndices_4(::System::Collections::Generic::List_1<::System::Int32>* a1, ::UnityEngine::MeshTopology a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetIndices_5(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::MeshTopology a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBONEWEIGHTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::BoneWeight>* get_boneWeights()
		{
			return ((::Il2CppArray<::UnityEngine::BoneWeight>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BONEWEIGHTS_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CLEAR_1_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::System::Void RecalculateNormals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATENORMALS_OFFSET))(this);
		}

		::System::Void RecalculateTangents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_RECALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void MarkDynamic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_MARKDYNAMIC_OFFSET))(this);
		}

		::System::Void UploadMeshData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_UPLOADMESHDATA_OFFSET))(this, a1);
		}

		::System::Void Optimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_OPTIMIZE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetVertexBuffer(::System::Int32 a1)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFER_OFFSET))(this, a1);
		}

		::UnityEngine::ComputeBuffer* GetIndexBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXBUFFER_OFFSET))(this);
		}

		::System::Boolean UseOptimizedVertexData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATA_OFFSET))(this);
		}

		::UnityEngine::MeshTopology GetTopology(::System::Int32 a1)
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTOPOLOGY_OFFSET))(this, a1);
		}

		::System::Void CombineMeshes(::Il2CppArray<::UnityEngine::CombineInstance>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CombineMeshes_1(::Il2CppArray<::UnityEngine::CombineInstance>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHES_1_OFFSET))(this, a1);
		}

		::System::UInt32 GetFirstVertex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETFIRSTVERTEX_OFFSET))(this, a1);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BOUNDS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_bounds_Injected(::UnityEngine::Bounds& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_BOUNDS_INJECTED_OFFSET))(this, a1);
		}
	};
}
