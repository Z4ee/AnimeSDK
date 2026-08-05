#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F1467B0)
#define SYSTEM_XML_BASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F146770)

namespace System::Xml
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 1662;

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

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET))(this);
		}
	};
}
