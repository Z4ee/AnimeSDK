#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class String; }
namespace System::Xml { class CharEntityEncoderFallback; }

#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1AE149A0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1AE146B0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1AE14D20)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1AE14DC0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x1AE14DA0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1AE14DF0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET UNITYSDK_OFFSET(0x1AE14D00)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE145F0)

namespace System::Xml
{
	inline static constexpr unsigned int CharEntityEncoderFallbackBuffer_TypeDefinitionIndex = 1786;

	class CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::String* charEntity; // 0x30
		::System::Xml::CharEntityEncoderFallback* parent; // 0x38
		::System::Int32 charEntityIndex; // 0x40

		::System::Void _ctor(::System::Xml::CharEntityEncoderFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::CharEntityEncoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Fallback(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Boolean Fallback_1(::System::Char a1, ::System::Char a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Boolean MovePrevious()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Int32 SurrogateCharToUtf32(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET))(this, a1, a2);
		}
	};
}
