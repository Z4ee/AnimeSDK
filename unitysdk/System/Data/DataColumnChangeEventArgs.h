#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_INITIALIZECOLUMNCHANGEEVENT_OFFSET UNITYSDK_OFFSET(0x1BB72680)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB72610)
#define SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB725B0)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnChangeEventArgs_TypeDefinitionIndex = 36951;

	class DataColumnChangeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Data::DataRow* _Row_k__BackingField; // 0x10
		::System::Object* _ProposedValue_k__BackingField; // 0x18
		::System::Data::DataColumn* _column; // 0x20

		::System::Void _ctor(::System::Data::DataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS__CTOR_OFFSET))(this, row);
		}

		::System::Void _ctor_1(::System::Data::DataRow* row, ::System::Data::DataColumn* column, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataColumn*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS__CTOR_1_OFFSET))(this, row, column, value);
		}

		::System::Void InitializeColumnChangeEvent(::System::Data::DataColumn* column, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCHANGEEVENTARGS_INITIALIZECOLUMNCHANGEEVENT_OFFSET))(this, column, value);
		}
	};
}
