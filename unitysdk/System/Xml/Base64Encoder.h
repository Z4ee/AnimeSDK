#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1E7C92F0)
#define SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E7C9710)
#define SYSTEM_XML_BASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C92C0)

namespace System::Xml
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 1787;

	class Base64Encoder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* charsLine; // 0x10
		::Il2CppArray<::System::Byte>* leftOverBytes; // 0x18
		::System::Int32 leftOverBytesCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER__CTOR_OFFSET))(this);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET))(this);
		}
	};
}
