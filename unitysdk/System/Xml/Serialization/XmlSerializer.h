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

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_1_OFFSET UNITYSDK_OFFSET(0x1D669470)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1D669130)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_1_OFFSET UNITYSDK_OFFSET(0x1D669C80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1D669180)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1D6693C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1D6694D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D6691D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D6690B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x1D6690D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1D6690F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D669110)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1D669940)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1D669C70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1D6699C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D669700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D668E00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D668F90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D668F80)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializer_TypeDefinitionIndex = 1916;

	class XmlSerializer : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_DefaultEncoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x2230);
		}
		static ::System::Collections::Hashtable** StaticGet_serializerTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0x2238);
		}
		static ::System::Int32* StaticGet_generationThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0xEE0);
		}
		static ::System::Boolean* StaticGet_backgroundGeneration()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0xEE4);
		}
		static ::System::Boolean* StaticGet_generatorFallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0xEE5);
		}
		static ::System::Boolean* StaticGet_deleteTempFiles()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(XmlSerializer_TypeDefinitionIndex)->GetStaticField(0xEE6);
		}
		::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode; // 0x10
		::System::Xml::Serialization::XmlSerializer_SerializerData* serializerData; // 0x18
		::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement; // 0x20
		::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute; // 0x28
		::System::Xml::Serialization::XmlMapping* typeMapping; // 0x30
		::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject; // 0x38
		::System::Boolean customSerializer; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::Il2CppArray<::System::Type*>* extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root, ::System::String* defaultNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Xml::Serialization::XmlAttributeOverrides*, ::Il2CppArray<::System::Type*>*, ::System::Xml::Serialization::XmlRootAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER__CTOR_1_OFFSET))(this, type, overrides, extraTypes, root, defaultNamespace);
		}

		::System::Void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlAttributeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNATTRIBUTE_OFFSET))(this, e);
		}

		::System::Void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlElementEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNELEMENT_OFFSET))(this, e);
		}

		::System::Void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlNodeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNKNOWNNODE_OFFSET))(this, e);
		}

		::System::Void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::UnreferencedObjectEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_ONUNREFERENCEDOBJECT_OFFSET))(this, e);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader()
		{
			return ((::System::Xml::Serialization::XmlSerializationReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter()
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_OFFSET))(this);
		}

		::System::Object* Deserialize(::System::IO::TextReader* textReader)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_OFFSET))(this, textReader);
		}

		::System::Object* Deserialize_1(::System::Xml::XmlReader* xmlReader)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_1_OFFSET))(this, xmlReader);
		}

		::System::Object* Deserialize_2(::System::Xml::Serialization::XmlSerializationReader* reader)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_DESERIALIZE_2_OFFSET))(this, reader);
		}

		::System::Void Serialize(::System::Object* o, ::System::Xml::Serialization::XmlSerializationWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_OFFSET))(this, o, writer);
		}

		::System::Void Serialize_1(::System::IO::TextWriter* textWriter, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_1_OFFSET))(this, textWriter, o);
		}

		::System::Void Serialize_2(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_2_OFFSET))(this, xmlWriter, o);
		}

		::System::Void Serialize_3(::System::Xml::XmlWriter* xmlWriter, ::System::Object* o, ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Object*, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_SERIALIZE_3_OFFSET))(this, xmlWriter, o, namespaces);
		}

		::System::Xml::Serialization::XmlSerializationWriter* CreateWriter_1(::System::Xml::Serialization::XmlMapping* typeMapping)
		{
			return ((::System::Xml::Serialization::XmlSerializationWriter*(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEWRITER_1_OFFSET))(this, typeMapping);
		}

		::System::Xml::Serialization::XmlSerializationReader* CreateReader_1(::System::Xml::Serialization::XmlMapping* typeMapping)
		{
			return ((::System::Xml::Serialization::XmlSerializationReader*(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZER_CREATEREADER_1_OFFSET))(this, typeMapping);
		}
	};
}
