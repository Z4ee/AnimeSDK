#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Serialization/SerializationFormat.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Serialization { class ObjectMap; }

#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_ELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1E83E720)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E83E790)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E83E730)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_OBJECTMAP_OFFSET UNITYSDK_OFFSET(0x1E83E750)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_RELATEDMAPS_OFFSET UNITYSDK_OFFSET(0x1E83E770)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SETKEY_OFFSET UNITYSDK_OFFSET(0x1E83E740)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E83E7A0)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_OBJECTMAP_OFFSET UNITYSDK_OFFSET(0x1E83E760)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_RELATEDMAPS_OFFSET UNITYSDK_OFFSET(0x1E83E780)
#define SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83E710)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlMapping_TypeDefinitionIndex = 2012;

	class XmlMapping : public ::System::Object
	{
	public:
		::System::Xml::Serialization::ObjectMap* map; // 0x10
		::System::String* _namespace; // 0x18
		::System::String* key; // 0x20
		::System::Collections::ArrayList* relatedMaps; // 0x28
		::System::String* _elementName; // 0x30
		::System::Xml::Serialization::SerializationFormat format; // 0x38

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_ElementName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_ELEMENTNAME_OFFSET))(this);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void SetKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SETKEY_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::ObjectMap* get_ObjectMap()
		{
			return ((::System::Xml::Serialization::ObjectMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_OBJECTMAP_OFFSET))(this);
		}

		::System::Void set_ObjectMap(::System::Xml::Serialization::ObjectMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ObjectMap*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_OBJECTMAP_OFFSET))(this, a1);
		}

		::System::Collections::ArrayList* get_RelatedMaps()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_RELATEDMAPS_OFFSET))(this);
		}

		::System::Void set_RelatedMaps(::System::Collections::ArrayList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_RELATEDMAPS_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::SerializationFormat get_Format()
		{
			return ((::System::Xml::Serialization::SerializationFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_Format(::System::Xml::Serialization::SerializationFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::SerializationFormat))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLMAPPING_SET_FORMAT_OFFSET))(this, a1);
		}
	};
}
