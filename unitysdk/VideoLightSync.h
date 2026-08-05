#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class VideoColorData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define VIDEOLIGHTSYNC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1879CBF0)
#define VIDEOLIGHTSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1879C840)
#define VIDEOLIGHTSYNC_TURNOFFLIGHT_OFFSET UNITYSDK_OFFSET(0x1879CC70)
#define VIDEOLIGHTSYNC_UPDATEVIDEOFRAME_OFFSET UNITYSDK_OFFSET(0x1879D0A0)
#define VIDEOLIGHTSYNC_UPDATEVIDEONAME_OFFSET UNITYSDK_OFFSET(0x1879CEF0)
#define VIDEOLIGHTSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1879D170)

inline static constexpr unsigned int VideoLightSync_TypeDefinitionIndex = 79563;

class VideoLightSync : public ::UnityEngine::MonoBehaviour
{
public:
	::VideoColorData* colorData; // 0x18
	::UnityEngine::Light* screenLight; // 0x20
	::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData; // 0x28
	::System::Boolean hasLightData; // 0x30
	::System::Int32 currentVideoIndex; // 0x34
	::System::Int32 currentFrame; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Color>* colors; // 0x40
	::System::Int32 colorCount; // 0x48
	::UnityEngine::Color currentColor; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC_ONDISABLE_OFFSET))(this);
	}

	::System::Void UpdateVideoName(::System::String* videoName)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC_UPDATEVIDEONAME_OFFSET))(this, videoName);
	}

	::System::Void UpdateVideoFrame(::System::Int32 frame)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC_UPDATEVIDEOFRAME_OFFSET))(this, frame);
	}

	::System::Void TurnOffLight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOLIGHTSYNC_TURNOFFLIGHT_OFFSET))(this);
	}
};
