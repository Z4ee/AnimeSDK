#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallback.h"

namespace System { class Object; }
namespace System::Text { class DecoderFallbackBuffer; }

#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_CREATEFALLBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x1B3D39A0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3D3A00)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3D3A50)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GET_MAXCHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3D39F0)
#define SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3D1330)

namespace System::Text
{
	inline static constexpr unsigned int UTF7Encoding_DecoderUTF7Fallback_TypeDefinitionIndex = 507;

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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_UTF7ENCODING_DECODERUTF7FALLBACK_GETHASHCODE_OFFSET))(this);
		}
	};
}
