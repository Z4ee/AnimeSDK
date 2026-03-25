#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x185629E0)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_2_OFFSET UNITYSDK_OFFSET(0x18562880)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x185626B0)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexEncoder_TypeDefinitionIndex = 1779;

	class BinHexEncoder : public ::System::Object
	{
	public:
		static ::System::Void Encode(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count, ::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(buffer, index, count, writer);
		}

		static ::System::String* Encode_1(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 count)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET))(inArray, offsetIn, count);
		}

		static ::System::Int32 Encode_2(::Il2CppArray<::System::Byte>* inArray, ::System::Int32 offsetIn, ::System::Int32 count, ::Il2CppArray<::System::Char>* outArray)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_2_OFFSET))(inArray, offsetIn, count, outArray);
		}
	};
}
