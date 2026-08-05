#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data { class DataTable; }
namespace System::Data { class XmlToDatasetMap_XmlNodeIdHashtable; }

#define SYSTEM_DATA_XMLTODATASETMAP_TABLESCHEMAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED749A0)

namespace System::Data
{
	inline static constexpr unsigned int XmlToDatasetMap_TableSchemaInfo_TypeDefinitionIndex = 39361;

	class XmlToDatasetMap_TableSchemaInfo : public ::System::Object
	{
	public:
		::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* ColumnsSchemaMap; // 0x10
		::System::Data::DataTable* TableSchema; // 0x18

		::System::Void _ctor(::System::Data::DataTable* tableSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_TABLESCHEMAINFO__CTOR_OFFSET))(this, tableSchema);
		}
	};
}
