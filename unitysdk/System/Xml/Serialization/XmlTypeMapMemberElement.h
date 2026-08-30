#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E86D2C0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E872D50)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x1E872D70)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1E849CB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1E872D90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x1E85FF40)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E872D60)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x1E872D80)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1E872D40)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1E872DA0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E849D50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberElement_TypeDefinitionIndex = 2049;

	class XmlTypeMapMemberElement : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::String* _choiceMember; // 0x50
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo; // 0x58
		::System::Xml::Serialization::TypeData* _choiceTypeData; // 0x60
		::System::Boolean _isTextCollector; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo()
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET))(this);
		}

		::System::Void set_ElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfoList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET))(this, a1);
		}

		::System::String* get_ChoiceMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET))(this);
		}

		::System::Void set_ChoiceMember(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::TypeData* get_ChoiceTypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET))(this);
		}

		::System::Void set_ChoiceTypeData(::System::Xml::Serialization::TypeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetChoice(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsXmlTextCollector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET))(this);
		}

		::System::Void set_IsXmlTextCollector(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET))(this, a1);
		}
	};
}
