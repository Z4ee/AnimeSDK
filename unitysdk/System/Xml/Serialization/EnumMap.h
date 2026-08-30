#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/ObjectMap.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml::Serialization { class EnumMap_EnumMapMember; }

#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x1E82EFF0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x1E82E800)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ENUMNAMES_OFFSET UNITYSDK_OFFSET(0x1E82E7D0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ISFLAGS_OFFSET UNITYSDK_OFFSET(0x1E82E7C0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1E82E7F0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_XMLNAMES_OFFSET UNITYSDK_OFFSET(0x1E82E7E0)
#define SYSTEM_XML_SERIALIZATION_ENUMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82E690)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int EnumMap_TypeDefinitionIndex = 2060;

	class EnumMap : public ::System::Xml::Serialization::ObjectMap
	{
	public:
		::Il2CppArray<::System::String*>* _xmlNames; // 0x10
		::Il2CppArray<::System::String*>* _enumNames; // 0x18
		::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>* _members; // 0x20
		::Il2CppArray<::System::Int64>* _values; // 0x28
		::System::Boolean _isFlags; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Serialization::EnumMap_EnumMapMember*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsFlags()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ISFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_EnumNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_ENUMNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_XmlNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_XMLNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int64>* get_Values()
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GET_VALUES_OFFSET))(this);
		}

		::System::String* GetXmlName(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETXMLNAME_OFFSET))(this, a1, a2);
		}

		::System::String* GetEnumName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_ENUMMAP_GETENUMNAME_OFFSET))(this, a1, a2);
		}
	};
}
