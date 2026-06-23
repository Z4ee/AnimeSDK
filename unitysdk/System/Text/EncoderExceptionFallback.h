#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallback.h"

namespace System { class Object; }
namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8B6570)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B8B65C0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B8B6610)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8B65B0)
#define SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B6560)

namespace System::Text
{
	inline static constexpr unsigned int EncoderExceptionFallback_TypeDefinitionIndex = 465;

	class EncoderExceptionFallback : public ::System::Text::EncoderFallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODEREXCEPTIONFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
