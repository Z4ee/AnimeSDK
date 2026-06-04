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

#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHINDICES_OFFSET UNITYSDK_OFFSET(0x1B2ACB60)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B2ACB50)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESH_OFFSET UNITYSDK_OFFSET(0x1B2AC980)
#define UNITYENGINE_MESH_CHECKINDICESARRAYRANGE_OFFSET UNITYSDK_OFFSET(0x1B2AD420)
#define UNITYENGINE_MESH_CLEARIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A40)
#define UNITYENGINE_MESH_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1B2AF1C0)
#define UNITYENGINE_MESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2AF1B0)
#define UNITYENGINE_MESH_COMBINEMESHESIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8AB0)
#define UNITYENGINE_MESH_COMBINEMESHES_1_OFFSET UNITYSDK_OFFSET(0x1B2AF790)
#define UNITYENGINE_MESH_COMBINEMESHES_OFFSET UNITYSDK_OFFSET(0x1B2AF770)
#define UNITYENGINE_MESH_DEFAULTDIMENSIONFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B2A8B20)
#define UNITYENGINE_MESH_FROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1B2A8740)
#define UNITYENGINE_MESH_GETALLOCARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8870)
#define UNITYENGINE_MESH_GETARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8880)
#define UNITYENGINE_MESH_GETBASEVERTEXIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8790)
#define UNITYENGINE_MESH_GETBASEVERTEX_OFFSET UNITYSDK_OFFSET(0x1B2AD3C0)
#define UNITYENGINE_MESH_GETBLENDSHAPEINDEX_OFFSET UNITYSDK_OFFSET(0x1B2A8900)
#define UNITYENGINE_MESH_GETBLENDSHAPENAME_OFFSET UNITYSDK_OFFSET(0x1B2A88F0)
#define UNITYENGINE_MESH_GETBONEWEIGHTSIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8950)
#define UNITYENGINE_MESH_GETBONEWEIGHTSNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8960)
#define UNITYENGINE_MESH_GETBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B2AF060)
#define UNITYENGINE_MESH_GETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x1B2ABA50)
#define UNITYENGINE_MESH_GETCOLORS_OFFSET UNITYSDK_OFFSET(0x1B2AB510)
#define UNITYENGINE_MESH_GETFIRSTVERTEX_OFFSET UNITYSDK_OFFSET(0x1B2AF7B0)
#define UNITYENGINE_MESH_GETINDEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8920)
#define UNITYENGINE_MESH_GETINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2AF5F0)
#define UNITYENGINE_MESH_GETINDEXCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8780)
#define UNITYENGINE_MESH_GETINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2AD300)
#define UNITYENGINE_MESH_GETINDEXSTARTIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8770)
#define UNITYENGINE_MESH_GETINDEXSTART_OFFSET UNITYSDK_OFFSET(0x1B2AD360)
#define UNITYENGINE_MESH_GETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A87B0)
#define UNITYENGINE_MESH_GETINDICESNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A87E0)
#define UNITYENGINE_MESH_GETINDICES_1_OFFSET UNITYSDK_OFFSET(0x1B2AD120)
#define UNITYENGINE_MESH_GETINDICES_2_OFFSET UNITYSDK_OFFSET(0x1B2AD170)
#define UNITYENGINE_MESH_GETINDICES_3_OFFSET UNITYSDK_OFFSET(0x1B2AD180)
#define UNITYENGINE_MESH_GETINDICES_OFFSET UNITYSDK_OFFSET(0x1B2AD0D0)
#define UNITYENGINE_MESH_GETNORMALS_OFFSET UNITYSDK_OFFSET(0x1B2AA8F0)
#define UNITYENGINE_MESH_GETTOPOLOGYIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8AA0)
#define UNITYENGINE_MESH_GETTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1B2AF690)
#define UNITYENGINE_MESH_GETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A87A0)
#define UNITYENGINE_MESH_GETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1B2AD080)
#define UNITYENGINE_MESH_GETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B2AD030)
#define UNITYENGINE_MESH_GETUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B2A8AD0)
#define UNITYENGINE_MESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0x1B2AC860)
#define UNITYENGINE_MESH_GETUVS_2_OFFSET UNITYSDK_OFFSET(0x1B2AC880)
#define UNITYENGINE_MESH_GETUVS_OFFSET UNITYSDK_OFFSET(0x1B2AC840)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEDIMENSION_OFFSET UNITYSDK_OFFSET(0x1B2A8810)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2A8820)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B2A8840)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTESTREAM_OFFSET UNITYSDK_OFFSET(0x1B2A8830)
#define UNITYENGINE_MESH_GETVERTEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8910)
#define UNITYENGINE_MESH_GETVERTEXBUFFERSTRIDE_OFFSET UNITYSDK_OFFSET(0x1B2A8890)
#define UNITYENGINE_MESH_GETVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2AF5A0)
#define UNITYENGINE_MESH_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2AA1C0)
#define UNITYENGINE_MESH_GET_BLENDSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A88E0)
#define UNITYENGINE_MESH_GET_BONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B2AF1A0)
#define UNITYENGINE_MESH_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2A8A10)
#define UNITYENGINE_MESH_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2A89C0)
#define UNITYENGINE_MESH_GET_CANACCESS_OFFSET UNITYSDK_OFFSET(0x1B2A8980)
#define UNITYENGINE_MESH_GET_COLORS32_OFFSET UNITYSDK_OFFSET(0x1B2A9FE0)
#define UNITYENGINE_MESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x1B2A9E00)
#define UNITYENGINE_MESH_GET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1B2A88C0)
#define UNITYENGINE_MESH_GET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2A8750)
#define UNITYENGINE_MESH_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x1B2A8970)
#define UNITYENGINE_MESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1B2A9180)
#define UNITYENGINE_MESH_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A89A0)
#define UNITYENGINE_MESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1B2A9360)
#define UNITYENGINE_MESH_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B2ACB70)
#define UNITYENGINE_MESH_GET_UV2_OFFSET UNITYSDK_OFFSET(0x1B2A9720)
#define UNITYENGINE_MESH_GET_UV3_OFFSET UNITYSDK_OFFSET(0x1B2A9900)
#define UNITYENGINE_MESH_GET_UV4_OFFSET UNITYSDK_OFFSET(0x1B2A9AE0)
#define UNITYENGINE_MESH_GET_UV5_OFFSET UNITYSDK_OFFSET(0x1B2A9B80)
#define UNITYENGINE_MESH_GET_UV6_OFFSET UNITYSDK_OFFSET(0x1B2A9C20)
#define UNITYENGINE_MESH_GET_UV7_OFFSET UNITYSDK_OFFSET(0x1B2A9CC0)
#define UNITYENGINE_MESH_GET_UV8_OFFSET UNITYSDK_OFFSET(0x1B2A9D60)
#define UNITYENGINE_MESH_GET_UV_OFFSET UNITYSDK_OFFSET(0x1B2A9540)
#define UNITYENGINE_MESH_GET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1B2A88A0)
#define UNITYENGINE_MESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A8990)
#define UNITYENGINE_MESH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B2A8FB0)
#define UNITYENGINE_MESH_HASBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B2A8940)
#define UNITYENGINE_MESH_HASVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B2A8800)
#define UNITYENGINE_MESH_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B2A8720)
#define UNITYENGINE_MESH_MARKDYNAMICIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A80)
#define UNITYENGINE_MESH_MARKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1B2AF460)
#define UNITYENGINE_MESH_OPTIMIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8AC0)
#define UNITYENGINE_MESH_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x1B2AF4D0)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B2A87F0)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSINDICES_OFFSET UNITYSDK_OFFSET(0x1B2AC8A0)
#define UNITYENGINE_MESH_RECALCULATEBOUNDSIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A50)
#define UNITYENGINE_MESH_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2AF1D0)
#define UNITYENGINE_MESH_RECALCULATENORMALSIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A60)
#define UNITYENGINE_MESH_RECALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x1B2AF2A0)
#define UNITYENGINE_MESH_RECALCULATETANGENTSIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A70)
#define UNITYENGINE_MESH_RECALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1B2AF370)
#define UNITYENGINE_MESH_SETARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8850)
#define UNITYENGINE_MESH_SETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x1B2AB620)
#define UNITYENGINE_MESH_SETCOLORS_2_OFFSET UNITYSDK_OFFSET(0x1B2AB680)
#define UNITYENGINE_MESH_SETCOLORS_3_OFFSET UNITYSDK_OFFSET(0x1B2AB8F0)
#define UNITYENGINE_MESH_SETCOLORS_4_OFFSET UNITYSDK_OFFSET(0x1B2ABB80)
#define UNITYENGINE_MESH_SETCOLORS_5_OFFSET UNITYSDK_OFFSET(0x1B2ABBF0)
#define UNITYENGINE_MESH_SETCOLORS_6_OFFSET UNITYSDK_OFFSET(0x1B2ABC50)
#define UNITYENGINE_MESH_SETCOLORS_7_OFFSET UNITYSDK_OFFSET(0x1B2ABD50)
#define UNITYENGINE_MESH_SETCOLORS_8_OFFSET UNITYSDK_OFFSET(0x1B2ABD90)
#define UNITYENGINE_MESH_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x1B2AB5B0)
#define UNITYENGINE_MESH_SETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A87C0)
#define UNITYENGINE_MESH_SETINDICESNATIVEARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A87D0)
#define UNITYENGINE_MESH_SETINDICES_1_OFFSET UNITYSDK_OFFSET(0x1B2AEAE0)
#define UNITYENGINE_MESH_SETINDICES_2_OFFSET UNITYSDK_OFFSET(0x1B2AE850)
#define UNITYENGINE_MESH_SETINDICES_3_OFFSET UNITYSDK_OFFSET(0x1B2AED70)
#define UNITYENGINE_MESH_SETINDICES_4_OFFSET UNITYSDK_OFFSET(0x1B2AEF00)
#define UNITYENGINE_MESH_SETINDICES_5_OFFSET UNITYSDK_OFFSET(0x1B2AEFB0)
#define UNITYENGINE_MESH_SETINDICES_OFFSET UNITYSDK_OFFSET(0x1B2AE5D0)
#define UNITYENGINE_MESH_SETNATIVEARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8860)
#define UNITYENGINE_MESH_SETNORMALS_1_OFFSET UNITYSDK_OFFSET(0x1B2AAA00)
#define UNITYENGINE_MESH_SETNORMALS_2_OFFSET UNITYSDK_OFFSET(0x1B2AAA60)
#define UNITYENGINE_MESH_SETNORMALS_3_OFFSET UNITYSDK_OFFSET(0x1B2AAB50)
#define UNITYENGINE_MESH_SETNORMALS_4_OFFSET UNITYSDK_OFFSET(0x1B2AAB80)
#define UNITYENGINE_MESH_SETNORMALS_5_OFFSET UNITYSDK_OFFSET(0x1B2AADF0)
#define UNITYENGINE_MESH_SETNORMALS_OFFSET UNITYSDK_OFFSET(0x1B2AA990)
#define UNITYENGINE_MESH_SETSIZEDARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B2A8B90)
#define UNITYENGINE_MESH_SETSIZEDNATIVEARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x1B2A8DB0)
#define UNITYENGINE_MESH_SETTANGENTS_1_OFFSET UNITYSDK_OFFSET(0x1B2AAFC0)
#define UNITYENGINE_MESH_SETTANGENTS_2_OFFSET UNITYSDK_OFFSET(0x1B2AB020)
#define UNITYENGINE_MESH_SETTANGENTS_3_OFFSET UNITYSDK_OFFSET(0x1B2AB110)
#define UNITYENGINE_MESH_SETTANGENTS_4_OFFSET UNITYSDK_OFFSET(0x1B2AB140)
#define UNITYENGINE_MESH_SETTANGENTS_5_OFFSET UNITYSDK_OFFSET(0x1B2AB3B0)
#define UNITYENGINE_MESH_SETTANGENTS_OFFSET UNITYSDK_OFFSET(0x1B2AAF50)
#define UNITYENGINE_MESH_SETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x1B2ACFA0)
#define UNITYENGINE_MESH_SETTRIANGLES_10_OFFSET UNITYSDK_OFFSET(0x1B2AE3F0)
#define UNITYENGINE_MESH_SETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1B2ADAA0)
#define UNITYENGINE_MESH_SETTRIANGLES_2_OFFSET UNITYSDK_OFFSET(0x1B2AD820)
#define UNITYENGINE_MESH_SETTRIANGLES_3_OFFSET UNITYSDK_OFFSET(0x1B2ADD20)
#define UNITYENGINE_MESH_SETTRIANGLES_4_OFFSET UNITYSDK_OFFSET(0x1B2ADEA0)
#define UNITYENGINE_MESH_SETTRIANGLES_5_OFFSET UNITYSDK_OFFSET(0x1B2ADFF0)
#define UNITYENGINE_MESH_SETTRIANGLES_6_OFFSET UNITYSDK_OFFSET(0x1B2ADF40)
#define UNITYENGINE_MESH_SETTRIANGLES_7_OFFSET UNITYSDK_OFFSET(0x1B2AE090)
#define UNITYENGINE_MESH_SETTRIANGLES_8_OFFSET UNITYSDK_OFFSET(0x1B2AE150)
#define UNITYENGINE_MESH_SETTRIANGLES_9_OFFSET UNITYSDK_OFFSET(0x1B2AE170)
#define UNITYENGINE_MESH_SETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B2AD5A0)
#define UNITYENGINE_MESH_SETUVSIMPL_OFFSET UNITYSDK_OFFSET(0x1B2AC1B0)
#define UNITYENGINE_MESH_SETUVS_10_OFFSET UNITYSDK_OFFSET(0x1B2AC5A0)
#define UNITYENGINE_MESH_SETUVS_11_OFFSET UNITYSDK_OFFSET(0x1B2AC7E0)
#define UNITYENGINE_MESH_SETUVS_12_OFFSET UNITYSDK_OFFSET(0x1B2AC810)
#define UNITYENGINE_MESH_SETUVS_1_OFFSET UNITYSDK_OFFSET(0x1B2ABF80)
#define UNITYENGINE_MESH_SETUVS_2_OFFSET UNITYSDK_OFFSET(0x1B2AC000)
#define UNITYENGINE_MESH_SETUVS_3_OFFSET UNITYSDK_OFFSET(0x1B2ABF40)
#define UNITYENGINE_MESH_SETUVS_4_OFFSET UNITYSDK_OFFSET(0x1B2ABFC0)
#define UNITYENGINE_MESH_SETUVS_5_OFFSET UNITYSDK_OFFSET(0x1B2AC040)
#define UNITYENGINE_MESH_SETUVS_6_OFFSET UNITYSDK_OFFSET(0x1B2AC080)
#define UNITYENGINE_MESH_SETUVS_7_OFFSET UNITYSDK_OFFSET(0x1B2AC170)
#define UNITYENGINE_MESH_SETUVS_8_OFFSET UNITYSDK_OFFSET(0x1B2AC390)
#define UNITYENGINE_MESH_SETUVS_9_OFFSET UNITYSDK_OFFSET(0x1B2AC5D0)
#define UNITYENGINE_MESH_SETUVS_OFFSET UNITYSDK_OFFSET(0x1B2ABF00)
#define UNITYENGINE_MESH_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1B2AA2C0)
#define UNITYENGINE_MESH_SETVERTICES_2_OFFSET UNITYSDK_OFFSET(0x1B2AA320)
#define UNITYENGINE_MESH_SETVERTICES_3_OFFSET UNITYSDK_OFFSET(0x1B2AA410)
#define UNITYENGINE_MESH_SETVERTICES_4_OFFSET UNITYSDK_OFFSET(0x1B2AA790)
#define UNITYENGINE_MESH_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2AA260)
#define UNITYENGINE_MESH_SET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2A8A30)
#define UNITYENGINE_MESH_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1B2A8A20)
#define UNITYENGINE_MESH_SET_COLORS32_OFFSET UNITYSDK_OFFSET(0x1B2AA080)
#define UNITYENGINE_MESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x1B2A9EA0)
#define UNITYENGINE_MESH_SET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1B2A88D0)
#define UNITYENGINE_MESH_SET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2A8760)
#define UNITYENGINE_MESH_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1B2A9220)
#define UNITYENGINE_MESH_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2A89B0)
#define UNITYENGINE_MESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x1B2A9400)
#define UNITYENGINE_MESH_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x1B2ACC80)
#define UNITYENGINE_MESH_SET_UV2_OFFSET UNITYSDK_OFFSET(0x1B2A97C0)
#define UNITYENGINE_MESH_SET_UV3_OFFSET UNITYSDK_OFFSET(0x1B2A99A0)
#define UNITYENGINE_MESH_SET_UV_OFFSET UNITYSDK_OFFSET(0x1B2A95E0)
#define UNITYENGINE_MESH_SET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x1B2A88B0)
#define UNITYENGINE_MESH_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B2A9040)
#define UNITYENGINE_MESH_UPLOADMESHDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8A90)
#define UNITYENGINE_MESH_UPLOADMESHDATA_OFFSET UNITYSDK_OFFSET(0x1B2AF490)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1B2A8930)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1B2AF640)
#define UNITYENGINE_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A8730)

namespace UnityEngine
{
	inline static constexpr unsigned int Mesh_TypeDefinitionIndex = 4176;

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
