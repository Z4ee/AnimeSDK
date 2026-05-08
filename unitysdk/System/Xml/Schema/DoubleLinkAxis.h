#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MS/Internal/Xml/XPath/Axis.h"

#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_CONVERTTREE_OFFSET UNITYSDK_OFFSET(0x1B8E94B0)
#define SYSTEM_XML_SCHEMA_DOUBLELINKAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E9450)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DoubleLinkAxis_TypeDefinitionIndex = 1943;

	class DoubleLinkAxis : public ::MS::Internal::Xml::XPath::Axis
	{
	public:
		::MS::Internal::Xml::XPath::Axis* next; // 0x40

		::System::Void _ctor(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::Schema::DoubleLinkAxis* inputaxis)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Axis*, ::System::Xml::Schema::DoubleLinkAxis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS__CTOR_OFFSET))(this, axis, inputaxis);
		}

		static ::System::Xml::Schema::DoubleLinkAxis* ConvertTree(::MS::Internal::Xml::XPath::Axis* axis)
		{
			return ((::System::Xml::Schema::DoubleLinkAxis*(*)(::MS::Internal::Xml::XPath::Axis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DOUBLELINKAXIS_CONVERTTREE_OFFSET))(axis);
		}
	};
}
