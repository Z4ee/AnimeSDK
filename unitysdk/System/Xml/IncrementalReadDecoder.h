#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_INCREMENTALREADDECODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC9D0)

namespace System::Xml
{
	inline static constexpr unsigned int IncrementalReadDecoder_TypeDefinitionIndex = 1817;

	class IncrementalReadDecoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_INCREMENTALREADDECODER__CTOR_OFFSET))(this);
		}
	};
}
