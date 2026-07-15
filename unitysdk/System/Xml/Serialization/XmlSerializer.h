#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class TextReader; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class UnreferencedObjectEventArgs; }
namespace System::Xml::Serialization { class UnreferencedObjectEventHandler; }
namespace System::Xml::Serialization { class XmlAttributeEventArgs; }
namespace System::Xml::Serialization { class XmlAttributeEventHandler; }
namespace System::Xml::Serialization { class XmlAttributeOverrides; }
namespace System::Xml::Serialization { class XmlElementEventArgs; }
namespace System::Xml::Serialization { class XmlElementEventHandler; }
namespace System::Xml::Serialization { class XmlMapping; }
namespace System::Xml::Serialization { class XmlNodeEventArgs; }
namespace System::Xml::Serialization { class XmlNodeEventHandler; }
namespace System::Xml::Serialization { class XmlRootAttribute; }
namespace System::Xml::Serialization { class XmlSerializationReader; }
namespace System::Xml::Serialization { class XmlSerializationWriter; }
namespace System::Xml::Serialization { class XmlSerializerNamespaces; }
namespace System::Xml::Serialization { class XmlSerializer_SerializerData; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_1_OFFSET UNITYSDK_OFFSET(0x162AB740)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x162AB390)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_1_OFFSET UNITYSDK_OFFSET(0x162AC060)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x162AB3E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x162AB5C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x162AB7A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162AB430)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x162AB310)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x162AB330)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x162AB350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x162AB370)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x162ABCB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x162ABD30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x162ABA40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162AB0B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162AB1F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x162AB1D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializer_TypeDefinitionIndex = 2033;

	class XmlSerializer : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_DefaultEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x25E90);
		}
		static ::System::Collections::Hashtable** StaticGet_serializerTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x25E98);
		}
		static ::System::Int32* StaticGet_generationThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x73E0);
		}
		static ::System::Boolean* StaticGet_generatorFallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x73E4);
		}
		static ::System::Boolean* StaticGet_backgroundGeneration()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x73E5);
		}
		static ::System::Boolean* StaticGet_deleteTempFiles()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x73E6);
		}
		::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute; // 0x10
		::System::Xml::Serialization::XmlSerializer_SerializerData* serializerData; // 0x18
		::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement; // 0x20
		::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode; // 0x28
		::System::Xml::Serialization::XmlMapping* typeMapping; // 0x30
		::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject; // 0x38
		::System::Boolean customSerializer; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::Xml::Serialization::XmlAttributeOverrides* a2, ::Il2CppArray<::System::Type*>* a3, ::System::Xml::Serialization::XmlRootAttribute* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::Il2CppArray<::System::Type*>*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlAttributeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlElementEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET))(this, a1);
		}

		::System::Void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlNodeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET))(this, a1);
		}

		::System::Void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::UnreferencedObjectEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader()
		{
			return ((::System::Xml::Serialization::XmlSerializationReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter()
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET))(this);
		}

		::System::Object* Deserialize(::System::IO::TextReader* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET))(this, a1);
		}

		::System::Object* Deserialize_1(::System::Xml::XmlReader* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_1_OFFSET))(this, a1);
		}

		::System::Object* Deserialize_2(::System::Xml::Serialization::XmlSerializationReader* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_2_OFFSET))(this, a1);
		}

		::System::Void Serialize(::System::Object* a1, ::System::Xml::Serialization::XmlSerializationWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Serialize_1(::System::IO::TextWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_1_OFFSET))(this, a1, a2);
		}

		::System::Void Serialize_2(::System::Xml::XmlWriter* a1, ::System::Object* a2, ::System::Xml::Serialization::XmlSerializerNamespaces* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Object*, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter_1(::System::Xml::Serialization::XmlMapping* a1)
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_1_OFFSET))(this, a1);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader_1(::System::Xml::Serialization::XmlMapping* a1)
		{
			return ((::System::Xml::Serialization::XmlSerializationReader*(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_1_OFFSET))(this, a1);
		}
	};
}
