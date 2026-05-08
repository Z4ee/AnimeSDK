#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/Position.h"

namespace System::Collections { class ArrayList; }

#define SYSTEM_XML_SCHEMA_POSITIONS_ADD_OFFSET UNITYSDK_OFFSET(0x1AE87850)
#define SYSTEM_XML_SCHEMA_POSITIONS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE879B0)
#define SYSTEM_XML_SCHEMA_POSITIONS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE878D0)
#define SYSTEM_XML_SCHEMA_POSITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE879E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Positions_TypeDefinitionIndex = 1963;

	class Positions : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* positions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Int32 symbol, ::System::Object* particle)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_ADD_OFFSET))(this, symbol, particle);
		}

		::System::Xml::Schema::Position get_Item(::System::Int32 pos)
		{
			return ((::System::Xml::Schema::Position(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_GET_ITEM_OFFSET))(this, pos);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_GET_COUNT_OFFSET))(this);
		}
	};
}
