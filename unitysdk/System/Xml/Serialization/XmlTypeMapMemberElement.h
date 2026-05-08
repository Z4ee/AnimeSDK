#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlTypeMapMember.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfoList; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1BACD8B0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET UNITYSDK_OFFSET(0x1BACD7A0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET UNITYSDK_OFFSET(0x1BACE080)
#define SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACD730)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeMapMemberElement_TypeDefinitionIndex = 1927;

	class XmlTypeMapMemberElement : public ::System::Xml::Serialization::XmlTypeMapMember
	{
	public:
		::System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo; // 0x50
		::System::Xml::Serialization::TypeData* _choiceTypeData; // 0x58
		::System::String* _choiceMember; // 0x60
		::System::Boolean _isTextCollector; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT__CTOR_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfoList* get_ElementInfo()
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfoList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_GET_ELEMENTINFO_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlTypeMapElementInfo* FindElement(::System::Object* ob, ::System::Object* memberValue)
		{
			return ((::System::Xml::Serialization::XmlTypeMapElementInfo*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_FINDELEMENT_OFFSET))(this, ob, memberValue);
		}

		::System::Void SetChoice(::System::Object* ob, ::System::Object* choice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPEMAPMEMBERELEMENT_SETCHOICE_OFFSET))(this, ob, choice);
		}
	};
}
