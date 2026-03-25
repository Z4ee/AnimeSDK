#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class SDFSectorData; }
namespace UnityEngine { class SDFStreamingParams; }

#define UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET UNITYSDK_OFFSET(0x18A4BE30)
#define UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A4BD10)
#define UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET UNITYSDK_OFFSET(0x18A4BE10)
#define UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A4BD90)
#define UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET UNITYSDK_OFFSET(0x18A4BE40)

namespace UnityEngine
{
	inline static constexpr unsigned int SDFSystem_TypeDefinitionIndex = 4072;

	class SDFSystem : public ::UnityEngine::Behaviour
	{
	public:
		::System::Action_1<::UnityEngine::SDFStreamingParams*>* streamingCallback; // 0x18

		::System::Void add_streamingCallback(::System::Action_1<::UnityEngine::SDFStreamingParams*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::SDFStreamingParams*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADD_STREAMINGCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_streamingCallback(::System::Action_1<::UnityEngine::SDFStreamingParams*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::SDFStreamingParams*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_REMOVE_STREAMINGCALLBACK_OFFSET))(this, value);
		}

		::System::Void NotifyStreaming(::UnityEngine::SDFStreamingParams* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFStreamingParams*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_NOTIFYSTREAMING_OFFSET))(this, param);
		}

		::System::Void AddSectorData(::UnityEngine::SDFSectorData* sectorData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_ADDSECTORDATA_OFFSET))(this, sectorData);
		}

		::System::Void UnloadSectorData(::UnityEngine::SDFSectorData* sectorData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SDFSectorData*))((::PBYTE)hIl2Cpp + UNITYENGINE_SDFSYSTEM_UNLOADSECTORDATA_OFFSET))(this, sectorData);
		}
	};
}
