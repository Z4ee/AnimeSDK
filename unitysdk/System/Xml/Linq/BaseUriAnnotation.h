#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_LINQ_BASEURIANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE05390)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int BaseUriAnnotation_TypeDefinitionIndex = 3871;

	class BaseUriAnnotation : public ::System::Object
	{
	public:
		::System::String* baseUri; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_BASEURIANNOTATION__CTOR_OFFSET))(this, a1);
		}
	};
}
