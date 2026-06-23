#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/FacetsChecker.h"

#define SYSTEM_XML_SCHEMA_MISCFACETSCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D655A60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int MiscFacetsChecker_TypeDefinitionIndex = 2061;

	class MiscFacetsChecker : public ::System::Xml::Schema::FacetsChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_MISCFACETSCHECKER__CTOR_OFFSET))(this);
		}
	};
}
