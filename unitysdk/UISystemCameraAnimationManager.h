#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_C52C1BF5199A0D45;
namespace UnityEngine { class Camera; }

#define UISYSTEMCAMERAANIMATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16833870)
#define UISYSTEMCAMERAANIMATIONMANAGER_GETCAMERAANIMATIONDRIVER_OFFSET UNITYSDK_OFFSET(0x168337E0)
#define UISYSTEMCAMERAANIMATIONMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x168338B0)
#define UISYSTEMCAMERAANIMATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x168338F0)

inline static constexpr unsigned int UISystemCameraAnimationManager_TypeDefinitionIndex = 50862;

class UISystemCameraAnimationManager : public ::Foundation::SingletonDisposable_1<::UISystemCameraAnimationManager*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER__CTOR_OFFSET))(this);
	}

	::Class_1_C52C1BF5199A0D45* GetCameraAnimationDriver(::UnityEngine::Camera* ui3DCamera)
	{
		return ((::Class_1_C52C1BF5199A0D45*(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_GETCAMERAANIMATIONDRIVER_OFFSET))(this, ui3DCamera);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISYSTEMCAMERAANIMATIONMANAGER_ONCREATE_OFFSET))(this);
	}
};
