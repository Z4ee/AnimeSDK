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

#define UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x18ABE4B0)
#define UNITYENGINE_TERRAINDATA_GETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x18ABE170)
#define UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET UNITYSDK_OFFSET(0x18ABD6A0)
#define UNITYENGINE_TERRAINDATA_GETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x18ABD8E0)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPHEIGHT_OFFSET UNITYSDK_OFFSET(0x18ABE4D0)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPLAYERS_OFFSET UNITYSDK_OFFSET(0x18ABE160)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABE210)
#define UNITYENGINE_TERRAINDATA_GET_ALPHAMAPWIDTH_OFFSET UNITYSDK_OFFSET(0x18ABE4C0)
#define UNITYENGINE_TERRAINDATA_GET_DETAILRESOLUTIONPERPATCH_OFFSET UNITYSDK_OFFSET(0x18ABE060)
#define UNITYENGINE_TERRAINDATA_GET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABD720)
#define UNITYENGINE_TERRAINDATA_GET_INTERNALHEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABD730)
#define UNITYENGINE_TERRAINDATA_GET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABE220)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABD8B0)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18ABB850)
#define UNITYENGINE_TERRAINDATA_GET_TERRAINLAYERS_OFFSET UNITYSDK_OFFSET(0x18ABD680)
#define UNITYENGINE_TERRAINDATA_GET_TREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x18ABE110)
#define UNITYENGINE_TERRAINDATA_GET_TREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x18ABE140)
#define UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET UNITYSDK_OFFSET(0x18AB9500)
#define UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x18ABD710)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x18ABE200)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x18ABD9A0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_GETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x18ABE120)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x18ABE650)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILLAYER_OFFSET UNITYSDK_OFFSET(0x18ABE100)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABE050)
#define UNITYENGINE_TERRAINDATA_INTERNAL_SETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x18ABDC20)
#define UNITYENGINE_TERRAINDATA_REFRESHPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x18ABE070)
#define UNITYENGINE_TERRAINDATA_SETALPHAMAPS_OFFSET UNITYSDK_OFFSET(0x18ABE4E0)
#define UNITYENGINE_TERRAINDATA_SETDETAILLAYER_OFFSET UNITYSDK_OFFSET(0x18ABE090)
#define UNITYENGINE_TERRAINDATA_SETDETAILRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABDC30)
#define UNITYENGINE_TERRAINDATA_SETHEIGHTS_OFFSET UNITYSDK_OFFSET(0x18ABD9B0)
#define UNITYENGINE_TERRAINDATA_SETTREEINSTANCES_OFFSET UNITYSDK_OFFSET(0x18ABE130)
#define UNITYENGINE_TERRAINDATA_SET_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABE230)
#define UNITYENGINE_TERRAINDATA_SET_DETAILPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x18ABE080)
#define UNITYENGINE_TERRAINDATA_SET_HEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABD740)
#define UNITYENGINE_TERRAINDATA_SET_INTERNALHEIGHTMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABD8A0)
#define UNITYENGINE_TERRAINDATA_SET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET UNITYSDK_OFFSET(0x18ABE4A0)
#define UNITYENGINE_TERRAINDATA_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18ABD8D0)
#define UNITYENGINE_TERRAINDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x18ABD8C0)
#define UNITYENGINE_TERRAINDATA_SET_TERRAINLAYERS_OFFSET UNITYSDK_OFFSET(0x18ABE660)
#define UNITYENGINE_TERRAINDATA_SET_TREEPROTOTYPES_OFFSET UNITYSDK_OFFSET(0x18ABE150)
#define UNITYENGINE_TERRAINDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABE670)
#define UNITYENGINE_TERRAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABD6B0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainData_TypeDefinitionIndex = 5234;

	class TerrainData : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_k_MinimumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x270);
		}
		static ::System::Int32* StaticGet_k_MaximumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x274);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x278);
		}
		static ::System::Int32* StaticGet_k_MinimumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x27C);
		}
		static ::System::Int32* StaticGet_k_MaximumResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x280);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailPatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x284);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailsPerRes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x288);
		}
		static ::System::Int32* StaticGet_k_MinimumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x28C);
		}
		static ::System::Int32* StaticGet_k_MaximumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetBoundaryValue(::UnityEngine::TerrainData_BoundaryValueType type)
		{
			return ((::System::Int32(*)(::UnityEngine::TerrainData_BoundaryValueType))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET))(type);
		}

		static ::System::Void Internal_Create(::UnityEngine::TerrainData* terrainData)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainData*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET))(terrainData);
		}

		::System::Int32 get_heightmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_HEIGHTMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_heightmapResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_HEIGHTMAPRESOLUTION_OFFSET))(this, value);
		}

		::System::Int32 get_internalHeightmapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_INTERNALHEIGHTMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_internalHeightmapResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_INTERNALHEIGHTMAPRESOLUTION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_SIZE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* GetHeights(::System::Int32 xBase, ::System::Int32 yBase, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETHEIGHTS_OFFSET))(this, xBase, yBase, width, height);
		}

		::Il2CppArray<::System::Single>* Internal_GetHeights(::System::Int32 xBase, ::System::Int32 yBase, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETHEIGHTS_OFFSET))(this, xBase, yBase, width, height);
		}

		::System::Void SetHeights(::System::Int32 xBase, ::System::Int32 yBase, ::Il2CppArray<::System::Single>* heights)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETHEIGHTS_OFFSET))(this, xBase, yBase, heights);
		}

		::System::Void Internal_SetHeights(::System::Int32 xBase, ::System::Int32 yBase, ::System::Int32 width, ::System::Int32 height, ::Il2CppArray<::System::Single>* heights)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETHEIGHTS_OFFSET))(this, xBase, yBase, width, height, heights);
		}

		::System::Void SetDetailResolution(::System::Int32 detailResolution, ::System::Int32 resolutionPerPatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETDETAILRESOLUTION_OFFSET))(this, detailResolution, resolutionPerPatch);
		}

		::System::Void Internal_SetDetailResolution(::System::Int32 patchCount, ::System::Int32 resolutionPerPatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILRESOLUTION_OFFSET))(this, patchCount, resolutionPerPatch);
		}

		::System::Int32 get_detailResolutionPerPatch()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_DETAILRESOLUTIONPERPATCH_OFFSET))(this);
		}

		::System::Void RefreshPrototypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_REFRESHPROTOTYPES_OFFSET))(this);
		}

		::System::Void set_detailPrototypes(::Il2CppArray<::UnityEngine::DetailPrototype*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::DetailPrototype*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_DETAILPROTOTYPES_OFFSET))(this, value);
		}

		::System::Void SetDetailLayer(::System::Int32 xBase, ::System::Int32 yBase, ::System::Int32 layer, ::Il2CppArray<::System::Int32>* details)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETDETAILLAYER_OFFSET))(this, xBase, yBase, layer, details);
		}

		::System::Void Internal_SetDetailLayer(::System::Int32 xBase, ::System::Int32 yBase, ::System::Int32 totalWidth, ::System::Int32 totalHeight, ::System::Int32 detailIndex, ::Il2CppArray<::System::Int32>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETDETAILLAYER_OFFSET))(this, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
		}

		::Il2CppArray<::UnityEngine::TreeInstance>* get_treeInstances()
		{
			return ((::Il2CppArray<::UnityEngine::TreeInstance>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TREEINSTANCES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::TreeInstance>* Internal_GetTreeInstances()
		{
			return ((::Il2CppArray<::UnityEngine::TreeInstance>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETTREEINSTANCES_OFFSET))(this);
		}

		::System::Void SetTreeInstances(::Il2CppArray<::UnityEngine::TreeInstance>* instances, ::System::Boolean snapToHeightmap)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TreeInstance>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETTREEINSTANCES_OFFSET))(this, instances, snapToHeightmap);
		}

		::Il2CppArray<::UnityEngine::TreePrototype*>* get_treePrototypes()
		{
			return ((::Il2CppArray<::UnityEngine::TreePrototype*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TREEPROTOTYPES_OFFSET))(this);
		}

		::System::Void set_treePrototypes(::Il2CppArray<::UnityEngine::TreePrototype*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TreePrototype*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_TREEPROTOTYPES_OFFSET))(this, value);
		}

		::System::Int32 get_alphamapLayers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPLAYERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetAlphamaps(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPS_OFFSET))(this, x, y, width, height);
		}

		::Il2CppArray<::System::Single>* Internal_GetAlphamaps(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_GETALPHAMAPS_OFFSET))(this, x, y, width, height);
		}

		::System::Int32 get_alphamapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_alphamapResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_ALPHAMAPRESOLUTION_OFFSET))(this, value);
		}

		::System::Single GetAlphamapResolutionInternal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET))(this);
		}

		::System::Int32 get_Internal_alphamapResolution()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET))(this);
		}

		::System::Void set_Internal_alphamapResolution(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_INTERNAL_ALPHAMAPRESOLUTION_OFFSET))(this, value);
		}

		::System::Int32 get_alphamapWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPWIDTH_OFFSET))(this);
		}

		::System::Int32 get_alphamapHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_ALPHAMAPHEIGHT_OFFSET))(this);
		}

		::System::Void SetAlphamaps(::System::Int32 x, ::System::Int32 y, ::Il2CppArray<::System::Single>* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SETALPHAMAPS_OFFSET))(this, x, y, map);
		}

		::System::Void Internal_SetAlphamaps(::System::Int32 x, ::System::Int32 y, ::System::Int32 width, ::System::Int32 height, ::Il2CppArray<::System::Single>* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_INTERNAL_SETALPHAMAPS_OFFSET))(this, x, y, width, height, map);
		}

		::Il2CppArray<::UnityEngine::TerrainLayer*>* get_terrainLayers()
		{
			return ((::Il2CppArray<::UnityEngine::TerrainLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_TERRAINLAYERS_OFFSET))(this);
		}

		::System::Void set_terrainLayers(::Il2CppArray<::UnityEngine::TerrainLayer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::TerrainLayer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_TERRAINLAYERS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Terrain*>* get_users()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET))(this);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
