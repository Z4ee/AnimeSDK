#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_MERGEFAILEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB7C680)

namespace System::Data
{
	inline static constexpr unsigned int MergeFailedEventArgs_TypeDefinitionIndex = 37038;

	class MergeFailedEventArgs : public ::System::EventArgs
	{
	public:
		::System::Data::DataTable* _Table_k__BackingField; // 0x10
		::System::String* _Conflict_k__BackingField; // 0x18

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* conflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTARGS__CTOR_OFFSET))(this, table, conflict);
		}
	};
}
