#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeApplyHistory.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_ADDTOCHECK_OFFSET UNITYSDK_OFFSET(0x988D20)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_BEGINCHECK_OFFSET UNITYSDK_OFFSET(0x988D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_CHECKISCACHED_OFFSET UNITYSDK_OFFSET(0x988D80)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x988D90)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x988CA0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeApplyCache_TypeDefinitionIndex = 6062;

	struct alignas(8) VolumeApplyCache
	{
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeApplyHistory>* m_History; // 0x10
		::System::Int32 m_HistoryCount; // 0x18
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeApplyHistory>* m_Current; // 0x20
		::System::Int32 m_CurrentCount; // 0x28

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_INITIALIZE_OFFSET))(this);
		}

		::System::Void BeginCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_BEGINCHECK_OFFSET))(this);
		}

		::System::Void AddToCheck(::System::Single weight, ::System::Int32 version, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_ADDTOCHECK_OFFSET))(this, weight, version, comps);
		}

		::System::Boolean CheckIsCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_CHECKISCACHED_OFFSET))(this);
		}

		::System::Int32 GetCurrent(::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeApplyHistory>*& current)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeApplyHistory>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEAPPLYCACHE_GETCURRENT_OFFSET))(this, current);
		}
	};
}
