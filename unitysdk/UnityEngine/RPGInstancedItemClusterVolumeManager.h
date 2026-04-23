#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A46B010)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1A46B000)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x1A46B030)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A46AFD0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A46AFF0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1A46B020)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A46AFE0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGInstancedItemClusterVolumeManager_TypeDefinitionIndex = 4102;

	class RPGInstancedItemClusterVolumeManager : public ::UnityEngine::Behaviour
	{
	public:
		::System::UInt32 get_LayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_LayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET))(this, value);
		}

		::System::Void Init(::UnityEngine::Material* clusterMaterial, ::System::Int32 oneVertexFloat4Count, ::System::Int32 oneClusterIndexCount, ::System::Int32 matParamFloat4Count, ::System::Boolean isHierarchyCluster)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET))(this, clusterMaterial, oneVertexFloat4Count, oneClusterIndexCount, matParamFloat4Count, isHierarchyCluster);
		}

		::System::Void AddVolume(::System::UInt64& volumeKey, ::UnityEngine::IRIClusterVolumeInfo volumeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET))(this, volumeKey, volumeInfo);
		}

		::System::Boolean RemoveVolumeUseVolumeKey(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET))(this, volumeKey);
		}

		::System::Void DirtyMatrixBuffer(::System::UInt64 volumeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET))(this, volumeKey);
		}

		::System::Void AddVolume_Injected(::System::UInt64& volumeKey, ::UnityEngine::IRIClusterVolumeInfo& volumeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET))(this, volumeKey, volumeInfo);
		}
	};
}
