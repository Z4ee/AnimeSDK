#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class String; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_MERGEFAILEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F301320)

namespace System::Data
{
	inline static constexpr unsigned int MergeFailedEventArgs_TypeDefinitionIndex = 39316;

	class MergeFailedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* _Conflict_k__BackingField; // 0x10
		::System::Data::DataTable* _Table_k__BackingField; // 0x18

		::System::Void _ctor(::System::Data::DataTable* table, ::System::String* conflict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_MERGEFAILEDEVENTARGS__CTOR_OFFSET))(this, table, conflict);
		}
	};
}
