#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::Data { class DataTable; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_DATA_XMLSCHEMA_FEQUALIDENTITY_OFFSET UNITYSDK_OFFSET(0x1DC67710)
#define SYSTEM_DATA_XMLSCHEMA_GENUNIQUECOLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1DC678E0)
#define SYSTEM_DATA_XMLSCHEMA_GETBOOLEANATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DC677A0)
#define SYSTEM_DATA_XMLSCHEMA_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1DC67160)
#define SYSTEM_DATA_XMLSCHEMA_SETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1DC671C0)
#define SYSTEM_DATA_XMLSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC679F0)

namespace System::Data
{
	inline static constexpr unsigned int XMLSchema_TypeDefinitionIndex = 38690;

	class XMLSchema : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA__CTOR_OFFSET))(this);
		}

		static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GETCONVERTER_OFFSET))(type);
		}

		static ::System::Void SetProperties(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Xml::XmlAttributeCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_SETPROPERTIES_OFFSET))(instance, attrs);
		}

		static ::System::Boolean FEqualIdentity(::System::Xml::XmlNode* node, ::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_FEQUALIDENTITY_OFFSET))(node, name, ns);
		}

		static ::System::Boolean GetBooleanAttribute(::System::Xml::XmlElement* element, ::System::String* attrName, ::System::String* attrNS, ::System::Boolean defVal)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlElement*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GETBOOLEANATTRIBUTE_OFFSET))(element, attrName, attrNS, defVal);
		}

		static ::System::String* GenUniqueColumnName(::System::String* proposedName, ::System::Data::DataTable* table)
		{
			return ((::System::String*(*)(::System::String*, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_XMLSCHEMA_GENUNIQUECOLUMNNAME_OFFSET))(proposedName, table);
		}
	};
}
