#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x193E6930)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x193E69B0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193E6A30)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x193E6990)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193E67D0)
#define SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x193E6790)

namespace System::Text
{
	inline static constexpr unsigned int DecoderReplacementFallback_TypeDefinitionIndex = 460;

	class DecoderReplacementFallback : public ::System::Text::DecoderFallback
	{
	public:
		::System::String* strDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK__CTOR_1_OFFSET))(this, replacement);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERREPLACEMENTFALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
