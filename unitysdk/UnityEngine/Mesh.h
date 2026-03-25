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

#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHINDICES_OFFSET UNITYSDK_OFFSET(0x18A22800)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESHTRIANGLES_OFFSET UNITYSDK_OFFSET(0x18A227F0)
#define UNITYENGINE_MESH_CHECKCANACCESSSUBMESH_OFFSET UNITYSDK_OFFSET(0x18A22620)
#define UNITYENGINE_MESH_CHECKINDICESARRAYRANGE_OFFSET UNITYSDK_OFFSET(0x18A23150)
#define UNITYENGINE_MESH_CLEARIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E750)
#define UNITYENGINE_MESH_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x18A24F20)
#define UNITYENGINE_MESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x18A24F10)
#define UNITYENGINE_MESH_COMBINEMESHESIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E7C0)
#define UNITYENGINE_MESH_COMBINEMESHES_1_OFFSET UNITYSDK_OFFSET(0x18A255D0)
#define UNITYENGINE_MESH_COMBINEMESHES_OFFSET UNITYSDK_OFFSET(0x18A255B0)
#define UNITYENGINE_MESH_DEFAULTDIMENSIONFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x18A1E830)
#define UNITYENGINE_MESH_FROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x18A1E470)
#define UNITYENGINE_MESH_GETALLOCARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E580)
#define UNITYENGINE_MESH_GETARRAYFROMCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E590)
#define UNITYENGINE_MESH_GETBASEVERTEXIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4C0)
#define UNITYENGINE_MESH_GETBASEVERTEX_OFFSET UNITYSDK_OFFSET(0x18A230D0)
#define UNITYENGINE_MESH_GETBLENDSHAPEINDEX_OFFSET UNITYSDK_OFFSET(0x18A1E610)
#define UNITYENGINE_MESH_GETBLENDSHAPENAME_OFFSET UNITYSDK_OFFSET(0x18A1E600)
#define UNITYENGINE_MESH_GETBONEWEIGHTSIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E660)
#define UNITYENGINE_MESH_GETBONEWEIGHTSNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E670)
#define UNITYENGINE_MESH_GETBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x18A24DA0)
#define UNITYENGINE_MESH_GETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x18A21770)
#define UNITYENGINE_MESH_GETCOLORS_OFFSET UNITYSDK_OFFSET(0x18A21230)
#define UNITYENGINE_MESH_GETFIRSTVERTEX_OFFSET UNITYSDK_OFFSET(0x18A255F0)
#define UNITYENGINE_MESH_GETINDEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E630)
#define UNITYENGINE_MESH_GETINDEXBUFFER_OFFSET UNITYSDK_OFFSET(0x18A25380)
#define UNITYENGINE_MESH_GETINDEXCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4B0)
#define UNITYENGINE_MESH_GETINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x18A22FD0)
#define UNITYENGINE_MESH_GETINDEXSTARTIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4A0)
#define UNITYENGINE_MESH_GETINDEXSTART_OFFSET UNITYSDK_OFFSET(0x18A23050)
#define UNITYENGINE_MESH_GETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4E0)
#define UNITYENGINE_MESH_GETINDICESNONALLOCIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E510)
#define UNITYENGINE_MESH_GETINDICES_1_OFFSET UNITYSDK_OFFSET(0x18A22DC0)
#define UNITYENGINE_MESH_GETINDICES_2_OFFSET UNITYSDK_OFFSET(0x18A22E10)
#define UNITYENGINE_MESH_GETINDICES_3_OFFSET UNITYSDK_OFFSET(0x18A22E20)
#define UNITYENGINE_MESH_GETINDICES_OFFSET UNITYSDK_OFFSET(0x18A22D70)
#define UNITYENGINE_MESH_GETNORMALS_OFFSET UNITYSDK_OFFSET(0x18A20610)
#define UNITYENGINE_MESH_GETTOPOLOGYIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E7B0)
#define UNITYENGINE_MESH_GETTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x18A25440)
#define UNITYENGINE_MESH_GETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4D0)
#define UNITYENGINE_MESH_GETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x18A22D20)
#define UNITYENGINE_MESH_GETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x18A22CD0)
#define UNITYENGINE_MESH_GETUVCHANNEL_OFFSET UNITYSDK_OFFSET(0x18A1E7E0)
#define UNITYENGINE_MESH_GETUVS_1_OFFSET UNITYSDK_OFFSET(0x18A22500)
#define UNITYENGINE_MESH_GETUVS_2_OFFSET UNITYSDK_OFFSET(0x18A22520)
#define UNITYENGINE_MESH_GETUVS_OFFSET UNITYSDK_OFFSET(0x18A224E0)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTEOFFSET_OFFSET UNITYSDK_OFFSET(0x18A1E550)
#define UNITYENGINE_MESH_GETVERTEXATTRIBUTESTREAM_OFFSET UNITYSDK_OFFSET(0x18A1E540)
#define UNITYENGINE_MESH_GETVERTEXBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E620)
#define UNITYENGINE_MESH_GETVERTEXBUFFERSTRIDE_OFFSET UNITYSDK_OFFSET(0x18A1E5A0)
#define UNITYENGINE_MESH_GETVERTEXBUFFER_OFFSET UNITYSDK_OFFSET(0x18A25300)
#define UNITYENGINE_MESH_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x18A1FEE0)
#define UNITYENGINE_MESH_GET_BLENDSHAPECOUNT_OFFSET UNITYSDK_OFFSET(0x18A1E5F0)
#define UNITYENGINE_MESH_GET_BONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x18A24F00)
#define UNITYENGINE_MESH_GET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1E720)
#define UNITYENGINE_MESH_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x18A1E6D0)
#define UNITYENGINE_MESH_GET_CANACCESS_OFFSET UNITYSDK_OFFSET(0x18A1E690)
#define UNITYENGINE_MESH_GET_COLORS32_OFFSET UNITYSDK_OFFSET(0x18A1FD00)
#define UNITYENGINE_MESH_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x18A1FB20)
#define UNITYENGINE_MESH_GET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18A1E5D0)
#define UNITYENGINE_MESH_GET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x18A1E480)
#define UNITYENGINE_MESH_GET_ISREADABLE_OFFSET UNITYSDK_OFFSET(0x18A1E680)
#define UNITYENGINE_MESH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x18A1EEA0)
#define UNITYENGINE_MESH_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x18A1E6B0)
#define UNITYENGINE_MESH_GET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x18A1F080)
#define UNITYENGINE_MESH_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x18A22810)
#define UNITYENGINE_MESH_GET_UV2_OFFSET UNITYSDK_OFFSET(0x18A1F440)
#define UNITYENGINE_MESH_GET_UV3_OFFSET UNITYSDK_OFFSET(0x18A1F620)
#define UNITYENGINE_MESH_GET_UV4_OFFSET UNITYSDK_OFFSET(0x18A1F800)
#define UNITYENGINE_MESH_GET_UV5_OFFSET UNITYSDK_OFFSET(0x18A1F8A0)
#define UNITYENGINE_MESH_GET_UV6_OFFSET UNITYSDK_OFFSET(0x18A1F940)
#define UNITYENGINE_MESH_GET_UV7_OFFSET UNITYSDK_OFFSET(0x18A1F9E0)
#define UNITYENGINE_MESH_GET_UV8_OFFSET UNITYSDK_OFFSET(0x18A1FA80)
#define UNITYENGINE_MESH_GET_UV_OFFSET UNITYSDK_OFFSET(0x18A1F260)
#define UNITYENGINE_MESH_GET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18A1E5B0)
#define UNITYENGINE_MESH_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x18A1E6A0)
#define UNITYENGINE_MESH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x18A1ECC0)
#define UNITYENGINE_MESH_HASBONEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x18A1E650)
#define UNITYENGINE_MESH_HASVERTEXATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18A1E530)
#define UNITYENGINE_MESH_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18A1E450)
#define UNITYENGINE_MESH_MARKDYNAMICIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E790)
#define UNITYENGINE_MESH_MARKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x18A251C0)
#define UNITYENGINE_MESH_OPTIMIZEIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E7D0)
#define UNITYENGINE_MESH_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x18A25230)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSCHANNEL_OFFSET UNITYSDK_OFFSET(0x18A1E520)
#define UNITYENGINE_MESH_PRINTERRORCANTACCESSINDICES_OFFSET UNITYSDK_OFFSET(0x18A22540)
#define UNITYENGINE_MESH_RECALCULATEBOUNDSIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E760)
#define UNITYENGINE_MESH_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A24F30)
#define UNITYENGINE_MESH_RECALCULATENORMALSIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E770)
#define UNITYENGINE_MESH_RECALCULATENORMALS_OFFSET UNITYSDK_OFFSET(0x18A25000)
#define UNITYENGINE_MESH_RECALCULATETANGENTSIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E780)
#define UNITYENGINE_MESH_RECALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x18A250D0)
#define UNITYENGINE_MESH_SETARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E560)
#define UNITYENGINE_MESH_SETCOLORS_1_OFFSET UNITYSDK_OFFSET(0x18A21340)
#define UNITYENGINE_MESH_SETCOLORS_2_OFFSET UNITYSDK_OFFSET(0x18A213A0)
#define UNITYENGINE_MESH_SETCOLORS_3_OFFSET UNITYSDK_OFFSET(0x18A21610)
#define UNITYENGINE_MESH_SETCOLORS_4_OFFSET UNITYSDK_OFFSET(0x18A21820)
#define UNITYENGINE_MESH_SETCOLORS_5_OFFSET UNITYSDK_OFFSET(0x18A21890)
#define UNITYENGINE_MESH_SETCOLORS_6_OFFSET UNITYSDK_OFFSET(0x18A218F0)
#define UNITYENGINE_MESH_SETCOLORS_7_OFFSET UNITYSDK_OFFSET(0x18A219F0)
#define UNITYENGINE_MESH_SETCOLORS_8_OFFSET UNITYSDK_OFFSET(0x18A21A30)
#define UNITYENGINE_MESH_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x18A212D0)
#define UNITYENGINE_MESH_SETINDICESIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E4F0)
#define UNITYENGINE_MESH_SETINDICESNATIVEARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E500)
#define UNITYENGINE_MESH_SETINDICES_1_OFFSET UNITYSDK_OFFSET(0x18A24820)
#define UNITYENGINE_MESH_SETINDICES_2_OFFSET UNITYSDK_OFFSET(0x18A24590)
#define UNITYENGINE_MESH_SETINDICES_3_OFFSET UNITYSDK_OFFSET(0x18A24AB0)
#define UNITYENGINE_MESH_SETINDICES_4_OFFSET UNITYSDK_OFFSET(0x18A24C40)
#define UNITYENGINE_MESH_SETINDICES_5_OFFSET UNITYSDK_OFFSET(0x18A24CF0)
#define UNITYENGINE_MESH_SETINDICES_OFFSET UNITYSDK_OFFSET(0x18A24310)
#define UNITYENGINE_MESH_SETNATIVEARRAYFORCHANNELIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E570)
#define UNITYENGINE_MESH_SETNORMALS_1_OFFSET UNITYSDK_OFFSET(0x18A20720)
#define UNITYENGINE_MESH_SETNORMALS_2_OFFSET UNITYSDK_OFFSET(0x18A20780)
#define UNITYENGINE_MESH_SETNORMALS_3_OFFSET UNITYSDK_OFFSET(0x18A20870)
#define UNITYENGINE_MESH_SETNORMALS_4_OFFSET UNITYSDK_OFFSET(0x18A208A0)
#define UNITYENGINE_MESH_SETNORMALS_5_OFFSET UNITYSDK_OFFSET(0x18A20B10)
#define UNITYENGINE_MESH_SETNORMALS_OFFSET UNITYSDK_OFFSET(0x18A206B0)
#define UNITYENGINE_MESH_SETSIZEDARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x18A1E8A0)
#define UNITYENGINE_MESH_SETSIZEDNATIVEARRAYFORCHANNEL_OFFSET UNITYSDK_OFFSET(0x18A1EAC0)
#define UNITYENGINE_MESH_SETTANGENTS_1_OFFSET UNITYSDK_OFFSET(0x18A20CE0)
#define UNITYENGINE_MESH_SETTANGENTS_2_OFFSET UNITYSDK_OFFSET(0x18A20D40)
#define UNITYENGINE_MESH_SETTANGENTS_3_OFFSET UNITYSDK_OFFSET(0x18A20E30)
#define UNITYENGINE_MESH_SETTANGENTS_4_OFFSET UNITYSDK_OFFSET(0x18A20E60)
#define UNITYENGINE_MESH_SETTANGENTS_5_OFFSET UNITYSDK_OFFSET(0x18A210D0)
#define UNITYENGINE_MESH_SETTANGENTS_OFFSET UNITYSDK_OFFSET(0x18A20C70)
#define UNITYENGINE_MESH_SETTRIANGLESIMPL_OFFSET UNITYSDK_OFFSET(0x18A22C40)
#define UNITYENGINE_MESH_SETTRIANGLES_10_OFFSET UNITYSDK_OFFSET(0x18A24120)
#define UNITYENGINE_MESH_SETTRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x18A237D0)
#define UNITYENGINE_MESH_SETTRIANGLES_2_OFFSET UNITYSDK_OFFSET(0x18A23550)
#define UNITYENGINE_MESH_SETTRIANGLES_3_OFFSET UNITYSDK_OFFSET(0x18A23A50)
#define UNITYENGINE_MESH_SETTRIANGLES_4_OFFSET UNITYSDK_OFFSET(0x18A23BD0)
#define UNITYENGINE_MESH_SETTRIANGLES_5_OFFSET UNITYSDK_OFFSET(0x18A23D20)
#define UNITYENGINE_MESH_SETTRIANGLES_6_OFFSET UNITYSDK_OFFSET(0x18A23C70)
#define UNITYENGINE_MESH_SETTRIANGLES_7_OFFSET UNITYSDK_OFFSET(0x18A23DC0)
#define UNITYENGINE_MESH_SETTRIANGLES_8_OFFSET UNITYSDK_OFFSET(0x18A23E80)
#define UNITYENGINE_MESH_SETTRIANGLES_9_OFFSET UNITYSDK_OFFSET(0x18A23EA0)
#define UNITYENGINE_MESH_SETTRIANGLES_OFFSET UNITYSDK_OFFSET(0x18A232D0)
#define UNITYENGINE_MESH_SETUVSIMPL_OFFSET UNITYSDK_OFFSET(0x18A21E50)
#define UNITYENGINE_MESH_SETUVS_10_OFFSET UNITYSDK_OFFSET(0x18A22240)
#define UNITYENGINE_MESH_SETUVS_11_OFFSET UNITYSDK_OFFSET(0x18A22480)
#define UNITYENGINE_MESH_SETUVS_12_OFFSET UNITYSDK_OFFSET(0x18A224B0)
#define UNITYENGINE_MESH_SETUVS_1_OFFSET UNITYSDK_OFFSET(0x18A21C20)
#define UNITYENGINE_MESH_SETUVS_2_OFFSET UNITYSDK_OFFSET(0x18A21CA0)
#define UNITYENGINE_MESH_SETUVS_3_OFFSET UNITYSDK_OFFSET(0x18A21BE0)
#define UNITYENGINE_MESH_SETUVS_4_OFFSET UNITYSDK_OFFSET(0x18A21C60)
#define UNITYENGINE_MESH_SETUVS_5_OFFSET UNITYSDK_OFFSET(0x18A21CE0)
#define UNITYENGINE_MESH_SETUVS_6_OFFSET UNITYSDK_OFFSET(0x18A21D20)
#define UNITYENGINE_MESH_SETUVS_7_OFFSET UNITYSDK_OFFSET(0x18A21E10)
#define UNITYENGINE_MESH_SETUVS_8_OFFSET UNITYSDK_OFFSET(0x18A22030)
#define UNITYENGINE_MESH_SETUVS_9_OFFSET UNITYSDK_OFFSET(0x18A22270)
#define UNITYENGINE_MESH_SETUVS_OFFSET UNITYSDK_OFFSET(0x18A21BA0)
#define UNITYENGINE_MESH_SETVERTICES_1_OFFSET UNITYSDK_OFFSET(0x18A1FFE0)
#define UNITYENGINE_MESH_SETVERTICES_2_OFFSET UNITYSDK_OFFSET(0x18A20040)
#define UNITYENGINE_MESH_SETVERTICES_3_OFFSET UNITYSDK_OFFSET(0x18A20130)
#define UNITYENGINE_MESH_SETVERTICES_4_OFFSET UNITYSDK_OFFSET(0x18A204B0)
#define UNITYENGINE_MESH_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x18A1FF80)
#define UNITYENGINE_MESH_SET_BOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1E740)
#define UNITYENGINE_MESH_SET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x18A1E730)
#define UNITYENGINE_MESH_SET_COLORS32_OFFSET UNITYSDK_OFFSET(0x18A1FDA0)
#define UNITYENGINE_MESH_SET_COLORS_OFFSET UNITYSDK_OFFSET(0x18A1FBC0)
#define UNITYENGINE_MESH_SET_INDEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18A1E5E0)
#define UNITYENGINE_MESH_SET_INDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x18A1E490)
#define UNITYENGINE_MESH_SET_NORMALS_OFFSET UNITYSDK_OFFSET(0x18A1EF40)
#define UNITYENGINE_MESH_SET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x18A1E6C0)
#define UNITYENGINE_MESH_SET_TANGENTS_OFFSET UNITYSDK_OFFSET(0x18A1F120)
#define UNITYENGINE_MESH_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x18A22920)
#define UNITYENGINE_MESH_SET_UV2_OFFSET UNITYSDK_OFFSET(0x18A1F4E0)
#define UNITYENGINE_MESH_SET_UV3_OFFSET UNITYSDK_OFFSET(0x18A1F6C0)
#define UNITYENGINE_MESH_SET_UV_OFFSET UNITYSDK_OFFSET(0x18A1F300)
#define UNITYENGINE_MESH_SET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18A1E5C0)
#define UNITYENGINE_MESH_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x18A1ED60)
#define UNITYENGINE_MESH_UPLOADMESHDATAIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E7A0)
#define UNITYENGINE_MESH_UPLOADMESHDATA_OFFSET UNITYSDK_OFFSET(0x18A251F0)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATAIMPL_OFFSET UNITYSDK_OFFSET(0x18A1E640)
#define UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x18A253D0)
#define UNITYENGINE_MESH__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1E460)

