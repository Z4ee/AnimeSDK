#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TerrainData_BoundaryValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Terrain; }

#define UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C39FC60)
#define UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET UNITYSDK_OFFSET(0x1C39FBB0)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C39FC50)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1C39D650)
#define UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET UNITYSDK_OFFSET(0x1C39B1E0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C39FC40)
#define UNITYENGINE_TERRAINDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C39FC70)
#define UNITYENGINE_TERRAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39FBC0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainData_TypeDefinitionIndex = 30926;

	class TerrainData : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_k_MinimumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B50);
		}
		static ::System::Int32* StaticGet_k_MaximumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B54);
		}
		static ::System::Int32* StaticGet_k_MinimumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B58);
		}
		static ::System::Int32* StaticGet_k_MaximumResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B5C);
		}
		static ::System::Int32* StaticGet_k_MinimumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B60);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B64);
		}
		static ::System::Int32* StaticGet_k_MaximumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B68);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailsPerRes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B6C);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailPatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x7B70);
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

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Single GetAlphamapResolutionInternal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Terrain*>* get_users()
		{
			return ((::Il2CppArray<::UnityEngine::Terrain*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET))(this);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}
	};
}
