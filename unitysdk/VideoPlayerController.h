#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace UnityEngine { class GameObject; }

#define VIDEOPLAYERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB9B1970)
#define VIDEOPLAYERCONTROLLER_METHOD_5_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xB9B1B80)
#define VIDEOPLAYERCONTROLLER_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB9B19D0)
#define VIDEOPLAYERCONTROLLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB9B1C20)
#define VIDEOPLAYERCONTROLLER_METHOD_5_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0xB9B1A80)
#define VIDEOPLAYERCONTROLLER_STARTCOMPT_OFFSET UNITYSDK_OFFSET(0xB9B1870)
#define VIDEOPLAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xB9B1800)
#define VIDEOPLAYERCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB9B18D0)
#define VIDEOPLAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1CE0)

inline static constexpr unsigned int VideoPlayerController_TypeDefinitionIndex = 44331;

class VideoPlayerController : public ::UnityEngine::MonoBehaviour
{
public:
	::CriWare::CriManaMovieControllerForUI* Field_5_0; // 0x18
	::System::Single Field_5_1; // 0x20
	::CriWare::CriWareInitializer* Field_5_2; // 0x28
	::CriWare::CriManaVP9Initializer* Field_5_3; // 0x30
	::CriWare::CriWareErrorHandler* Field_5_4; // 0x38
	::UnityEngine::GameObject* Field_5_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_LATEUPDATE_OFFSET))(this);
	}

	::System::Void StartCompt()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_STARTCOMPT_OFFSET))(this);
	}

	::System::Void Method_5_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_METHOD_5_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_5_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_5_AC57C1C4868FD160()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_METHOD_5_AC57C1C4868FD160_OFFSET))(this);
	}

	::System::Void Method_5_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_METHOD_5_30D1209326FA87FC_1_OFFSET))(this);
	}
};
