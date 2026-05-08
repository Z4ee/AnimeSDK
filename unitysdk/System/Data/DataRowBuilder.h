#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATAROWBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B31BAF0)
#define SYSTEM_DATA_DATAROWBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31BAE0)

namespace System::Data
{
	inline static constexpr unsigned int DataRowBuilder_TypeDefinitionIndex = 36975;

	class DataRowBuilder : public ::System::Object
	{
	public:
		::System::Data::DataTable* _table; // 0x10
		::System::Int32 _record; // 0x18

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Int32 record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWBUILDER__CTOR_OFFSET))(this, table, record);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWBUILDER__CTOR_1_OFFSET))(this);
		}
	};
}
