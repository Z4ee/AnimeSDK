#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/BaseMarker.h"

#define MIHOYOEMOTION_EYECTRLMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D044730)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int EyeCtrlMarker_TypeDefinitionIndex = 40007;

	class EyeCtrlMarker : public ::miHoYoEmotion::BaseMarker
	{
	public:
		::UnityEngine::Vector3 leftEyeRot; // 0x30
		::UnityEngine::Vector3 rightEyeRot; // 0x3C
		::UnityEngine::Vector3 leftScale; // 0x48
		::UnityEngine::Vector3 rightScale; // 0x54
		::System::Boolean starEye; // 0x60
		::System::Single faceFlush; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_EYECTRLMARKER__CTOR_OFFSET))(this);
		}
	};
}
