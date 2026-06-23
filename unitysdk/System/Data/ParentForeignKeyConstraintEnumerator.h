#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/ForeignKeyConstraintEnumerator.h"

namespace System::Data { class Constraint; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1D6D9B70)
#define SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D9B00)

namespace System::Data
{
	inline static constexpr unsigned int ParentForeignKeyConstraintEnumerator_TypeDefinitionIndex = 38563;

	class ParentForeignKeyConstraintEnumerator : public ::System::Data::ForeignKeyConstraintEnumerator
	{
	public:
		::System::Data::DataTable* _table; // 0x28

		::System::Void _ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR__CTOR_OFFSET))(this, dataSet, inTable);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::Constraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(this, constraint);
		}
	};
}
