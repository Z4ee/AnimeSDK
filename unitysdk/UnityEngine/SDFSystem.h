#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class SDFSectorData; }
namespace UnityEngine { class SDFStreamingParams; }

#define UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET UNITYSDK_OFFSET(0x1BFAE1A0)
#define UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BFAE080)
#define UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET UNITYSDK_OFFSET(0x1BFAE180)
#define UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BFAE100)
#define UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET UNITYSDK_OFFSET(0x1BFAE1B0)

namespace UnityEngine
{
	inline static constexpr unsigned int SDFSystem_TypeDefinitionIndex = 4253;

	class SDFSystem : public ::UnityEngine::Behaviour
	{
	public:
		::System::Action_1<::UnityEngine::SDFStreamingParams*>* streamingCallback; // 0x18

		::System::Void add_streamingCallback(::System::Action_1<::UnityEngine::SDFStreamingParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::SDFStreamingParams*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_streamingCallback(::System::Action_1<::UnityEngine::SDFStreamingParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::SDFStreamingParams*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void NotifyStreaming(::UnityEngine::SDFStreamingParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFStreamingParams*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET))(this, a1);
		}

		::System::Void AddSectorData(::UnityEngine::SDFSectorData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET))(this, a1);
		}

		::System::Void UnloadSectorData(::UnityEngine::SDFSectorData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET))(this, a1);
		}
	};
}
