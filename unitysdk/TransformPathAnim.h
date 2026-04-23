#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BezierCurve; }
namespace UnityEngine { class Transform; }

#define TRANSFORMPATHANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xB99F1A0)
#define TRANSFORMPATHANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xB99F5E0)
#define TRANSFORMPATHANIM_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB99EA10)
#define TRANSFORMPATHANIM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xB99EBA0)
#define TRANSFORMPATHANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0xB99EC00)
#define TRANSFORMPATHANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB99F690)

inline static constexpr unsigned int TransformPathAnim_TypeDefinitionIndex = 44191;

class TransformPathAnim : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* AnimatedItem; // 0x18
	::UnityEngine::Vector3 RelativeTransition; // 0x20
	::UnityEngine::Vector3 RelativeRotation; // 0x2C
	::UnityEngine::Vector3 RelativeScale; // 0x38
	::RPG::Client::BezierCurve* Curve; // 0x48
	::System::Boolean FollowCurve; // 0x50
	::System::Single StartPercentage; // 0x54
	::System::Single EndPercentage; // 0x58
	::System::Single CurrentPercentage; // 0x5C
	::System::Boolean AutoPlay; // 0x60
	::System::Single AutoPlaySpeed; // 0x64
	::System::Boolean ProgressControl; // 0x68
	::System::Single CurrentProgress; // 0x6C
	::UnityEngine::Vector3 Field_5_13; // 0x70
	::UnityEngine::Quaternion Field_5_14; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Bounds get_ArtBoundFull()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM_GET_ARTBOUNDFULL_OFFSET))(this);
	}

	::System::Single get_ArtBound()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFORMPATHANIM_GET_ARTBOUND_OFFSET))(this);
	}
};
