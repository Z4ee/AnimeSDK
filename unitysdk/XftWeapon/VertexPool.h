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

#define XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET UNITYSDK_OFFSET(0x1E922810)
#define XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E91FF00)
#define XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1E91F470)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1E921B40)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET UNITYSDK_OFFSET(0x1E921D60)
#define XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET UNITYSDK_OFFSET(0x1E9208C0)
#define XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E9212C0)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET UNITYSDK_OFFSET(0x1E91F440)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET UNITYSDK_OFFSET(0x1E9218B0)
#define XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET UNITYSDK_OFFSET(0x1E9208B0)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET UNITYSDK_OFFSET(0x1E91F400)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1E9216F0)
#define XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1E91FD70)
#define XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET UNITYSDK_OFFSET(0x1E9201B0)
#define XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET UNITYSDK_OFFSET(0x1E91FC20)
#define XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1E920190)
#define XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET UNITYSDK_OFFSET(0x1E9205F0)
#define XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E921E60)
#define XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E920350)
#define XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET UNITYSDK_OFFSET(0x1E9215B0)
#define XFTWEAPON_VERTEXPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1E920330)
#define XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1E920370)
#define XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1E9201A0)
#define XFTWEAPON_VERTEXPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9215D0)

namespace XftWeapon
{
	inline static constexpr unsigned int VertexPool_TypeDefinitionIndex = 39968;

	class VertexPool : public ::System::Object
	{
	public:
		// static const ::System::Int32 BlockSize = 0x6C; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UVs_List; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UV2s_List; // 0x18
		::Il2CppArray<::System::Int32>* Indices; // 0x20
		::XftWeapon::XWeaponTrail* xWeaponCtx; // 0x28
		::UnityEngine::Material* _material; // 0x30
		::Il2CppArray<::UnityEngine::Vector2>* UVs; // 0x38
		::UnityEngine::MeshRenderer* _meshrenderer; // 0x40
		::UnityEngine::Mesh* _mesh2d; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x50
		::XftWeapon::XWeaponTrail* _owner; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* UV2s; // 0x60
		::Il2CppArray<::UnityEngine::Vector2>* defaultUvs; // 0x68
		::UnityEngine::MeshFilter* _meshFilter; // 0x70
		::Il2CppArray<::UnityEngine::Vector3>* defaultVertices; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Colors_List; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* Indices_List; // 0x88
		::Il2CppArray<::System::Int32>* defaultIndices; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices_List; // 0x98
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0xA0
		::Il2CppArray<::UnityEngine::Color>* defaultColors; // 0xA8
		::System::Int32 IndexTotal; // 0xB0
		::System::Int32 VertexTotal; // 0xB4
		::System::Boolean FirstUpdate; // 0xB8
		::System::Boolean UV2Changed; // 0xB9
		::System::Boolean ColorChanged; // 0xBA
		::System::Boolean IndiceChanged; // 0xBB
		::System::Single ElapsedTime; // 0xBC
		::System::Int32 VertexUsed; // 0xC0
		::System::Single BoundsScheduleTime; // 0xC4
		::System::Int32 IndexUsed; // 0xC8
		::System::Boolean UVChanged; // 0xCC
		::System::Boolean VertCountChanged; // 0xCD
		::System::Boolean VertChanged; // 0xCE

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
