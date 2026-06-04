#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_ValueMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define VECTOR3CURVEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD5C60)

inline static constexpr unsigned int Vector3CurveBundle_TypeDefinitionIndex = 40521;

class Vector3CurveBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_ValueMode mode; // 0x10
	::UnityEngine::Vector3 value1; // 0x14
	::UnityEngine::Vector3 value2; // 0x20
	::UnityEngine::AnimationCurve* curve1_1; // 0x30
	::UnityEngine::AnimationCurve* curve1_2; // 0x38
	::UnityEngine::AnimationCurve* curve1_3; // 0x40
	::UnityEngine::AnimationCurve* curve2_1; // 0x48
	::UnityEngine::AnimationCurve* curve2_2; // 0x50
	::UnityEngine::AnimationCurve* curve2_3; // 0x58
	::UnityEngine::Vector2 minMax; // 0x60
	::System::Single seed; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VECTOR3CURVEBUNDLE__CTOR_OFFSET))(this);
	}
};
