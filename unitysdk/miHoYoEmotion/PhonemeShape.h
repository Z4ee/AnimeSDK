#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/Shape.h"

namespace System { class String; }

#define MIHOYOEMOTION_PHONEMESHAPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E53070)
#define MIHOYOEMOTION_PHONEMESHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E52E40)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int PhonemeShape_TypeDefinitionIndex = 40970;

	class PhonemeShape : public ::miHoYoEmotion::Shape
	{
	public:
		::System::String* phonemeName; // 0x38

		::System::Void _ctor(::System::String* phonemeName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPE__CTOR_OFFSET))(this, phonemeName);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPE__CTOR_1_OFFSET))(this);
		}
	};
}