namespace UnityEngine
{
	inline static constexpr unsigned int Mesh_TypeDefinitionIndex = 4000;

	class Mesh : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Mesh* mono)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_INTERNAL_CREATE_OFFSET))(mono);
		}

		static ::UnityEngine::Mesh* FromInstanceID(::System::Int32 id)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_FROMINSTANCEID_OFFSET))(id);
		}

		::UnityEngine::Rendering::IndexFormat get_indexFormat()
		{
			return ((::UnityEngine::Rendering::IndexFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_INDEXFORMAT_OFFSET))(this);
		}

		::System::Void set_indexFormat(::UnityEngine::Rendering::IndexFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::IndexFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_INDEXFORMAT_OFFSET))(this, value);
		}

		::System::UInt32 GetIndexStartImpl(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXSTARTIMPL_OFFSET))(this, submesh);
		}

		::System::UInt32 GetIndexCountImpl(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXCOUNTIMPL_OFFSET))(this, submesh);
		}

		::System::UInt32 GetBaseVertexImpl(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBASEVERTEXIMPL_OFFSET))(this, submesh);
		}

		::Il2CppArray<::System::Int32>* GetTrianglesImpl(::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLESIMPL_OFFSET))(this, submesh, applyBaseVertex);
		}

		::Il2CppArray<::System::Int32>* GetIndicesImpl(::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICESIMPL_OFFSET))(this, submesh, applyBaseVertex);
		}

		::System::Void SetIndicesImpl(::System::Int32 submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* indices, ::System::Int32 arrayStart, ::System::Int32 arraySize, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICESIMPL_OFFSET))(this, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex);
		}

		::System::Void SetIndicesNativeArrayImpl(::System::Int32 submesh, ::UnityEngine::MeshTopology topology, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::IntPtr indices, ::System::Int32 arrayStart, ::System::Int32 arraySize, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICESNATIVEARRAYIMPL_OFFSET))(this, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex);
		}

		::System::Void GetIndicesNonAllocImpl(::Il2CppArray<::System::Int32>* values, ::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICESNONALLOCIMPL_OFFSET))(this, values, submesh, applyBaseVertex);
		}

		::System::Void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute ch)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_PRINTERRORCANTACCESSCHANNEL_OFFSET))(this, ch);
		}

		::System::Boolean HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute attr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_HASVERTEXATTRIBUTE_OFFSET))(this, attr);
		}

		::System::Int32 GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute attr)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTESTREAM_OFFSET))(this, attr);
		}

		::System::Int32 GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute attr)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXATTRIBUTEOFFSET_OFFSET))(this, attr);
		}

		::System::Void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim, ::System::Array* values, ::System::Int32 arraySize, ::System::Int32 valuesStart, ::System::Int32 valuesCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETARRAYFORCHANNELIMPL_OFFSET))(this, channel, format, dim, values, arraySize, valuesStart, valuesCount);
		}

		::System::Void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim, ::System::IntPtr values, ::System::Int32 arraySize, ::System::Int32 valuesStart, ::System::Int32 valuesCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNATIVEARRAYFORCHANNELIMPL_OFFSET))(this, channel, format, dim, values, arraySize, valuesStart, valuesCount);
		}

		::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim)
		{
			return ((::System::Array*(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETALLOCARRAYFROMCHANNELIMPL_OFFSET))(this, channel, format, dim);
		}

		::System::Void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim, ::System::Array* values)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETARRAYFROMCHANNELIMPL_OFFSET))(this, channel, format, dim, values);
		}

		::System::Int32 GetVertexBufferStride(::System::Int32 stream)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFERSTRIDE_OFFSET))(this, stream);
		}

		::UnityEngine::GfxBufferTarget get_vertexBufferTarget()
		{
			return ((::UnityEngine::GfxBufferTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_VERTEXBUFFERTARGET_OFFSET))(this);
		}

		::System::Void set_vertexBufferTarget(::UnityEngine::GfxBufferTarget value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GfxBufferTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_VERTEXBUFFERTARGET_OFFSET))(this, value);
		}

		::UnityEngine::GfxBufferTarget get_indexBufferTarget()
		{
			return ((::UnityEngine::GfxBufferTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_INDEXBUFFERTARGET_OFFSET))(this);
		}

		::System::Void set_indexBufferTarget(::UnityEngine::GfxBufferTarget value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GfxBufferTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_INDEXBUFFERTARGET_OFFSET))(this, value);
		}

		::System::Int32 get_blendShapeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BLENDSHAPECOUNT_OFFSET))(this);
		}

		::System::String* GetBlendShapeName(::System::Int32 shapeIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBLENDSHAPENAME_OFFSET))(this, shapeIndex);
		}

		::System::Int32 GetBlendShapeIndex(::System::String* blendShapeName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBLENDSHAPEINDEX_OFFSET))(this, blendShapeName);
		}

		::UnityEngine::ComputeBuffer* GetVertexBufferImpl(::System::Int32 index)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFERIMPL_OFFSET))(this, index);
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

		::System::Void GetBoneWeightsNonAllocImpl(::Il2CppArray<::UnityEngine::BoneWeight>* values)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoneWeight>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBONEWEIGHTSNONALLOCIMPL_OFFSET))(this, values);
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

		::System::Void set_subMeshCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_SUBMESHCOUNT_OFFSET))(this, value);
		}

		::UnityEngine::Bounds get_bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_bounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_BOUNDS_OFFSET))(this, value);
		}

		::System::Void ClearImpl(::System::Boolean keepVertexLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CLEARIMPL_OFFSET))(this, keepVertexLayout);
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

		::System::Void UploadMeshDataImpl(::System::Boolean markNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_UPLOADMESHDATAIMPL_OFFSET))(this, markNoLongerReadable);
		}

		::UnityEngine::MeshTopology GetTopologyImpl(::System::Int32 submesh)
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTOPOLOGYIMPL_OFFSET))(this, submesh);
		}

		::System::Void CombineMeshesImpl(::Il2CppArray<::UnityEngine::CombineInstance>* combine, ::System::Boolean mergeSubMeshes, ::System::Boolean useMatrices, ::System::Boolean hasLightmapData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHESIMPL_OFFSET))(this, combine, mergeSubMeshes, useMatrices, hasLightmapData);
		}

		::System::Void OptimizeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_OPTIMIZEIMPL_OFFSET))(this);
		}

		::UnityEngine::Rendering::VertexAttribute GetUVChannel(::System::Int32 uvIndex)
		{
			return ((::UnityEngine::Rendering::VertexAttribute(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVCHANNEL_OFFSET))(this, uvIndex);
		}

		static ::System::Int32 DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute channel)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_DEFAULTDIMENSIONFORCHANNEL_OFFSET))(channel);
		}

		::System::Void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim, ::System::Array* values, ::System::Int32 valuesArrayLength, ::System::Int32 valuesStart, ::System::Int32 valuesCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETSIZEDARRAYFORCHANNEL_OFFSET))(this, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount);
		}

		::System::Void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute channel, ::UnityEngine::Rendering::VertexAttributeFormat format, ::System::Int32 dim, ::System::IntPtr values, ::System::Int32 valuesArrayLength, ::System::Int32 valuesStart, ::System::Int32 valuesCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETSIZEDNATIVEARRAYFORCHANNEL_OFFSET))(this, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_vertices(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_VERTICES_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_normals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_NORMALS_OFFSET))(this);
		}

		::System::Void set_normals(::Il2CppArray<::UnityEngine::Vector3>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_NORMALS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_tangents()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_TANGENTS_OFFSET))(this);
		}

		::System::Void set_tangents(::Il2CppArray<::UnityEngine::Vector4>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_TANGENTS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV_OFFSET))(this);
		}

		::System::Void set_uv(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv2()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV2_OFFSET))(this);
		}

		::System::Void set_uv2(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV2_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv3()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_UV3_OFFSET))(this);
		}

		::System::Void set_uv3(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_UV3_OFFSET))(this, value);
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

		::System::Void set_colors(::Il2CppArray<::UnityEngine::Color>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_COLORS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Color32>* get_colors32()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_COLORS32_OFFSET))(this);
		}

		::System::Void set_colors32(::Il2CppArray<::UnityEngine::Color32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_COLORS32_OFFSET))(this, value);
		}

		::System::Void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTICES_OFFSET))(this, vertices);
		}

		::System::Void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_OFFSET))(this, inVertices);
		}

		::System::Void SetVertices_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inVertices, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_1_OFFSET))(this, inVertices, start, length);
		}

		::System::Void SetVertices_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* inVertices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_2_OFFSET))(this, inVertices);
		}

		::System::Void SetVertices_3(::Il2CppArray<::UnityEngine::Vector3>* inVertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_3_OFFSET))(this, inVertices);
		}

		::System::Void SetVertices_4(::Il2CppArray<::UnityEngine::Vector3>* inVertices, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETVERTICES_4_OFFSET))(this, inVertices, start, length);
		}

		::System::Void GetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETNORMALS_OFFSET))(this, normals);
		}

		::System::Void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_OFFSET))(this, inNormals);
		}

		::System::Void SetNormals_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* inNormals, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_1_OFFSET))(this, inNormals, start, length);
		}

		::System::Void SetNormals_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* inNormals)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_2_OFFSET))(this, inNormals);
		}

		::System::Void SetNormals_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* inNormals, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_3_OFFSET))(this, inNormals, start, length);
		}

		::System::Void SetNormals_4(::Il2CppArray<::UnityEngine::Vector3>* inNormals)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_4_OFFSET))(this, inNormals);
		}

		::System::Void SetNormals_5(::Il2CppArray<::UnityEngine::Vector3>* inNormals, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETNORMALS_5_OFFSET))(this, inNormals, start, length);
		}

		::System::Void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_OFFSET))(this, inTangents);
		}

		::System::Void SetTangents_1(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* inTangents, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_1_OFFSET))(this, inTangents, start, length);
		}

		::System::Void SetTangents_2(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* inTangents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_2_OFFSET))(this, inTangents);
		}

		::System::Void SetTangents_3(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* inTangents, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_3_OFFSET))(this, inTangents, start, length);
		}

		::System::Void SetTangents_4(::Il2CppArray<::UnityEngine::Vector4>* inTangents)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_4_OFFSET))(this, inTangents);
		}

		::System::Void SetTangents_5(::Il2CppArray<::UnityEngine::Vector4>* inTangents, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTANGENTS_5_OFFSET))(this, inTangents, start, length);
		}

		::System::Void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETCOLORS_OFFSET))(this, colors);
		}

		::System::Void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_OFFSET))(this, inColors);
		}

		::System::Void SetColors_1(::System::Collections::Generic::List_1<::UnityEngine::Color>* inColors, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_1_OFFSET))(this, inColors, start, length);
		}

		::System::Void SetColors_2(::Il2CppArray<::UnityEngine::Color>* inColors)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_2_OFFSET))(this, inColors);
		}

		::System::Void SetColors_3(::Il2CppArray<::UnityEngine::Color>* inColors, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_3_OFFSET))(this, inColors, start, length);
		}

		::System::Void GetColors_1(::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETCOLORS_1_OFFSET))(this, colors);
		}

		::System::Void SetColors_4(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_4_OFFSET))(this, inColors);
		}

		::System::Void SetColors_5(::System::Collections::Generic::List_1<::UnityEngine::Color32>* inColors, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_5_OFFSET))(this, inColors, start, length);
		}

		::System::Void SetColors_6(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* inColors)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_6_OFFSET))(this, inColors);
		}

		::System::Void SetColors_7(::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* inColors, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_7_OFFSET))(this, inColors, start, length);
		}

		::System::Void SetColors_8(::Il2CppArray<::UnityEngine::Color32>* inColors, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETCOLORS_8_OFFSET))(this, inColors, start, length);
		}

		::System::Void SetUVs(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_1(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_1_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_2(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_2_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_3(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_3_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUVs_4(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_4_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUVs_5(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_5_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUVs_6(::System::Int32 channel, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_6_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_7(::System::Int32 channel, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_7_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUvsImpl(::System::Int32 uvIndex, ::System::Int32 dim, ::System::Array* uvs, ::System::Int32 arrayStart, ::System::Int32 arraySize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVSIMPL_OFFSET))(this, uvIndex, dim, uvs, arrayStart, arraySize);
		}

		::System::Void SetUVs_8(::System::Int32 channel, ::Il2CppArray<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_8_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_9(::System::Int32 channel, ::Il2CppArray<::UnityEngine::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_9_OFFSET))(this, channel, uvs);
		}

		::System::Void SetUVs_10(::System::Int32 channel, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_10_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUVs_11(::System::Int32 channel, ::Il2CppArray<::UnityEngine::Vector3>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_11_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void SetUVs_12(::System::Int32 channel, ::Il2CppArray<::UnityEngine::Vector4>* uvs, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETUVS_12_OFFSET))(this, channel, uvs, start, length);
		}

		::System::Void GetUVs(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_OFFSET))(this, channel, uvs);
		}

		::System::Void GetUVs_1(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_1_OFFSET))(this, channel, uvs);
		}

		::System::Void GetUVs_2(::System::Int32 channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETUVS_2_OFFSET))(this, channel, uvs);
		}

		::System::Void PrintErrorCantAccessIndices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_PRINTERRORCANTACCESSINDICES_OFFSET))(this);
		}

		::System::Boolean CheckCanAccessSubmesh(::System::Int32 submesh, ::System::Boolean errorAboutTriangles)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESH_OFFSET))(this, submesh, errorAboutTriangles);
		}

		::System::Boolean CheckCanAccessSubmeshTriangles(::System::Int32 submesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESHTRIANGLES_OFFSET))(this, submesh);
		}

		::System::Boolean CheckCanAccessSubmeshIndices(::System::Int32 submesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKCANACCESSSUBMESHINDICES_OFFSET))(this, submesh);
		}

		::Il2CppArray<::System::Int32>* get_triangles()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_triangles(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_TRIANGLES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* GetTriangles(::System::Int32 submesh)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLES_OFFSET))(this, submesh);
		}

		::Il2CppArray<::System::Int32>* GetTriangles_1(::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTRIANGLES_1_OFFSET))(this, submesh, applyBaseVertex);
		}

		::Il2CppArray<::System::Int32>* GetIndices(::System::Int32 submesh)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_OFFSET))(this, submesh);
		}

		::Il2CppArray<::System::Int32>* GetIndices_1(::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_1_OFFSET))(this, submesh, applyBaseVertex);
		}

		::System::Void GetIndices_2(::System::Collections::Generic::List_1<::System::Int32>* indices, ::System::Int32 submesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_2_OFFSET))(this, indices, submesh);
		}

		::System::Void GetIndices_3(::System::Collections::Generic::List_1<::System::Int32>* indices, ::System::Int32 submesh, ::System::Boolean applyBaseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDICES_3_OFFSET))(this, indices, submesh, applyBaseVertex);
		}

		::System::UInt32 GetIndexStart(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXSTART_OFFSET))(this, submesh);
		}

		::System::UInt32 GetIndexCount(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXCOUNT_OFFSET))(this, submesh);
		}

		::System::UInt32 GetBaseVertex(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBASEVERTEX_OFFSET))(this, submesh);
		}

		::System::Void CheckIndicesArrayRange(::System::Int32 valuesLength, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CHECKINDICESARRAYRANGE_OFFSET))(this, valuesLength, start, length);
		}

		::System::Void SetTrianglesImpl(::System::Int32 submesh, ::UnityEngine::Rendering::IndexFormat indicesFormat, ::System::Array* triangles, ::System::Int32 trianglesArrayLength, ::System::Int32 start, ::System::Int32 length, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLESIMPL_OFFSET))(this, submesh, indicesFormat, triangles, trianglesArrayLength, start, length, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles(::Il2CppArray<::System::Int32>* triangles, ::System::Int32 submesh)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_OFFSET))(this, triangles, submesh);
		}

		::System::Void SetTriangles_1(::Il2CppArray<::System::Int32>* triangles, ::System::Int32 submesh, ::System::Boolean calculateBounds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_1_OFFSET))(this, triangles, submesh, calculateBounds);
		}

		::System::Void SetTriangles_2(::Il2CppArray<::System::Int32>* triangles, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_2_OFFSET))(this, triangles, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles_3(::Il2CppArray<::System::Int32>* triangles, ::System::Int32 trianglesStart, ::System::Int32 trianglesLength, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_3_OFFSET))(this, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles_4(::System::Collections::Generic::List_1<::System::Int32>* triangles, ::System::Int32 submesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_4_OFFSET))(this, triangles, submesh);
		}

		::System::Void SetTriangles_5(::System::Collections::Generic::List_1<::System::Int32>* triangles, ::System::Int32 submesh, ::System::Boolean calculateBounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_5_OFFSET))(this, triangles, submesh, calculateBounds);
		}

		::System::Void SetTriangles_6(::System::Collections::Generic::List_1<::System::Int32>* triangles, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_6_OFFSET))(this, triangles, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles_7(::System::Collections::Generic::List_1<::System::Int32>* triangles, ::System::Int32 trianglesStart, ::System::Int32 trianglesLength, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_7_OFFSET))(this, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles_8(::UnityEngine::Pooled::PooledList_1<::System::Int32>* triangles, ::System::Int32 submesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_8_OFFSET))(this, triangles, submesh);
		}

		::System::Void SetTriangles_9(::UnityEngine::Pooled::PooledList_1<::System::Int32>* triangles, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_9_OFFSET))(this, triangles, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetTriangles_10(::UnityEngine::Pooled::PooledList_1<::System::Int32>* triangles, ::System::Int32 trianglesStart, ::System::Int32 trianglesLength, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETTRIANGLES_10_OFFSET))(this, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetIndices(::Il2CppArray<::System::Int32>* indices, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_OFFSET))(this, indices, topology, submesh);
		}

		::System::Void SetIndices_1(::Il2CppArray<::System::Int32>* indices, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh, ::System::Boolean calculateBounds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_1_OFFSET))(this, indices, topology, submesh, calculateBounds);
		}

		::System::Void SetIndices_2(::Il2CppArray<::System::Int32>* indices, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_2_OFFSET))(this, indices, topology, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetIndices_3(::Il2CppArray<::System::Int32>* indices, ::System::Int32 indicesStart, ::System::Int32 indicesLength, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_3_OFFSET))(this, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetIndices_4(::System::Collections::Generic::List_1<::System::Int32>* indices, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_4_OFFSET))(this, indices, topology, submesh, calculateBounds, baseVertex);
		}

		::System::Void SetIndices_5(::System::Collections::Generic::List_1<::System::Int32>* indices, ::System::Int32 indicesStart, ::System::Int32 indicesLength, ::UnityEngine::MeshTopology topology, ::System::Int32 submesh, ::System::Boolean calculateBounds, ::System::Int32 baseVertex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SETINDICES_5_OFFSET))(this, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
		}

		::System::Void GetBoneWeights(::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>* boneWeights)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::BoneWeight>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETBONEWEIGHTS_OFFSET))(this, boneWeights);
		}

		::Il2CppArray<::UnityEngine::BoneWeight>* get_boneWeights()
		{
			return ((::Il2CppArray<::UnityEngine::BoneWeight>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BONEWEIGHTS_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean keepVertexLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_CLEAR_OFFSET))(this, keepVertexLayout);
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

		::System::Void UploadMeshData(::System::Boolean markNoLongerReadable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_UPLOADMESHDATA_OFFSET))(this, markNoLongerReadable);
		}

		::System::Void Optimize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_OPTIMIZE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetVertexBuffer(::System::Int32 index)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETVERTEXBUFFER_OFFSET))(this, index);
		}

		::UnityEngine::ComputeBuffer* GetIndexBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETINDEXBUFFER_OFFSET))(this);
		}

		::System::Boolean UseOptimizedVertexData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_USEOPTIMIZEDVERTEXDATA_OFFSET))(this);
		}

		::UnityEngine::MeshTopology GetTopology(::System::Int32 submesh)
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETTOPOLOGY_OFFSET))(this, submesh);
		}

		::System::Void CombineMeshes(::Il2CppArray<::UnityEngine::CombineInstance>* combine, ::System::Boolean mergeSubMeshes, ::System::Boolean useMatrices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHES_OFFSET))(this, combine, mergeSubMeshes, useMatrices);
		}

		::System::Void CombineMeshes_1(::Il2CppArray<::UnityEngine::CombineInstance>* combine)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CombineInstance>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_COMBINEMESHES_1_OFFSET))(this, combine);
		}

		::System::UInt32 GetFirstVertex(::System::Int32 submesh)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GETFIRSTVERTEX_OFFSET))(this, submesh);
		}

		::System::Void get_bounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_GET_BOUNDS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_bounds_Injected(::UnityEngine::Bounds& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH_SET_BOUNDS_INJECTED_OFFSET))(this, value);
		}
	};
}
