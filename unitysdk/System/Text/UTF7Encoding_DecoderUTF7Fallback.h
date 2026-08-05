#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4517A0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4517F0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E451840)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1E4517E0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E451790)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_DecoderUTF7Fallback_TypeDefinitionIndex = 491;

	class UTF7Encoding_DecoderUTF7Fallback : public ::System::Text::DecoderFallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK__CTOR_OFFSET))(this);
		}

		::System::Text::DecoderFallbackBuffer* CreateFallbackBuffer()
		{
			return ((::System::Text::DecoderFallbackBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_CREATEFALLBACKBUFFER_OFFSET))(this);
		}

		::System::Int32 get_MaxCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GET_MAXCHARCOUNT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
