#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallback.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class EncoderFallbackBuffer; }

#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1D068160)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0681F0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D068270)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1D0681D0)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D068000)
#define SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D067FC0)

namespace System::Text
{
	inline static constexpr unsigned int EncoderReplacementFallback_TypeDefinitionIndex = 471;

	class EncoderReplacementFallback : public ::System::Text::EncoderFallback
	{
	public:
		::System::String* strDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK__CTOR_1_OFFSET))(this, replacement);
		}

		::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::EncoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
