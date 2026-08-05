#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine::Rendering::Universal { class SRPBatcherProfiler_RecorderEntry; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D606220)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_ONGUI_OFFSET UNITYSDK_OFFSET(0x1D606E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RAZCOUNTERS_OFFSET UNITYSDK_OFFSET(0x1D606900)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RESETSTATS_OFFSET UNITYSDK_OFFSET(0x1D606830)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_TOGGLESTATS_OFFSET UNITYSDK_OFFSET(0x1D606980)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D6069D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D607050)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_TypeDefinitionIndex = 27756;

	class SRPBatcherProfiler : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single kAverageStatDuration; // 0x0
		::System::Boolean m_Enable; // 0x18
		::System::Int32 m_frameCount; // 0x1C
		::System::Single m_AccDeltaTime; // 0x20
		::System::String* m_statsLabel; // 0x28
		::UnityEngine::GUIStyle* m_style; // 0x30
		::System::Boolean m_oldBatcherEnable; // 0x38
		::Il2CppArray<::UnityEngine::Rendering::Universal::SRPBatcherProfiler_RecorderEntry*>* recordersList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_AWAKE_OFFSET))(this);
		}

		::System::Void RazCounters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RAZCOUNTERS_OFFSET))(this);
		}

		::System::Void ResetStats()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_RESETSTATS_OFFSET))(this);
		}

		::System::Void ToggleStats()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_TOGGLESTATS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_UPDATE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SRPBATCHERPROFILER_ONGUI_OFFSET))(this);
		}
	};
}
