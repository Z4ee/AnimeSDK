#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TerrainData_BoundaryValueType.h"
#include "unitysdk/UnityEngine/TreeInstance.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class DetailPrototype; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class TerrainLayer; }
namespace UnityEngine { class TreePrototype; }

#define UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B345860)
#define UNITYENGINE_TERRAINDATA_GETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x1B345560)
#define UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET UNITYSDK_OFFSET(0x1B344AD0)
#define UNITYENGINE_TERRAINDATA_GETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B344D10)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B345880)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPLAYERS_OFFSET UNITYSDK_OFFSET(0x1B345550)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345600)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPWIDTH_OFFSET UNITYSDK_OFFSET(0x1B345870)
#define UNITYENGINE_TERRAINDATA_GET_DETAILRESOLUTIONPERPATCH_OFFSET UNITYSDK_OFFSET(0x1B345450)
#define UNITYENGINE_TERRAINDATA_GET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B344B50)
#define UNITYENGINE_TERRAINDATA_GET_INTERNALHEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B344B60)
#define UNITYENGINE_TERRAINDATA_GET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345610)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B344CE0)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B343270)
#define UNITYENGINE_TERRAINDATA_GET_TERRAINLAYERS_OFFSET UNITYSDK_OFFSET(0x1B344AB0)
#define UNITYENGINE_TERRAINDATA_GET_TREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B345500)
#define UNITYENGINE_TERRAINDATA_GET_TREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x1B345530)
#define UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET UNITYSDK_OFFSET(0x1B341EE0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B344B40)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x1B3455F0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B344DD0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B345510)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x1B345A00)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILLAYER_OFFSET UNITYSDK_OFFSET(0x1B3454F0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345440)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B345050)
#define UNITYENGINE_TERRAINDATA_REFRESHPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x1B345460)
#define UNITYENGINE_TERRAINDATA_SETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x1B345890)
#define UNITYENGINE_TERRAINDATA_SETDETAILLAYER_OFFSET UNITYSDK_OFFSET(0x1B345480)
#define UNITYENGINE_TERRAINDATA_SETDETAILRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345060)
#define UNITYENGINE_TERRAINDATA_SETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B344DE0)
#define UNITYENGINE_TERRAINDATA_SETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B345520)
#define UNITYENGINE_TERRAINDATA_SET_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345620)
#define UNITYENGINE_TERRAINDATA_SET_DETAILPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x1B345470)
#define UNITYENGINE_TERRAINDATA_SET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B344B70)
#define UNITYENGINE_TERRAINDATA_SET_INTERNALHEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B344CD0)
#define UNITYENGINE_TERRAINDATA_SET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B345850)
#define UNITYENGINE_TERRAINDATA_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B344D00)
#define UNITYENGINE_TERRAINDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B344CF0)
#define UNITYENGINE_TERRAINDATA_SET_TERRAINLAYERS_OFFSET UNITYSDK_OFFSET(0x1B345A10)
#define UNITYENGINE_TERRAINDATA_SET_TREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x1B345540)
#define UNITYENGINE_TERRAINDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B345A20)
#define UNITYENGINE_TERRAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B344AE0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainData_TypeDefinitionIndex = 5321;

	class TerrainData : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_k_MinimumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x310);
		}
		static ::System::Int32* StaticGet_k_MinimumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x314);
		}
		static ::System::Int32* StaticGet_k_MaximumResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x318);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailPatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x31C);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x320);
		}
		static ::System::Int32* StaticGet_k_MaximumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x324);
		}
		static ::System::Int32* StaticGet_k_MaximumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x328);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailsPerRes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x32C);
		}
		static ::System::Int32* StaticGet_k_MinimumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x330);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType a1)
		{
			return ((::System::Int32(*)(::UnityEngine::TerrainData_BoundaryValueType))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET))(a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::TerrainData* a1)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Int32 get_heightmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_HEIGHTMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_heightmapResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_HEIGHTMAPRESOLUTION_OFFSET))(this, a1);
		}

		::System::Int32 get_internalHeightmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_INTERNALHEIGHTMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_internalHeightmapResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_INTERNALHEIGHTMAPRESOLUTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_SIZE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* GetHeights(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETHEIGHTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Single>* Internal_GetHeights(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETHEIGHTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetHeights(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETHEIGHTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_SetHeights(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETHEIGHTS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetDetailResolution(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETDETAILRESOLUTION_OFFSET))(this, a1, a2);
		}

		::System::Void Internal_SetDetailResolution(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILRESOLUTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_detailResolutionPerPatch()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_DETAILRESOLUTIONPERPATCH_OFFSET))(this);
		}

		::System::Void RefreshPrototypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_REFRESHPROTOTYPES_OFFSET))(this);
		}

		::System::Void set_detailPrototypes(::Il2CppArray<::UnityEngine::DetailPrototype*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::DetailPrototype*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_DETAILPROTOTYPES_OFFSET))(this, a1);
		}

		::System::Void SetDetailLayer(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETDETAILLAYER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Internal_SetDetailLayer(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILLAYER_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Il2CppArray<::UnityEngine::TreeInstance>* get_treeInstances()
		{
			return ((::Il2CppArray<::UnityEngine::TreeInstance>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TREEINSTANCES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::TreeInstance>* Internal_GetTreeInstances()
		{
			return ((::Il2CppArray<::UnityEngine::TreeInstance>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETTREEINSTANCES_OFFSET))(this);
		}

		::System::Void SetTreeInstances(::Il2CppArray<::UnityEngine::TreeInstance>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TreeInstance>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETTREEINSTANCES_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::TreePrototype*>* get_treePrototypes()
		{
			return ((::Il2CppArray<::UnityEngine::TreePrototype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TREEPROTOTYPES_OFFSET))(this);
		}

		::System::Void set_treePrototypes(::Il2CppArray<::UnityEngine::TreePrototype*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TreePrototype*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_TREEPROTOTYPES_OFFSET))(this, a1);
		}

		::System::Int32 get_alphamapLayers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPLAYERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetAlphamaps(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPS_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::System::Single>* Internal_GetAlphamaps(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETALPHAMAPS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_alphamapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_alphamapResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_ALPHAMAPRESOLUTION_OFFSET))(this, a1);
		}

		::System::Single GetAlphamapResolutionInternal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_Internal_alphamapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_Internal_alphamapResolution(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET))(this, a1);
		}

		::System::Int32 get_alphamapWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPWIDTH_OFFSET))(this);
		}

		::System::Int32 get_alphamapHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPHEIGHT_OFFSET))(this);
		}

		::System::Void SetAlphamaps(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETALPHAMAPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_SetAlphamaps(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETALPHAMAPS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::TerrainLayer*>* get_terrainLayers()
		{
			return ((::Il2CppArray<::UnityEngine::TerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TERRAINLAYERS_OFFSET))(this);
		}

		::System::Void set_terrainLayers(::Il2CppArray<::UnityEngine::TerrainLayer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_TERRAINLAYERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Terrain*>* get_users()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET))(this);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}
	};
}
