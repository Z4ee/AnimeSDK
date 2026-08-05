#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATATABLENEWROWEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AECE0)

namespace System::Data
{
	inline static constexpr unsigned int DataTableNewRowEventArgs_TypeDefinitionIndex = 39273;

	class DataTableNewRowEventArgs : public ::System::EventArgs
	{
	public:
		::System::Data::DataRow* _Row_k__BackingField; // 0x10

		::System::Void _ctor(::System::Data::DataRow* dataRow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLENEWROWEVENTARGS__CTOR_OFFSET))(this, dataRow);
		}
	};
}
