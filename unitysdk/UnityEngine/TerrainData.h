#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/TerrainData_BoundaryValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Terrain; }

#define UNITYENGINE_TERRAINDATA_GETALPHAMAPRESOLUTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E6DB970)
#define UNITYENGINE_TERRAINDATA_GETBOUNDARYVALUE_OFFSET UNITYSDK_OFFSET(0x1E6DB8C0)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E6DB960)
#define UNITYENGINE_TERRAINDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E6D9370)
#define UNITYENGINE_TERRAINDATA_GET_USERS_OFFSET UNITYSDK_OFFSET(0x1E6D6EF0)
#define UNITYENGINE_TERRAINDATA_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6DB950)
#define UNITYENGINE_TERRAINDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB980)
#define UNITYENGINE_TERRAINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainData_TypeDefinitionIndex = 32477;

	class TerrainData : public ::UnityEngine::Object
	{
	public:
		static ::System::Int32* StaticGet_k_MinimumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8000);
		}
		static ::System::Int32* StaticGet_k_MinimumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8004);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailsPerRes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8008);
		}
		static ::System::Int32* StaticGet_k_MaximumResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x800C);
		}
		static ::System::Int32* StaticGet_k_MinimumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8010);
		}
		static ::System::Int32* StaticGet_k_MaximumAlphamapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8014);
		}
		static ::System::Int32* StaticGet_k_MaximumBaseMapResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8018);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailResolutionPerPatch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x801C);
		}
		static ::System::Int32* StaticGet_k_MaximumDetailPatchCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainData_TypeDefinitionIndex)->GetStaticField(0x8020);
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
