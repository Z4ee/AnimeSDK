#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class DataTable; }
namespace System::Data { class XmlToDatasetMap_XmlNodeIdentety; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D07B500)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_2_OFFSET UNITYSDK_OFFSET(0x1D07B570)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_3_OFFSET UNITYSDK_OFFSET(0x1D07B650)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D07B490)
#define SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07B420)

namespace System::Data
{
	inline static constexpr unsigned int XmlToDatasetMap_XmlNodeIdHashtable_TypeDefinitionIndex = 38699;

	class XmlToDatasetMap_XmlNodeIdHashtable : public ::System::Collections::Hashtable
	{
	public:
		::System::Data::XmlToDatasetMap_XmlNodeIdentety* _id; // 0x50

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE__CTOR_OFFSET))(this, capacity);
		}

		::System::Object* get_Item(::System::Xml::XmlNode* node)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_OFFSET))(this, node);
		}

		::System::Object* get_Item_1(::System::Xml::XmlReader* dataReader)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_1_OFFSET))(this, dataReader);
		}

		::System::Object* get_Item_2(::System::Data::DataTable* table)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_2_OFFSET))(this, table);
		}

		::System::Object* get_Item_3(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLTODATASETMAP_XMLNODEIDHASHTABLE_GET_ITEM_3_OFFSET))(this, name);
		}
	};
}
