#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Schema { class CompiledIdentityConstraint; }
namespace System::Xml::Schema { class SelectorActiveAxis; }

#define SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D654810)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ConstraintStruct_TypeDefinitionIndex = 1952;

	class ConstraintStruct : public ::System::Object
	{
	public:
		::System::Xml::Schema::SelectorActiveAxis* axisSelector; // 0x10
		::System::Collections::Hashtable* qualifiedTable; // 0x18
		::System::Collections::ArrayList* axisFields; // 0x20
		::System::Xml::Schema::CompiledIdentityConstraint* constraint; // 0x28
		::System::Collections::Hashtable* keyrefTable; // 0x30
		::System::Int32 tableDim; // 0x38

		::System::Void _ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::CompiledIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT__CTOR_OFFSET))(this, constraint);
		}
	};
}
