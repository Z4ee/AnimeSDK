#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class AnimationCurve; }

#define TRACKCAMERABLENDCONFIG_METHOD_1_074F48B2B8055A43_OFFSET UNITYSDK_OFFSET(0x10527BC0)
#define TRACKCAMERABLENDCONFIG_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10527B70)
#define TRACKCAMERABLENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10527D10)

inline static constexpr unsigned int TrackCameraBlendConfig_TypeDefinitionIndex = 45492;

class TrackCameraBlendConfig : public ::System::Object
{
public:
	::RPG::GameCore::VCameraBlendType BlendType; // 0x10
	::System::Single BlendTime; // 0x14
	::UnityEngine::AnimationCurve* CustomCurve; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERABLENDCONFIG__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRACKCAMERABLENDCONFIG_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_074F48B2B8055A43(::Cinemachine::CinemachineBrain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + TRACKCAMERABLENDCONFIG_METHOD_1_074F48B2B8055A43_OFFSET))(this, a1);
	}
};
