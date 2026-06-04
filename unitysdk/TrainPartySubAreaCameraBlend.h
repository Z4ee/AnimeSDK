#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/Struct_2_50F41487874AC62B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define TRAINPARTYSUBAREACAMERABLEND_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD0E6080)
#define TRAINPARTYSUBAREACAMERABLEND__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E6100)

inline static constexpr unsigned int TrainPartySubAreaCameraBlend_TypeDefinitionIndex = 44456;

class TrainPartySubAreaCameraBlend : public ::UnityEngine::MonoBehaviour
{
public:
	::RPG::GameCore::VCameraBlendType BlendType; // 0x18
	::UnityEngine::AnimationCurve* CustomCurve; // 0x20
	::System::Single BlendTime; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYSUBAREACAMERABLEND__CTOR_OFFSET))(this);
	}

	::Struct_2_50F41487874AC62B GetConfig()
	{
		return ((::Struct_2_50F41487874AC62B(*)(::PVOID))((::PBYTE)hIl2Cpp + TRAINPARTYSUBAREACAMERABLEND_GETCONFIG_OFFSET))(this);
	}
};
