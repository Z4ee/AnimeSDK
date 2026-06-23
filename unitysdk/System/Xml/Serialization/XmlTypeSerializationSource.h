#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/SerializationSource.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml::Serialization { class XmlAttributeOverrides; }
namespace System::Xml::Serialization { class XmlRootAttribute; }

#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2E06F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2E07F0)
#define SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E05B0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlTypeSerializationSource_TypeDefinitionIndex = 1867;

	class XmlTypeSerializationSource : public ::System::Xml::Serialization::SerializationSource
	{
	public:
		::System::String* attributeOverridesHash; // 0x28
		::System::String* rootHash; // 0x30
		::System::Type* type; // 0x38

		::System::Void _ctor(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::System::String* namspace, ::Il2CppArray<::System::Type*>* includedTypes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE__CTOR_OFFSET))(this, type, root, attributeOverrides, namspace, includedTypes);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLTYPESERIALIZATIONSOURCE_GETHASHCODE_OFFSET))(this);
		}
	};
}
