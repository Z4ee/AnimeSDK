#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_ADD_OFFSET UNITYSDK_OFFSET(0x20FFD30)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x20FFD60)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x20FFCD0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x20FFD20)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_INSERT_OFFSET UNITYSDK_OFFSET(0x20FFD50)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x20FFD40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_SmallXmlNodeList_TypeDefinitionIndex = 1900;

	struct alignas(8) XmlNamedNodeMap_SmallXmlNodeList
	{
		::System::Object* field; // 0x10

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Add(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_ADD_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GETENUMERATOR_OFFSET))(this);
		}
	};
}
