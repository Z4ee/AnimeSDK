#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Serialization { class TypeData; }

#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET UNITYSDK_OFFSET(0x1DD22E50)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET UNITYSDK_OFFSET(0x1DD23220)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET UNITYSDK_OFFSET(0x1DD232D0)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1DD23DB0)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1DD23380)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD24690)
#define SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD24680)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlCustomFormatter_TypeDefinitionIndex = 1882;

	class XmlCustomFormatter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_allTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlCustomFormatter_TypeDefinitionIndex)->GetStaticField(0x1D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER__CCTOR_OFFSET))();
		}

		static ::System::String* FromEnum(::System::Int64 value, ::Il2CppArray<::System::String*>* values, ::Il2CppArray<::System::Int64>* ids, ::System::String* typeName)
		{
			return ((::System::String*(*)(::System::Int64, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Int64>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMENUM_OFFSET))(value, values, ids, typeName);
		}

		static ::System::String* FromXmlName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNAME_OFFSET))(name);
		}

		static ::System::String* FromXmlNCName(::System::String* ncName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLNCNAME_OFFSET))(ncName);
		}

		static ::System::String* ToXmlString(::System::Xml::Serialization::TypeData* type, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_TOXMLSTRING_OFFSET))(type, value);
		}

		static ::System::Object* FromXmlString(::System::Xml::Serialization::TypeData* type, ::System::String* value)
		{
			return ((::System::Object*(*)(::System::Xml::Serialization::TypeData*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLCUSTOMFORMATTER_FROMXMLSTRING_OFFSET))(type, value);
		}
	};
}
