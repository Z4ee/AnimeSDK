#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDF5F40)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1CDF5F30)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x1CDF5F60)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1CDF5F00)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CDF5F20)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1CDF5F50)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1CDF5F10)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGInstancedItemClusterVolumeManager_TypeDefinitionIndex = 4281;

	class RPGInstancedItemClusterVolumeManager : public ::UnityEngine::Behaviour
	{
	public:
		::System::UInt32 get_LayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_LayerMask(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET))(this, a1);
		}

		::System::Void Init(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddVolume(::System::UInt64& a1, ::UnityEngine::IRIClusterVolumeInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveVolumeUseVolumeKey(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET))(this, a1);
		}

		::System::Void DirtyMatrixBuffer(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET))(this, a1);
		}

		::System::Void AddVolume_Injected(::System::UInt64& a1, ::UnityEngine::IRIClusterVolumeInfo& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
