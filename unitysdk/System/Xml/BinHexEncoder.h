#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1BABAD60)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_2_OFFSET UNITYSDK_OFFSET(0x1BABAC20)
#define SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1BABA9E0)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexEncoder_TypeDefinitionIndex = 1791;

	class BinHexEncoder : public ::System::Object
	{
	public:
		static ::System::Void Encode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Xml::XmlWriter* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Encode_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Encode_2(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Char>* a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXENCODER_ENCODE_2_OFFSET))(a1, a2, a3, a4);
		}
	};
}
