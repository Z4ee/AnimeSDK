#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace XftWeapon { class VertexPool_VertexSegment; }
namespace XftWeapon { class XWeaponTrail; }

#define XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET UNITYSDK_OFFSET(0x1D5735C0)
#define XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1D570CD0)
#define XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D570210)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1D5728F0)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET UNITYSDK_OFFSET(0x1D572B20)
#define XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET UNITYSDK_OFFSET(0x1D571670)
#define XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D572090)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET UNITYSDK_OFFSET(0x1D5701F0)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET UNITYSDK_OFFSET(0x1D572680)
#define XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET UNITYSDK_OFFSET(0x1D571660)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET UNITYSDK_OFFSET(0x1D5701B0)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1D5724D0)
#define XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D570B30)
#define XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET UNITYSDK_OFFSET(0x1D570F60)
#define XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET UNITYSDK_OFFSET(0x1D5709D0)
#define XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1D570F40)
#define XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET UNITYSDK_OFFSET(0x1D5713A0)
#define XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D572C10)
#define XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D571100)
#define XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET UNITYSDK_OFFSET(0x1D572380)
#define XFTWEAPON_VERTEXPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1D5710E0)
#define XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1D571120)
#define XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1D570F50)
#define XFTWEAPON_VERTEXPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5723A0)

namespace XftWeapon
{
	inline static constexpr unsigned int VertexPool_TypeDefinitionIndex = 39302;

	class VertexPool : public ::System::Object
	{
	public:
		// static const ::System::Int32 BlockSize = 0x6C; // 0x0
		::XftWeapon::XWeaponTrail* _owner; // 0x10
		::Il2CppArray<::UnityEngine::Vector2>* UVs; // 0x18
		::UnityEngine::MeshRenderer* _meshrenderer; // 0x20
		::Il2CppArray<::UnityEngine::Vector2>* UV2s; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UV2s_List; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UVs_List; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Colors_List; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Indices_List; // 0x48
		::Il2CppArray<::UnityEngine::Vector2>* defaultUvs; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x58
		::UnityEngine::MeshFilter* _meshFilter; // 0x60
		::UnityEngine::Material* _material; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices_List; // 0x70
		::Il2CppArray<::UnityEngine::Color>* defaultColors; // 0x78
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x80
		::Il2CppArray<::System::Int32>* Indices; // 0x88
		::Il2CppArray<::System::Int32>* defaultIndices; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* defaultVertices; // 0x98
		::UnityEngine::Mesh* _mesh2d; // 0xA0
		::XftWeapon::XWeaponTrail* xWeaponCtx; // 0xA8
		::System::Int32 VertexUsed; // 0xB0
		::System::Int32 IndexTotal; // 0xB4
		::System::Boolean UVChanged; // 0xB8
		::System::Boolean VertCountChanged; // 0xB9
		::System::Boolean IndiceChanged; // 0xBA
		::System::Boolean ColorChanged; // 0xBB
		::System::Int32 VertexTotal; // 0xBC
		::System::Single ElapsedTime; // 0xC0
		::System::Int32 IndexUsed; // 0xC4
		::System::Single BoundsScheduleTime; // 0xC8
		::System::Boolean VertChanged; // 0xCC
		::System::Boolean FirstUpdate; // 0xCD
		::System::Boolean UV2Changed; // 0xCE

		::System::Void _ctor(::UnityEngine::Material* material, ::XftWeapon::XWeaponTrail* owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL__CTOR_OFFSET))(this, material, owner);
		}

		::System::Void GetVertices_GCOpt(::System::Int32 vcount, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET))(this, vcount, icount, dynamicLength);
		}

		::System::Void EnlargeArrays_GCOpt(::System::Int32 count, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET))(this, count, icount, dynamicLength);
		}

		::System::Void BeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET))(this);
		}

		::System::Void AfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET))(this);
		}

		::System::Boolean get_UseUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET))(this);
		}

		::System::Boolean get_DynamicMeshPointLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET))(this);
		}

		::System::Boolean get_VertCountChanged_ForOutter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET))(this);
		}

		::System::Void set_VertCountChanged_ForOutter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_MyMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RESET_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::System::Void SetMeshObjectActive(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET))(this, flag);
		}

		::UnityEngine::MeshRenderer* GetMeshRender()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET))(this);
		}

		::System::Void CreateMeshObj(::XftWeapon::XWeaponTrail* owner, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET))(this, owner, material);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET))(this);
		}

		::System::Void ResetUsed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET))(this);
		}

		::XftWeapon::VertexPool_VertexSegment* GetVertices(::System::Int32 vcount, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::XftWeapon::VertexPool_VertexSegment*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET))(this, vcount, icount, dynamicLength);
		}

		::System::Void BSplineResizeArray(::System::Int32 pointCnt, ::System::Int32 bSplineSplitCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET))(this, pointCnt, bSplineSplitCnt);
		}

		::System::Void BSplineResizeList(::System::Int32 pointCnt, ::System::Int32 bSplineSplitCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET))(this, pointCnt, bSplineSplitCnt);
		}

		::System::Void InitArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET))(this);
		}

		::System::Void EnlargeArrays(::System::Int32 count, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET))(this, count, icount, dynamicLength);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AdjustPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET))(this);
		}
	};
}
