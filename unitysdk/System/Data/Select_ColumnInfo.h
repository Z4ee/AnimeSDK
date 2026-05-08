#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class BinaryNode; }

#define SYSTEM_DATA_SELECT_COLUMNINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195C1CE0)

namespace System::Data
{
	inline static constexpr unsigned int Select_ColumnInfo_TypeDefinitionIndex = 37059;

	class Select_ColumnInfo : public ::System::Object
	{
	public:
		::System::Data::BinaryNode* expr; // 0x10
		::System::Boolean equalsOperator; // 0x18
		::System::Boolean flag; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SELECT_COLUMNINFO__CTOR_OFFSET))(this);
		}
	};
}
