#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataTable; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }

#define SYSTEM_DATA_CONSTRAINTTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F9060)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintTable_TypeDefinitionIndex = 38691;

	class ConstraintTable : public ::System::Object
	{
	public:
		::System::Data::DataTable* table; // 0x10
		::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint; // 0x18

		::System::Void _ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTTABLE__CTOR_OFFSET))(this, t, c);
		}
	};
}
