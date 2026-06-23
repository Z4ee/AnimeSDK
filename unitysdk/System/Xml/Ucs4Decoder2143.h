#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Decoder.h"

#define SYSTEM_XML_UCS4DECODER2143_GETFULLCHARS_OFFSET UNITYSDK_OFFSET(0x1DE482F0)
#define SYSTEM_XML_UCS4DECODER2143__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE48660)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Decoder2143_TypeDefinitionIndex = 1829;

	class Ucs4Decoder2143 : public ::System::Xml::Ucs4Decoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER2143__CTOR_OFFSET))(this);
		}

		::System::Int32 GetFullChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER2143_GETFULLCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}
	};
}
