#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseShape.h"

#define MIHOYOEMOTION_FRAMESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1979B190)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShape_TypeDefinitionIndex = 37769;

	class FrameShape : public ::miHoYoEmotion::BaseShape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPE__CTOR_OFFSET))(this);
		}
	};
}
