#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATATABLECLEAREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF162A0)

namespace System::Data
{
	inline static constexpr unsigned int DataTableClearEventArgs_TypeDefinitionIndex = 39270;

	class DataTableClearEventArgs : public ::System::EventArgs
	{
	public:
		::System::Data::DataTable* _Table_k__BackingField; // 0x10

		::System::Void _ctor(::System::Data::DataTable* dataTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECLEAREVENTARGS__CTOR_OFFSET))(this, dataTable);
		}
	};
}
