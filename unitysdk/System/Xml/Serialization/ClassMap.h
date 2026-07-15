#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Xml/Serialization/ObjectMap.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapMemberAnyAttribute; }
namespace System::Xml::Serialization { class XmlTypeMapMemberAnyElement; }
namespace System::Xml::Serialization { class XmlTypeMapMemberAttribute; }
namespace System::Xml::Serialization { class XmlTypeMapMemberExpandable; }
namespace System::Xml::Serialization { class XmlTypeMapMemberNamespaces; }

#define SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x19681330)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET UNITYSDK_OFFSET(0x19682530)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19682740)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_1_OFFSET UNITYSDK_OFFSET(0x19682EC0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x196828A0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x19684270)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x19683BB0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYATTRIBUTEMEMBER_OFFSET UNITYSDK_OFFSET(0x19683B90)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYELEMENTMEMBER_OFFSET UNITYSDK_OFFSET(0x19683B80)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ELEMENTMEMBERS_OFFSET UNITYSDK_OFFSET(0x19684260)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_FLATLISTS_OFFSET UNITYSDK_OFFSET(0x19684280)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET UNITYSDK_OFFSET(0x196847B0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET UNITYSDK_OFFSET(0x19683570)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_LISTMEMBERS_OFFSET UNITYSDK_OFFSET(0x19684290)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_NAMESPACEDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x19683BA0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_RETURNMEMBER_OFFSET UNITYSDK_OFFSET(0x196842B0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET UNITYSDK_OFFSET(0x196842C0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_XMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x196842A0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET UNITYSDK_OFFSET(0x196825D0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_SETCANBESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x196847A0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19684850)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ClassMap_TypeDefinitionIndex = 2051;

	class ClassMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::System::Collections::ArrayList* _allMembers; // 0x10
		::System::Xml::Serialization::XmlTypeMapMember* _returnMember; // 0x18
		::System::Collections::ArrayList* _flatLists; // 0x20
		::System::Collections::ArrayList* _listMembers; // 0x28
		::System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector; // 0x30
		::System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations; // 0x38
		::Il2CppArray<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>* _attributeMembersArray; // 0x40
		::System::Collections::ArrayList* _elementMembers; // 0x48
		::System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement; // 0x50
		::System::Collections::Hashtable* _attributeMembers; // 0x58
		::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute; // 0x60
		::System::Collections::Hashtable* _elements; // 0x68
		::System::Collections::ArrayList* _membersWithDefault; // 0x70
		::System::Boolean _canBeSimpleType; // 0x78
		::System::Boolean _ignoreMemberNamespace; // 0x79
		::System::Nullable_1<::System::Boolean> _isOrderDependentMap; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP__CTOR_OFFSET))(this);
		}

		::System::Void AddMember(::System::Xml::Serialization::XmlTypeMapMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET))(this, a1);
		}

		::System::Void RegisterFlatList(::System::Xml::Serialization::XmlTypeMapMemberExpandable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMemberExpandable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAttribute* GetAttribute(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapMemberAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_1_OFFSET))(this, a1, a2);
		}

		::System::String* BuildKey(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsOrderDependentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAnyElement* get_DefaultAnyElementMember()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMemberAnyElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYELEMENTMEMBER_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* get_DefaultAnyAttributeMember()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_DEFAULTANYATTRIBUTEMEMBER_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapMemberNamespaces* get_NamespaceDeclarations()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMemberNamespaces*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_NAMESPACEDECLARATIONS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_AttributeMembers()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_ElementMembers()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ELEMENTMEMBERS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_AllMembers()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_FlatLists()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_FLATLISTS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_ListMembers()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_LISTMEMBERS_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapMember* get_XmlTextCollector()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_XMLTEXTCOLLECTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapMember* get_ReturnMember()
		{
			return ((::System::Xml::Serialization::XmlTypeMapMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_RETURNMEMBER_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* get_SimpleContentBaseType()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET))(this);
		}

		::System::Void SetCanBeSimpleType(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_SETCANBESIMPLETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSimpleContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET))(this);
		}
	};
}
