#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/EncoderFallbackBuffer.h"

namespace System { class String; }
namespace System::Xml { class CharEntityEncoderFallback; }

#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_1_OFFSET UNITYSDK_OFFSET(0x185637A0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x18563480)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x18563B50)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x18563BF0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_MOVEPREVIOUS_OFFSET UNITYSDK_OFFSET(0x18563BD0)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x18563C20)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET UNITYSDK_OFFSET(0x18563B30)
#define SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x185633C0)

namespace System::Xml
{
	inline static constexpr unsigned int CharEntityEncoderFallbackBuffer_TypeDefinitionIndex = 1785;

	class CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer
	{
	public:
		::System::Xml::CharEntityEncoderFallback* parent; // 0x30
		::System::String* charEntity; // 0x38
		::System::Int32 charEntityIndex; // 0x40

		::System::Void _ctor(::System::Xml::CharEntityEncoderFallback* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::CharEntityEncoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER__CTOR_OFFSET))(this, parent);
		}

		::System::Boolean Fallback(::System::Char charUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_OFFSET))(this, charUnknown, index);
		}

		::System::Boolean Fallback_1(::System::Char charUnknownHigh, ::System::Char charUnknownLow, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_FALLBACK_1_OFFSET))(this, charUnknownHigh, charUnknownLow, index);
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

		::System::Int32 SurrogateCharToUtf32(::System::Char highSurrogate, ::System::Char lowSurrogate)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_CHARENTITYENCODERFALLBACKBUFFER_SURROGATECHARTOUTF32_OFFSET))(this, highSurrogate, lowSurrogate);
		}
	};
}
