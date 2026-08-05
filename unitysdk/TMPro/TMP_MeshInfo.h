#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/TMPro/VertexSortingOrder.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_1_OFFSET UNITYSDK_OFFSET(0xAB2F60)
#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_2_OFFSET UNITYSDK_OFFSET(0xAB2F90)
#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xAB2F20)
#define TMPRO_TMP_MESHINFO_CLEAR_1_OFFSET UNITYSDK_OFFSET(0xAB2F10)
#define TMPRO_TMP_MESHINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xAB2F00)
#define TMPRO_TMP_MESHINFO_RESIZEMESHINFO_1_OFFSET UNITYSDK_OFFSET(0xAB2EF0)
#define TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET UNITYSDK_OFFSET(0xAB2EE0)
#define TMPRO_TMP_MESHINFO_SORTGEOMETRY_1_OFFSET UNITYSDK_OFFSET(0xAB3010)
#define TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET UNITYSDK_OFFSET(0xAB2FA0)
#define TMPRO_TMP_MESHINFO_SWAPVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xAB3020)
#define TMPRO_TMP_MESHINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7D8720)
#define TMPRO_TMP_MESHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAB2ED0)
#define TMPRO_TMP_MESHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2EC0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MeshInfo_TypeDefinitionIndex = 39844;

	struct alignas(8) TMP_MeshInfo
	{
		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(TMP_MeshInfo_TypeDefinitionIndex)->GetStaticField(0x98D0);
		}
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(TMP_MeshInfo_TypeDefinitionIndex)->GetStaticField(0x98DC);
		}
		static ::UnityEngine::Color32* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(TMP_MeshInfo_TypeDefinitionIndex)->GetStaticField(0x98EC);
		}
		static ::UnityEngine::Bounds* StaticGet_s_DefaultBounds()
		{
			return (::UnityEngine::Bounds*)Il2CppClass::FromTypeDefinitionIndex(TMP_MeshInfo_TypeDefinitionIndex)->GetStaticField(0x98F0);
		}
		::UnityEngine::Mesh* mesh; // 0x10
		::System::Int32 vertexCount; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x28
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x30
		::Il2CppArray<::UnityEngine::Vector2>* uvs0; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* uvs2; // 0x40
		::Il2CppArray<::UnityEngine::Color32>* colors32; // 0x48
		::Il2CppArray<::System::Int32>* triangles; // 0x50
		::UnityEngine::Material* material; // 0x58

		::System::Void _ctor(::UnityEngine::Mesh* mesh, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO__CTOR_OFFSET))(this, mesh, size);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* mesh, ::System::Int32 size, ::System::Boolean isVolumetric)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO__CTOR_1_OFFSET))(this, mesh, size, isVolumetric);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO__CCTOR_OFFSET))();
		}

		::System::Void ResizeMeshInfo(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET))(this, size);
		}

		::System::Void ResizeMeshInfo_1(::System::Int32 size, ::System::Boolean isVolumetric)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_RESIZEMESHINFO_1_OFFSET))(this, size, isVolumetric);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEAR_OFFSET))(this);
		}

		::System::Void Clear_1(::System::Boolean uploadChanges)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEAR_1_OFFSET))(this, uploadChanges);
		}

		::System::Void ClearUnusedVertices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET))(this);
		}

		::System::Void ClearUnusedVertices_1(::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_1_OFFSET))(this, startIndex);
		}

		::System::Void ClearUnusedVertices_2(::System::Int32 startIndex, ::System::Boolean updateMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_2_OFFSET))(this, startIndex, updateMesh);
		}

		::System::Void SortGeometry(::TMPro::VertexSortingOrder order)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::VertexSortingOrder))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET))(this, order);
		}

		::System::Void SortGeometry_1(::System::Collections::Generic::IList_1<::System::Int32>* sortingOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SORTGEOMETRY_1_OFFSET))(this, sortingOrder);
		}

		::System::Void SwapVertexData(::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SWAPVERTEXDATA_OFFSET))(this, src, dst);
		}
	};
}
