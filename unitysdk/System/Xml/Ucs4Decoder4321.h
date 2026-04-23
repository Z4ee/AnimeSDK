#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Decoder.h"

#define SYSTEM_XML_UCS4DECODER4321_GETFULLCHARS_OFFSET UNITYSDK_OFFSET(0x1A02EC10)
#define SYSTEM_XML_UCS4DECODER4321__CTOR_OFFSET UNITYSDK_OFFSET(0x1A02EF80)

namespace System::Xml
{
	inline static constexpr unsigned int Ucs4Decoder4321_TypeDefinitionIndex = 1947;

	class Ucs4Decoder4321 : public ::System::Xml::Ucs4Decoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER4321__CTOR_OFFSET))(this);
		}

		::System::Int32 GetFullChars(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 byteIndex, ::System::Int32 byteCount, ::Il2CppArray<::System::Char>* chars, ::System::Int32 charIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER4321_GETFULLCHARS_OFFSET))(this, bytes, byteIndex, byteCount, chars, charIndex);
		}
	};
}
