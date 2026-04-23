#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_BUFFERCHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08EBB0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_AttributeValueCache_BufferChunk_TypeDefinitionIndex = 1872;

	class XmlWellFormedWriter_AttributeValueCache_BufferChunk : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* buffer; // 0x10
		::System::Int32 count; // 0x18
		::System::Int32 index; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_BUFFERCHUNK__CTOR_OFFSET))(this, buffer, index, count);
		}
	};
}
