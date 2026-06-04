#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/IncrementalReadDecoder.h"

#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER_DECODE_OFFSET UNITYSDK_OFFSET(0x1AE25A10)
#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1AE25A00)
#define SYSTEM_XML_INCREMENTALREADDUMMYDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE25A20)

namespace System::Xml
{
	inline static constexpr unsigned int IncrementalReadDummyDecoder_TypeDefinitionIndex = 1807;

	class IncrementalReadDummyDecoder : public ::System::Xml::IncrementalReadDecoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER_GET_ISFULL_OFFSET))(this);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDUMMYDECODER_DECODE_OFFSET))(this, a1, a2, a3);
		}
	};
}
