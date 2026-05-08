#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace miHoYoEmotion { class FreeRDPhonemeMarker; }

#define MIHOYOEMOTION_RDPHONEMEMARKER_CLONETOFREEMARKER_OFFSET UNITYSDK_OFFSET(0x1979F8F0)
#define MIHOYOEMOTION_RDPHONEMEMARKER_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1979F3C0)
#define MIHOYOEMOTION_RDPHONEMEMARKER_GETTIME_OFFSET UNITYSDK_OFFSET(0x1979FAE0)
#define MIHOYOEMOTION_RDPHONEMEMARKER_ISFREEMARKER_OFFSET UNITYSDK_OFFSET(0x1979F340)
#define MIHOYOEMOTION_RDPHONEMEMARKER_SETTOOTHERMARKER_OFFSET UNITYSDK_OFFSET(0x1979CB80)
#define MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1979CA60)
#define MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1979CB70)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int RDPhonemeMarker_TypeDefinitionIndex = 37744;

	class RDPhonemeMarker : public ::System::Object
	{
	public:
		::System::Int32 emotionIndex; // 0x10
		::System::Int32 phonemeNumber; // 0x14
		::System::Single time; // 0x18
		::System::Single value; // 0x1C
		::System::String* word; // 0x20
		::System::Single decibel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 phonemeNumber, ::System::Single time, ::System::Single value, ::System::Int32 emotionIndex, ::System::String* word, ::System::Single decibel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER__CTOR_1_OFFSET))(this, phonemeNumber, time, value, emotionIndex, word, decibel);
		}

		::System::Void SetToOtherMarker(::miHoYoEmotion::RDPhonemeMarker* other)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::RDPhonemeMarker*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_SETTOOTHERMARKER_OFFSET))(this, other);
		}

		::System::Boolean IsFreeMarker()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_ISFREEMARKER_OFFSET))(this);
		}

		::miHoYoEmotion::RDPhonemeMarker* CreateCopy()
		{
			return ((::miHoYoEmotion::RDPhonemeMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_CREATECOPY_OFFSET))(this);
		}

		::miHoYoEmotion::FreeRDPhonemeMarker* CloneToFreeMarker()
		{
			return ((::miHoYoEmotion::FreeRDPhonemeMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_CLONETOFREEMARKER_OFFSET))(this);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_RDPHONEMEMARKER_GETTIME_OFFSET))(this);
		}
	};
}
