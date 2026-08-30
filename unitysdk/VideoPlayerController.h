#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace CriWare { class CriManaMovieControllerForUI; }
namespace CriWare { class CriManaVP9Initializer; }
namespace CriWare { class CriWareErrorHandler; }
namespace CriWare { class CriWareInitializer; }
namespace UnityEngine { class GameObject; }

#define VIDEOPLAYERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10509490)
#define VIDEOPLAYERCONTROLLER_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x105096A0)
#define VIDEOPLAYERCONTROLLER_METHOD_5_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x105094F0)
#define VIDEOPLAYERCONTROLLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x105097B0)
#define VIDEOPLAYERCONTROLLER_METHOD_5_AC57C1C4868FD160_OFFSET UNITYSDK_OFFSET(0x105095A0)
#define VIDEOPLAYERCONTROLLER_STARTCOMPT_OFFSET UNITYSDK_OFFSET(0x10509390)
#define VIDEOPLAYERCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x10509320)
#define VIDEOPLAYERCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x105093F0)
#define VIDEOPLAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10509870)

inline static constexpr unsigned int VideoPlayerController_TypeDefinitionIndex = 48046;

class VideoPlayerController : public ::UnityEngine::MonoBehaviour
{
public:
	::CriWare::CriManaMovieControllerForUI* ANJJDLCNACO; // 0x18
	::System::Single GOJFPJNCPEK; // 0x20
	::CriWare::CriWareInitializer* MMINIDBGNDM; // 0x28
	::CriWare::CriManaVP9Initializer* FNIDGGBFPPG; // 0x30
	::CriWare::CriWareErrorHandler* GEPONNBNGHF; // 0x38
	::UnityEngine::GameObject* EGNDAJLFBCM; // 0x40

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

	::System::Void Method_5_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIDEOPLAYERCONTROLLER_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
	}
};
