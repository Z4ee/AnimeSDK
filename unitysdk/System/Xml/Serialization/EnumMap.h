#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/ObjectMap.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class EnumMap_EnumMapMember; }

#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x1E4AEB30)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x1E4AE7E0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AE640)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int EnumMap_TypeDefinitionIndex = 1937;

	class EnumMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::Il2CppArray<::System::String*>* _xmlNames; // 0x10
		::Il2CppArray<::System::Int64>* _values; // 0x18
		::Il2CppArray<::System::String*>* _enumNames; // 0x20
		::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>* _members; // 0x28
		::System::Boolean _isFlags; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>* members, ::System::Boolean isFlags)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP__CTOR_OFFSET))(this, members, isFlags);
		}

		::System::String* GetXmlName(::System::String* typeName, ::System::Object* enumValue)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET))(this, typeName, enumValue);
		}

		::System::String* GetEnumName(::System::String* typeName, ::System::String* xmlName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET))(this, typeName, xmlName);
		}
	};
}
