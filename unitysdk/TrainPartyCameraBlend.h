#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define TRAINPARTYCAMERABLEND__CTOR_OFFSET UNITYSDK_OFFSET(0xAC27BE0)

inline static constexpr unsigned int TrainPartyCameraBlend_TypeDefinitionIndex = 38029;

class TrainPartyCameraBlend : public ::UnityEngine::MonoBehaviour
{
public:
	::RPG::GameCore::VCameraBlendType BlendType; // 0x18
	::UnityEngine::AnimationCurve* CustomCurve; // 0x20
	::System::Single BlendTime; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYCAMERABLEND__CTOR_OFFSET))(this);
	}
};
