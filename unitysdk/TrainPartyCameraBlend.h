#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/Struct_2_50F41487874AC62B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define TRAINPARTYCAMERABLEND_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x104F56D0)
#define TRAINPARTYCAMERABLEND__CTOR_OFFSET UNITYSDK_OFFSET(0x104F5750)

inline static constexpr unsigned int TrainPartyCameraBlend_TypeDefinitionIndex = 47566;

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

	::Struct_2_50F41487874AC62B GetConfig()
	{
		return ((::Struct_2_50F41487874AC62B(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYCAMERABLEND_GETCONFIG_OFFSET))(this);
	}
};
