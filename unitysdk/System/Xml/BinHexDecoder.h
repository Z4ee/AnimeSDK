#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/IncrementalReadDecoder.h"

#define SYSTEM_XML_BINHEXDECODER_DECODE_1_OFFSET UNITYSDK_OFFSET(0x19F7D650)
#define SYSTEM_XML_BINHEXDECODER_DECODE_2_OFFSET UNITYSDK_OFFSET(0x19F7D3D0)
#define SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x19F7D1F0)
#define SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x19F7D1E0)

namespace System::Xml
{
	inline static constexpr unsigned int BinHexDecoder_TypeDefinitionIndex = 1783;

	class BinHexDecoder : public ::System::Xml::IncrementalReadDecoder
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::Byte cachedHalfByte; // 0x18
		::System::Boolean hasHalfByteCached; // 0x19
		::System::Int32 endIndex; // 0x1C
		::System::Int32 curIndex; // 0x20

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_GET_ISFULL_OFFSET))(this);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_OFFSET))(this, a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* Decode_1(::Il2CppArray<::System::Char>* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Char>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_1_OFFSET))(a1, a2);
		}

		static ::System::Void Decode_2(::System::Char* a1, ::System::Char* a2, ::System::Byte* a3, ::System::Byte* a4, ::System::Boolean& a5, ::System::Byte& a6, ::System::Int32& a7, ::System::Int32& a8)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Char*, ::System::Byte*, ::System::Byte*, ::System::Boolean&, ::System::Byte&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINHEXDECODER_DECODE_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
