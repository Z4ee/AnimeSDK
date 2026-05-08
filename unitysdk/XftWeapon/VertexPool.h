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

#define XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET UNITYSDK_OFFSET(0x1B172B90)
#define XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1B170290)
#define XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1B16F7D0)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1B171EC0)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET UNITYSDK_OFFSET(0x1B1720F0)
#define XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET UNITYSDK_OFFSET(0x1B170C40)
#define XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B171680)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET UNITYSDK_OFFSET(0x1B16F7B0)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET UNITYSDK_OFFSET(0x1B171C50)
#define XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET UNITYSDK_OFFSET(0x1B170C30)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET UNITYSDK_OFFSET(0x1B16F780)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1B171AB0)
#define XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B1700F0)
#define XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET UNITYSDK_OFFSET(0x1B170520)
#define XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET UNITYSDK_OFFSET(0x1B16FF90)
#define XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1B170500)
#define XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET UNITYSDK_OFFSET(0x1B170970)
#define XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B1721E0)
#define XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B1706C0)
#define XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET UNITYSDK_OFFSET(0x1B171970)
#define XFTWEAPON_VERTEXPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1B1706A0)
#define XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B1706E0)
#define XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1B170510)
#define XFTWEAPON_VERTEXPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B171990)

namespace XftWeapon
{
	inline static constexpr unsigned int VertexPool_TypeDefinitionIndex = 37676;

	class VertexPool : public ::System::Object
	{
	public:
		// static const ::System::Int32 BlockSize = 0x6C; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* defaultVertices; // 0x10
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x18
		::XftWeapon::XWeaponTrail* _owner; // 0x20
		::UnityEngine::Mesh* _mesh2d; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices_List; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Colors_List; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UVs_List; // 0x40
		::UnityEngine::Material* _material; // 0x48
		::Il2CppArray<::UnityEngine::Vector2>* UV2s; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* Indices_List; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* UVs; // 0x60
		::Il2CppArray<::System::Int32>* defaultIndices; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UV2s_List; // 0x70
		::Il2CppArray<::UnityEngine::Color>* defaultColors; // 0x78
		::UnityEngine::MeshFilter* _meshFilter; // 0x80
		::UnityEngine::MeshRenderer* _meshrenderer; // 0x88
		::Il2CppArray<::System::Int32>* Indices; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x98
		::Il2CppArray<::UnityEngine::Vector2>* defaultUvs; // 0xA0
		::XftWeapon::XWeaponTrail* xWeaponCtx; // 0xA8
		::System::Int32 VertexTotal; // 0xB0
		::System::Int32 IndexUsed; // 0xB4
		::System::Boolean VertCountChanged; // 0xB8
		::System::Boolean ColorChanged; // 0xB9
		::System::Boolean FirstUpdate; // 0xBA
		::System::Single BoundsScheduleTime; // 0xBC
		::System::Boolean VertChanged; // 0xC0
		::System::Boolean UV2Changed; // 0xC1
		::System::Boolean IndiceChanged; // 0xC2
		::System::Boolean UVChanged; // 0xC3
		::System::Single ElapsedTime; // 0xC4
		::System::Int32 IndexTotal; // 0xC8
		::System::Int32 VertexUsed; // 0xCC

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
