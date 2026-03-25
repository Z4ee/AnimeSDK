#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x185ED410)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x185F1AC0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x185F1AE0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x185D3340)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x185F1B00)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x185E2B90)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET UNITYSDK_OFFSET(0x185F1AD0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET UNITYSDK_OFFSET(0x185F1AF0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x185F1AB0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x185F1B10)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x185D33E0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberElement_TypeDefinitionIndex = 2037;

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

		::System::Void set_ElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfoList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ELEMENTINFO_OFFSET))(this, value);
		}

		::System::String* get_ChoiceMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICEMEMBER_OFFSET))(this);
		}

		::System::Void set_ChoiceMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICEMEMBER_OFFSET))(this, value);
		}

		::System::Xml::Serialization::TypeData* get_ChoiceTypeData()
		{
			return ((::System::Xml::Serialization::TypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_CHOICETYPEDATA_OFFSET))(this);
		}

		::System::Void set_ChoiceTypeData(::System::Xml::Serialization::TypeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_CHOICETYPEDATA_OFFSET))(this, value);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, ::System::Object* memberValue)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET))(this, ob, memberValue);
		}

		::System::Void SetChoice(::System::Object* ob, ::System::Object* choice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET))(this, ob, choice);
		}

		::System::Boolean get_IsXmlTextCollector()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ISXMLTEXTCOLLECTOR_OFFSET))(this);
		}

		::System::Void set_IsXmlTextCollector(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SET_ISXMLTEXTCOLLECTOR_OFFSET))(this, value);
		}
	};
}
