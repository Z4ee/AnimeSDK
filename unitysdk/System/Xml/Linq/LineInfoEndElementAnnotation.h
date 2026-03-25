#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/LineInfoAnnotation.h"

#define SYSTEM_XML_LINQ_LINEINFOENDELEMENTANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x185550B0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int LineInfoEndElementAnnotation_TypeDefinitionIndex = 4898;

	class LineInfoEndElementAnnotation : public ::System::Xml::Linq::LineInfoAnnotation
	{
	public:
		::System::Void _ctor(::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_LINEINFOENDELEMENTANNOTATION__CTOR_OFFSET))(this, lineNumber, linePosition);
		}
	};
}
