#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET UNITYSDK_OFFSET(0x1DE46BA0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET UNITYSDK_OFFSET(0x1DE46AB0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1DE46920)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET UNITYSDK_OFFSET(0x1DE469C0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1DE46880)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE46FF0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE46EE0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ReflectionHelper_TypeDefinitionIndex = 1864;

	class ReflectionHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Reflection::ParameterModifier>** StaticGet_empty_modifiers()
		{
			return (::Il2CppArray<::System::Reflection::ParameterModifier>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionHelper_TypeDefinitionIndex)->GetStaticField(0x22B0);
		}
		::System::Collections::Hashtable* _schemaTypes; // 0x10
		::System::Collections::Hashtable* _clrTypes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CCTOR_OFFSET))();
		}

		::System::Void RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* map, ::System::String* xmlType, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET))(this, map, xmlType, ns);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(::System::String* xmlType, ::System::String* ns)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET))(this, xmlType, ns);
		}

		::System::Void RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Type* type, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET))(this, map, type, ns);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(::System::Type* type, ::System::String* ns)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET))(this, type, ns);
		}

		static ::System::Void CheckSerializableType(::System::Type* type, ::System::Boolean allowPrivateConstructors)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET))(type, allowPrivateConstructors);
		}
	};
}
