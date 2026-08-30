#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VoxelIrradianceCacheProxyMode.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class VoxelIrradianceCacheData; }

#define UNITYENGINE_VOXELIRRADIANCECACHE_APPLYTOMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ED78A50)
#define UNITYENGINE_VOXELIRRADIANCECACHE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1ED789D0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_APPLYAO_OFFSET UNITYSDK_OFFSET(0x1ED78A10)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_BORDERFADE_OFFSET UNITYSDK_OFFSET(0x1ED789F0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1ED789E0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMESH_OFFSET UNITYSDK_OFFSET(0x1ED78A20)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMODE_OFFSET UNITYSDK_OFFSET(0x1ED78A30)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_ROUGHNESSBIAS_OFFSET UNITYSDK_OFFSET(0x1ED78A00)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED789C0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1ED789B0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_STRENGTHFADEFACTOR_OFFSET UNITYSDK_OFFSET(0x1ED78A40)

namespace UnityEngine
{
	inline static constexpr unsigned int VoxelIrradianceCache_TypeDefinitionIndex = 4266;

	class VoxelIrradianceCache : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::VoxelIrradianceCacheData* get_data()
		{
			return ((::UnityEngine::VoxelIrradianceCacheData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_data(::UnityEngine::VoxelIrradianceCacheData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VoxelIrradianceCacheData*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_DATA_OFFSET))(this, a1);
		}

		::System::Void set_borderFade(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_BORDERFADE_OFFSET))(this, a1);
		}

		::System::Void set_roughnessBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_ROUGHNESSBIAS_OFFSET))(this, a1);
		}

		::System::Void set_applyAO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_APPLYAO_OFFSET))(this, a1);
		}

		::System::Void set_proxyMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMESH_OFFSET))(this, a1);
		}

		::System::Void set_proxyMode(::UnityEngine::VoxelIrradianceCacheProxyMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VoxelIrradianceCacheProxyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMODE_OFFSET))(this, a1);
		}

		::System::Void set_strengthFadeFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_STRENGTHFADEFACTOR_OFFSET))(this, a1);
		}

		::System::Void ApplyToMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_APPLYTOMATERIAL_OFFSET))(this, a1);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_INJECTED_OFFSET))(this, a1);
		}
	};
}
