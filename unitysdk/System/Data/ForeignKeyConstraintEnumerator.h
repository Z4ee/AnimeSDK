#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/ConstraintEnumerator.h"

namespace System::Data { class Constraint; }
namespace System::Data { class DataSet; }
namespace System::Data { class ForeignKeyConstraint; }

#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_GETFOREIGNKEYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1EAB18A0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1EAB1830)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB17C0)

namespace System::Data
{
	inline static constexpr unsigned int ForeignKeyConstraintEnumerator_TypeDefinitionIndex = 39222;

	class ForeignKeyConstraintEnumerator : public ::System::Data::ConstraintEnumerator
	{
	public:
		::System::Void _ctor(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR__CTOR_OFFSET))(this, dataSet);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::Constraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(this, constraint);
		}

		::System::Data::ForeignKeyConstraint* GetForeignKeyConstraint()
		{
			return ((::System::Data::ForeignKeyConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_GETFOREIGNKEYCONSTRAINT_OFFSET))(this);
		}
	};
}
