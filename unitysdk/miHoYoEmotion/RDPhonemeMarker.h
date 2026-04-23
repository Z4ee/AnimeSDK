#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYOEMOTION_RDPHONEMEMARKER_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x8E53190)
#define MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E53170)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int RDPhonemeMarker_TypeDefinitionIndex = 40969;

	class RDPhonemeMarker : public ::System::Object
	{
	public:
		::System::Int32 emotionIndex; // 0x10
		::System::Int32 phonemeNumber; // 0x14
		::System::Single time; // 0x18
		::System::Single value; // 0x1C

		::System::Void _ctor(::System::Int32 phonemeNumber, ::System::Single time, ::System::Single value, ::System::Int32 emotionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_OFFSET))(this, phonemeNumber, time, value, emotionIndex);
		}

		::miHoYoEmotion::RDPhonemeMarker* CreateCopy()
		{
			return ((::miHoYoEmotion::RDPhonemeMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_CREATECOPY_OFFSET))(this);
		}
	};
}
