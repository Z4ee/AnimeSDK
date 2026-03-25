#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/VoxelIrradianceCacheProxyMode.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class VoxelIrradianceCacheData; }

#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_APPLYAO_OFFSET UNITYSDK_OFFSET(0x18A61580)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_BORDERFADE_OFFSET UNITYSDK_OFFSET(0x18A61560)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x18A61550)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMESH_OFFSET UNITYSDK_OFFSET(0x18A61590)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMODE_OFFSET UNITYSDK_OFFSET(0x18A615A0)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_ROUGHNESSBIAS_OFFSET UNITYSDK_OFFSET(0x18A61570)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A61540)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x18A61530)
#define UNITYENGINE_VOXELIRRADIANCECACHE_SET_STRENGTHFADEFACTOR_OFFSET UNITYSDK_OFFSET(0x18A615B0)

namespace UnityEngine
{
	inline static constexpr unsigned int VoxelIrradianceCache_TypeDefinitionIndex = 4075;

	class VoxelIrradianceCache : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void set_data(::UnityEngine::VoxelIrradianceCacheData* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VoxelIrradianceCacheData*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_DATA_OFFSET))(this, value);
		}

		::System::Void set_borderFade(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_BORDERFADE_OFFSET))(this, value);
		}

		::System::Void set_roughnessBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_ROUGHNESSBIAS_OFFSET))(this, value);
		}

		::System::Void set_applyAO(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_APPLYAO_OFFSET))(this, value);
		}

		::System::Void set_proxyMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMESH_OFFSET))(this, value);
		}

		::System::Void set_proxyMode(::UnityEngine::VoxelIrradianceCacheProxyMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::VoxelIrradianceCacheProxyMode))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_PROXYMODE_OFFSET))(this, value);
		}

		::System::Void set_strengthFadeFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_STRENGTHFADEFACTOR_OFFSET))(this, value);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_VOXELIRRADIANCECACHE_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
