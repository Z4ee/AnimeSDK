#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlSerializationGeneratedCode.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class Queue; }
namespace System::Runtime::Serialization { class ObjectIDGenerator; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Serialization { class IXmlSerializable; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlSerializationWriteCallback; }
namespace System::Xml::Serialization { class XmlSerializerNamespaces; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ADDWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D188EE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ALREADYQUEUED_OFFSET UNITYSDK_OFFSET(0x1D189700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CHECKREFERENCEQUEUE_OFFSET UNITYSDK_OFFSET(0x1D18B880)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNANYELEMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D189000)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1D189210)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D189100)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_FROMXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1D189300)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETID_OFFSET UNITYSDK_OFFSET(0x1D189600)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETNAMESPACEPREFIX_OFFSET UNITYSDK_OFFSET(0x1D189740)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1D189500)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D188D10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1D18B920)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_TOPLEVELELEMENT_OFFSET UNITYSDK_OFFSET(0x1D1898E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x1D18BC80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1D189870)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D1898F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTENCODED_OFFSET UNITYSDK_OFFSET(0x1D189A80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTLITERAL_OFFSET UNITYSDK_OFFSET(0x1D189F60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_1_OFFSET UNITYSDK_OFFSET(0x1D18A450)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1D18A430)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D18A8D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1D18A8B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1D18AB50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1D18A880)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENAMESPACEDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1D18ABA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMEENCODED_OFFSET UNITYSDK_OFFSET(0x1D18B0F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMELITERAL_OFFSET UNITYSDK_OFFSET(0x1D18B1C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGENCODED_OFFSET UNITYSDK_OFFSET(0x1D18B2B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGLITERAL_OFFSET UNITYSDK_OFFSET(0x1D18B2C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGENCODED_OFFSET UNITYSDK_OFFSET(0x1D189E70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGLITERAL_OFFSET UNITYSDK_OFFSET(0x1D18A350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEPOTENTIALLYREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1D18B2F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D18B9B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1D18C0E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_1_OFFSET UNITYSDK_OFFSET(0x1D18C320)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1D18C300)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1D18C490)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1D18B860)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1D18C510)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_3_OFFSET UNITYSDK_OFFSET(0x1D18C4E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_4_OFFSET UNITYSDK_OFFSET(0x1D18C530)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1D18A690)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITETYPEDPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1D18D030)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1D18D3B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D18D3F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLNODE_OFFSET UNITYSDK_OFFSET(0x1D189960)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXSITYPE_OFFSET UNITYSDK_OFFSET(0x1D18A6B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D188C70)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriter_TypeDefinitionIndex = 1912;

	class XmlSerializationWriter : public ::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
	public:
		::System::Collections::ArrayList* namespaces; // 0x10
		::System::Collections::Hashtable* serializedObjects; // 0x18
		::System::Xml::XmlWriter* writer; // 0x20
		::System::Runtime::Serialization::ObjectIDGenerator* idGenerator; // 0x28
		::System::Collections::Hashtable* callbacks; // 0x30
		::System::Collections::Queue* referencedElements; // 0x38
		::System::Boolean topLevelElement; // 0x40
		::System::Int32 qnameCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Xml::XmlWriter* writer, ::System::Xml::Serialization::XmlSerializerNamespaces* nss)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_INITIALIZE_OFFSET))(this, writer, nss);
		}

		::System::Void AddWriteCallback(::System::Type* type, ::System::String* typeName, ::System::String* typeNs, ::System::Xml::Serialization::XmlSerializationWriteCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Xml::Serialization::XmlSerializationWriteCallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ADDWRITECALLBACK_OFFSET))(this, type, typeName, typeNs, callback);
		}

		::System::Exception* CreateUnknownAnyElementException(::System::String* name, ::System::String* ns)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNANYELEMENTEXCEPTION_OFFSET))(this, name, ns);
		}

		::System::Exception* CreateUnknownTypeException(::System::Object* o)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET))(this, o);
		}

		::System::Exception* CreateUnknownTypeException_1(::System::Type* type)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_1_OFFSET))(this, type);
		}

		::System::String* FromXmlQualifiedName(::System::Xml::XmlQualifiedName* xmlQualifiedName)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_FROMXMLQUALIFIEDNAME_OFFSET))(this, xmlQualifiedName);
		}

		::System::String* GetId(::System::Object* o, ::System::Boolean addToReferencesList)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETID_OFFSET))(this, o, addToReferencesList);
		}

		::System::Boolean AlreadyQueued(::System::Object* ob)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ALREADYQUEUED_OFFSET))(this, ob);
		}

		::System::String* GetNamespacePrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETNAMESPACEPREFIX_OFFSET))(this, ns);
		}

		::System::String* GetQualifiedName(::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETQUALIFIEDNAME_OFFSET))(this, name, ns);
		}

		::System::Void TopLevelElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_TOPLEVELELEMENT_OFFSET))(this);
		}

		::System::Void WriteAttribute(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_OFFSET))(this, localName, ns, value);
		}

		::System::Void WriteAttribute_1(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_1_OFFSET))(this, prefix, localName, ns, value);
		}

		::System::Void WriteXmlNode(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLNODE_OFFSET))(this, node);
		}

		::System::Void WriteElementEncoded(::System::Xml::XmlNode* node, ::System::String* name, ::System::String* ns, ::System::Boolean isNullable, ::System::Boolean any)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTENCODED_OFFSET))(this, node, name, ns, isNullable, any);
		}

		::System::Void WriteElementLiteral(::System::Xml::XmlNode* node, ::System::String* name, ::System::String* ns, ::System::Boolean isNullable, ::System::Boolean any)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTLITERAL_OFFSET))(this, node, name, ns, isNullable, any);
		}

		::System::Void WriteElementQualifiedName(::System::String* localName, ::System::String* ns, ::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_OFFSET))(this, localName, ns, value);
		}

		::System::Void WriteElementQualifiedName_1(::System::String* localName, ::System::String* ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_1_OFFSET))(this, localName, ns, value, xsiType);
		}

		::System::Void WriteElementString(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_OFFSET))(this, localName, ns, value);
		}

		::System::Void WriteElementString_1(::System::String* localName, ::System::String* ns, ::System::String* value, ::System::Xml::XmlQualifiedName* xsiType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_1_OFFSET))(this, localName, ns, value, xsiType);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteEndElement_1(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_1_OFFSET))(this, o);
		}

		::System::Void WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces* xmlns)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENAMESPACEDECLARATIONS_OFFSET))(this, xmlns);
		}

		::System::Void WriteNullableQualifiedNameEncoded(::System::String* name, ::System::String* ns, ::System::Xml::XmlQualifiedName* value, ::System::Xml::XmlQualifiedName* xsiType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMEENCODED_OFFSET))(this, name, ns, value, xsiType);
		}

		::System::Void WriteNullableQualifiedNameLiteral(::System::String* name, ::System::String* ns, ::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMELITERAL_OFFSET))(this, name, ns, value);
		}

		::System::Void WriteNullableStringEncoded(::System::String* name, ::System::String* ns, ::System::String* value, ::System::Xml::XmlQualifiedName* xsiType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGENCODED_OFFSET))(this, name, ns, value, xsiType);
		}

		::System::Void WriteNullableStringLiteral(::System::String* name, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGLITERAL_OFFSET))(this, name, ns, value);
		}

		::System::Void WriteNullTagEncoded(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGENCODED_OFFSET))(this, name, ns);
		}

		::System::Void WriteNullTagLiteral(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGLITERAL_OFFSET))(this, name, ns);
		}

		::System::Void WritePotentiallyReferencingElement(::System::String* n, ::System::String* ns, ::System::Object* o, ::System::Type* ambientType, ::System::Boolean suppressReference, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEPOTENTIALLYREFERENCINGELEMENT_OFFSET))(this, n, ns, o, ambientType, suppressReference, isNullable);
		}

		::System::Void WriteReferencedElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCEDELEMENTS_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveArray(::System::Xml::Serialization::TypeData* td)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ISPRIMITIVEARRAY_OFFSET))(this, td);
		}

		::System::Void WriteArray(::System::Object* o, ::System::Xml::Serialization::TypeData* td)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEARRAY_OFFSET))(this, o, td);
		}

		::System::Void WriteReferencingElement(::System::String* n, ::System::String* ns, ::System::Object* o, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCINGELEMENT_OFFSET))(this, n, ns, o, isNullable);
		}

		::System::Void CheckReferenceQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CHECKREFERENCEQUEUE_OFFSET))(this);
		}

		::System::Void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* serializable, ::System::String* name, ::System::String* ns, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_OFFSET))(this, serializable, name, ns, isNullable);
		}

		::System::Void WriteSerializable_1(::System::Xml::Serialization::IXmlSerializable* serializable, ::System::String* name, ::System::String* ns, ::System::Boolean isNullable, ::System::Boolean wrapped)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_1_OFFSET))(this, serializable, name, ns, isNullable, wrapped);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_OFFSET))(this, name, ns);
		}

		::System::Void WriteStartElement_1(::System::String* name, ::System::String* ns, ::System::Boolean writePrefixed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_1_OFFSET))(this, name, ns, writePrefixed);
		}

		::System::Void WriteStartElement_2(::System::String* name, ::System::String* ns, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_2_OFFSET))(this, name, ns, o);
		}

		::System::Void WriteStartElement_3(::System::String* name, ::System::String* ns, ::System::Object* o, ::System::Boolean writePrefixed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_3_OFFSET))(this, name, ns, o, writePrefixed);
		}

		::System::Void WriteStartElement_4(::System::String* name, ::System::String* ns, ::System::Object* o, ::System::Boolean writePrefixed, ::System::Collections::ICollection* namespaces)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_4_OFFSET))(this, name, ns, o, writePrefixed, namespaces);
		}

		::System::Void WriteTypedPrimitive(::System::String* name, ::System::String* ns, ::System::Object* o, ::System::Boolean xsiType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITETYPEDPRIMITIVE_OFFSET))(this, name, ns, o, xsiType);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteXmlAttribute(::System::Xml::XmlNode* node, ::System::Object* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLATTRIBUTE_OFFSET))(this, node, container);
		}

		::System::Void WriteXsiType(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXSITYPE_OFFSET))(this, name, ns);
		}
	};
}
