#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Ucs4Decoder.h"

#define SYSTEM_XML_UCS4DECODER4321_GETFULLCHARS_OFFSET UNITYSDK_OFFSET(0x1AEA0AC0)
#define SYSTEM_XML_UCS4DECODER4321__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA0DC0)

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

		::System::Int32 GetFullChars(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_UCS4DECODER4321_GETFULLCHARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
