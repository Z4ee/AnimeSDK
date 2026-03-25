#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamedNodeMap.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_ADDNODE_OFFSET UNITYSDK_OFFSET(0x185FAF30)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_APPEND_OFFSET UNITYSDK_OFFSET(0x185FAD40)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_DETACH_OFFSET UNITYSDK_OFFSET(0x185FAE50)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x185FA930)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x185FACB0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTPARENTINTOELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FB010)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INTERNALAPPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185FAC30)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_PREPAREPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FA100)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x185FB520)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x185FB450)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEDUPLICATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185FB750)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x185FB250)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEPARENTFROMELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FB830)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x185FB1B0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_RESETPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x185FA230)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x185FAA40)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x185FB640)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185FB700)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185FB6E0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185FB6F0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x185FA920)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAttributeCollection_TypeDefinitionIndex = 1880;

	class XmlAttributeCollection : public ::System::Xml::XmlNamedNodeMap
	{
	public:
		::System::Void _ctor(::System::Xml::XmlNode* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_OFFSET))(this, parent);
		}

		::System::Xml::XmlAttribute* get_ItemOf(::System::Int32 i)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET))(this, i);
		}

		::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SETNAMEDITEM_OFFSET))(this, node);
		}

		::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* node)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_APPEND_OFFSET))(this, node);
		}

		::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* node)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVE_OFFSET))(this, node);
		}

		::System::Xml::XmlAttribute* RemoveAt(::System::Int32 i)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEAT_OFFSET))(this, i);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEALL_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_ADDNODE_OFFSET))(this, node);
		}

		::System::Xml::XmlNode* InsertNodeAt(::System::Int32 i, ::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTNODEAT_OFFSET))(this, i, node);
		}

		::System::Xml::XmlNode* RemoveNodeAt(::System::Int32 i)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVENODEAT_OFFSET))(this, i);
		}

		::System::Void Detach(::System::Xml::XmlAttribute* attr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_DETACH_OFFSET))(this, attr);
		}

		::System::Void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* attr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTPARENTINTOELEMENTIDATTRMAP_OFFSET))(this, attr);
		}

		::System::Void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* attr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEPARENTFROMELEMENTIDATTRMAP_OFFSET))(this, attr);
		}

		::System::Int32 RemoveDuplicateAttribute(::System::Xml::XmlAttribute* attr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEDUPLICATEATTRIBUTE_OFFSET))(this, attr);
		}

		::System::Boolean PrepareParentInElementIdAttrMap(::System::String* attrPrefix, ::System::String* attrLocalName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_PREPAREPARENTINELEMENTIDATTRMAP_OFFSET))(this, attrPrefix, attrLocalName);
		}

		::System::Void ResetParentInElementIdAttrMap(::System::String* oldVal, ::System::String* newVal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_RESETPARENTINELEMENTIDATTRMAP_OFFSET))(this, oldVal, newVal);
		}

		::System::Xml::XmlAttribute* InternalAppendAttribute(::System::Xml::XmlAttribute* node)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INTERNALAPPENDATTRIBUTE_OFFSET))(this, node);
		}
	};
}
