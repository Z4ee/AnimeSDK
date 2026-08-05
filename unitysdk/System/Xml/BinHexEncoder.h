#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1F066B00)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1F0669C0)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexEncoder_TypeDefinitionIndex = 1665;

	class BinHexEncoder : public ::System::Object
	{
	public:
		static ::System::String* Encode(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(inArray, offsetIn, count);
		}

		static ::System::Int32 Encode_1(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 count, ::Il2CppArray<::System::Char>* outArray)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET))(inArray, offsetIn, count, outArray);
		}
	};
}
