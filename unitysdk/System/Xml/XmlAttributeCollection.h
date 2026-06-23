#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamedNodeMap.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1DE4AA60)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_APPEND_OFFSET UNITYSDK_OFFSET(0x1DE4A840)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_DETACH_OFFSET UNITYSDK_OFFSET(0x1DE4A950)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_FINDNODEOFFSETNS_OFFSET UNITYSDK_OFFSET(0x1DE4A2E0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_1_OFFSET UNITYSDK_OFFSET(0x1DE49F70)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_2_OFFSET UNITYSDK_OFFSET(0x1DE4A100)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x1DE49E60)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x1DE4A7B0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTPARENTINTOELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x1DE4AB40)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INTERNALAPPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DE4A730)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_PREPAREPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x1DE4B640)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1DE4B0C0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1DE4AFD0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEDUPLICATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DE4B3A0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x1DE4ADD0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEPARENTFROMELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x1DE4B480)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DE4AD00)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_RESETPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x1DE4B760)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x1DE4A540)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DE4B230)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DE4B320)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1DE4B300)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1DE4B310)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4B810)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE49E50)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAttributeCollection_TypeDefinitionIndex = 1751;

	class XmlAttributeCollection : public ::System::Xml::XmlNamedNodeMap
	{
	public:
		::System::Void _ctor(::System::Xml::XmlNode* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_OFFSET))(this, parent);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* get_ItemOf(::System::Int32 i)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET))(this, i);
		}

		::System::Xml::XmlAttribute* get_ItemOf_1(::System::String* name)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_1_OFFSET))(this, name);
		}

		::System::Xml::XmlAttribute* get_ItemOf_2(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_2_OFFSET))(this, localName, namespaceURI);
		}

		::System::Int32 FindNodeOffsetNS(::System::Xml::XmlAttribute* node)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_FINDNODEOFFSETNS_OFFSET))(this, node);
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
