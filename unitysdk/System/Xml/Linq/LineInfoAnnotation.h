#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_LINQ_LINEINFOANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE9DDD0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int LineInfoAnnotation_TypeDefinitionIndex = 3884;

	class LineInfoAnnotation : public ::System::Object
	{
	public:
		::System::Int32 linePosition; // 0x10
		::System::Int32 lineNumber; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_LINEINFOANNOTATION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
