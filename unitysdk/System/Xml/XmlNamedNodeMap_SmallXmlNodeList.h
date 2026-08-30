#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_ADD_OFFSET UNITYSDK_OFFSET(0x3ADF570)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x3ADF5A0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3ADF4A0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3ADF560)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_INSERT_OFFSET UNITYSDK_OFFSET(0x3ADF590)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x3ADF580)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_SmallXmlNodeList_TypeDefinitionIndex = 1912;

	struct alignas(8) XmlNamedNodeMap_SmallXmlNodeList
	{
		::System::Object* field; // 0x10

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_ADD_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SMALLXMLNODELIST_GETENUMERATOR_OFFSET))(this);
		}
	};
}
