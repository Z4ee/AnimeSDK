#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CameraLookatKeyFrame;
class TrackCameraBlendConfig;
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define TRACKCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE98CB40)
#define TRACKCAMERACONTROLLER_INITVC_OFFSET UNITYSDK_OFFSET(0xE98CDC0)
#define TRACKCAMERACONTROLLER_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xE98CF60)
#define TRACKCAMERACONTROLLER_MAPRATIOSTATIC_OFFSET UNITYSDK_OFFSET(0xE98D930)
#define TRACKCAMERACONTROLLER_MAPRATIO_OFFSET UNITYSDK_OFFSET(0xE98D560)
#define TRACKCAMERACONTROLLER_METHOD_5_BC09128703DEDF98_OFFSET UNITYSDK_OFFSET(0xE98D220)
#define TRACKCAMERACONTROLLER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE98D9E0)
#define TRACKCAMERACONTROLLER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xE98D9A0)
#define TRACKCAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE98CF00)
#define TRACKCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE98DA20)

inline static constexpr unsigned int TrackCameraController_TypeDefinitionIndex = 47740;

class TrackCameraController : public ::UnityEngine::MonoBehaviour
{
public:
	::Cinemachine::CinemachineDollyCart* dollyCart; // 0x18
	::Cinemachine::CinemachineVirtualCamera* VC; // 0x20
	::System::Collections::Generic::List_1<::CameraLookatKeyFrame*>* keyFrames; // 0x28
	::System::Boolean UseNonTransitionMappingCartPosition; // 0x30
	::System::Boolean Modify3CCameraRotationBlendOut; // 0x31
	::System::Boolean IsCutIn; // 0x32
	::System::Boolean IsCutOut; // 0x33
	::TrackCameraBlendConfig* BlendIn; // 0x38
	::TrackCameraBlendConfig* BlendOut; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* RatioMap; // 0x48
	::System::Single TrackPlayDuration; // 0x50
	::UnityEngine::AnimationCurve* TrackPlayCurve; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_AWAKE_OFFSET))(this);
	}

	::System::Void InitVC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_INITVC_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void ManualUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MANUALUPDATE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_5_BC09128703DEDF98(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_METHOD_5_BC09128703DEDF98_OFFSET))(this, a1, a2);
	}

	static ::System::Single MapRatio(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPRATIO_OFFSET))(a1, a2, a3);
	}

	static ::System::Single MapRatioStatic(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_MAPRATIOSTATIC_OFFSET))(a1, a2, a3);
	}

	::System::Void OnBeforeSerialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_ONBEFORESERIALIZE_OFFSET))(this);
	}

	::System::Void OnAfterDeserialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERACONTROLLER_ONAFTERDESERIALIZE_OFFSET))(this);
	}
};
