#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATAROWCHANGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62D920)

namespace System::Data
{
	inline static constexpr unsigned int DataRowChangeEventArgs_TypeDefinitionIndex = 36977;

	class DataRowChangeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Data::DataRow* _Row_k__BackingField; // 0x10
		::System::Data::DataRowAction _Action_k__BackingField; // 0x18

		::System::Void _ctor(::System::Data::DataRow* row, ::System::Data::DataRowAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowAction))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCHANGEEVENTARGS__CTOR_OFFSET))(this, row, action);
		}
	};
}
