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

#define SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x1AFFD760)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET UNITYSDK_OFFSET(0x1AFFE310)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFFE4B0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1AFFE9D0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1AFFE5A0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1AFFF200)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET UNITYSDK_OFFSET(0x1AFFF920)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET UNITYSDK_OFFSET(0x1AFFEE30)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET UNITYSDK_OFFSET(0x1AFFF670)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET UNITYSDK_OFFSET(0x1AFFE3B0)
#define SYSTEM_XML_SERIALIZATION_CLASSMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFF9C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ClassMap_TypeDefinitionIndex = 1936;

	class ClassMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute; // 0x10
		::System::Collections::Hashtable* _elements; // 0x18
		::System::Collections::ArrayList* _flatLists; // 0x20
		::Il2CppArray<::System::Xml::Serialization::XmlTypeMapMemberAttribute*>* _attributeMembersArray; // 0x28
		::System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement; // 0x30
		::System::Collections::ArrayList* _listMembers; // 0x38
		::System::Collections::ArrayList* _elementMembers; // 0x40
		::System::Collections::ArrayList* _membersWithDefault; // 0x48
		::System::Xml::Serialization::XmlTypeMapMember* _returnMember; // 0x50
		::System::Collections::Hashtable* _attributeMembers; // 0x58
		::System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations; // 0x60
		::System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector; // 0x68
		::System::Collections::ArrayList* _allMembers; // 0x70
		::System::Boolean _ignoreMemberNamespace; // 0x78
		::System::Boolean _canBeSimpleType; // 0x79
		::System::Nullable_1<::System::Boolean> _isOrderDependentMap; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP__CTOR_OFFSET))(this);
		}

		::System::Void AddMember(::System::Xml::Serialization::XmlTypeMapMember* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_ADDMEMBER_OFFSET))(this, member);
		}

		::System::Void RegisterFlatList(::System::Xml::Serialization::XmlTypeMapMemberExpandable* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMemberExpandable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_REGISTERFLATLIST_OFFSET))(this, member);
		}

		::System::Xml::Serialization::XmlTypeMapMemberAttribute* GetAttribute(::System::String* name, ::System::String* ns)
		{
			return ((::System::Xml::Serialization::XmlTypeMapMemberAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETATTRIBUTE_OFFSET))(this, name, ns);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement(::System::String* name, ::System::String* ns, ::System::Int32 minimalOrder)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_OFFSET))(this, name, ns, minimalOrder);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* GetElement_1(::System::String* name, ::System::String* ns)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GETELEMENT_1_OFFSET))(this, name, ns);
		}

		::System::String* BuildKey(::System::String* name, ::System::String* ns, ::System::Int32 explicitOrder)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_BUILDKEY_OFFSET))(this, name, ns, explicitOrder);
		}

		::System::Boolean get_IsOrderDependentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ISORDERDEPENDENTMAP_OFFSET))(this);
		}

		::System::Collections::ICollection* get_AttributeMembers()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_ATTRIBUTEMEMBERS_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* get_SimpleContentBaseType()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_SIMPLECONTENTBASETYPE_OFFSET))(this);
		}

		::System::Boolean get_HasSimpleContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_CLASSMAP_GET_HASSIMPLECONTENT_OFFSET))(this);
		}
	};
}
