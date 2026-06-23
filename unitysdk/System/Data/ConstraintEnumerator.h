#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Data { class Constraint; }
namespace System::Data { class DataSet; }

#define SYSTEM_DATA_CONSTRAINTENUMERATOR_GETNEXT_OFFSET UNITYSDK_OFFSET(0x1D9F8C50)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x1D9F9050)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F8BE0)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintEnumerator_TypeDefinitionIndex = 38560;

	class ConstraintEnumerator : public ::System::Object
	{
	public:
		::System::Data::Constraint* _currentObject; // 0x10
		::System::Collections::IEnumerator* _tables; // 0x18
		::System::Collections::IEnumerator* _constraints; // 0x20

		::System::Void _ctor(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR__CTOR_OFFSET))(this, dataSet);
		}

		::System::Boolean GetNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_GETNEXT_OFFSET))(this);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* constraint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::Constraint*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(this, constraint);
		}
	};
}
