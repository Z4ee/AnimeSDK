#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AE6F110)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET UNITYSDK_OFFSET(0x1AE6F020)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1AE6EEA0)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET UNITYSDK_OFFSET(0x1AE6EF50)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1AE6EE20)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE6F530)
#define SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6F480)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int ReflectionHelper_TypeDefinitionIndex = 1979;

	class ReflectionHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Reflection::ParameterModifier>** StaticGet_empty_modifiers()
		{
			return (::Il2CppArray<::System::Reflection::ParameterModifier>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionHelper_TypeDefinitionIndex)->GetStaticField(0x16440);
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

		::System::Void RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERSCHEMATYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDSCHEMATYPE_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_REGISTERCLRTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Xml::Serialization::XmlTypeMapping*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_GETREGISTEREDCLRTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Void CheckSerializableType(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_REFLECTIONHELPER_CHECKSERIALIZABLETYPE_OFFSET))(a1, a2);
		}
	};
}
