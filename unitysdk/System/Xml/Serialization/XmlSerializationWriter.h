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

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ADDWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AE91E10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ALREADYQUEUED_OFFSET UNITYSDK_OFFSET(0x1AE92560)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CHECKREFERENCEQUEUE_OFFSET UNITYSDK_OFFSET(0x1AE941C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNANYELEMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AE91F20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1AE920F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AE92000)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_FROMXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1AE921C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETID_OFFSET UNITYSDK_OFFSET(0x1AE92460)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETNAMESPACEPREFIX_OFFSET UNITYSDK_OFFSET(0x1AE925A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1AE92390)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GET_WRITER_OFFSET UNITYSDK_OFFSET(0x1AE91E00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AE91BC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1AE94220)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_TOPLEVELELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE92740)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x1AE94590)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AE926D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE92750)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTENCODED_OFFSET UNITYSDK_OFFSET(0x1AE929A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTLITERAL_OFFSET UNITYSDK_OFFSET(0x1AE92BA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_1_OFFSET UNITYSDK_OFFSET(0x1AE92DB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1AE92D90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AE93200)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1AE931E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1AE93480)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE931B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENAMESPACEDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1AE934D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMEENCODED_OFFSET UNITYSDK_OFFSET(0x1AE93A60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMELITERAL_OFFSET UNITYSDK_OFFSET(0x1AE93B30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGENCODED_OFFSET UNITYSDK_OFFSET(0x1AE93C20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGLITERAL_OFFSET UNITYSDK_OFFSET(0x1AE93C30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGENCODED_OFFSET UNITYSDK_OFFSET(0x1AE92AB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGLITERAL_OFFSET UNITYSDK_OFFSET(0x1AE92CB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEPOTENTIALLYREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE93C60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AE942B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE949B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_1_OFFSET UNITYSDK_OFFSET(0x1AE95090)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1AE94F80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AE95230)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1AE941A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1AE952B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_3_OFFSET UNITYSDK_OFFSET(0x1AE95280)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_4_OFFSET UNITYSDK_OFFSET(0x1AE952D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE92FF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITETYPEDPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1AE95E90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1AE96210)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE96250)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLNODE_OFFSET UNITYSDK_OFFSET(0x1AE927C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXSITYPE_OFFSET UNITYSDK_OFFSET(0x1AE93010)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE91B50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriter_TypeDefinitionIndex = 2025;

	class XmlSerializationWriter : public ::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
	public:
		::System::Collections::Hashtable* serializedObjects; // 0x10
		::System::Runtime::Serialization::ObjectIDGenerator* idGenerator; // 0x18
		::System::Collections::ArrayList* namespaces; // 0x20
		::System::Collections::Queue* referencedElements; // 0x28
		::System::Xml::XmlWriter* writer; // 0x30
		::System::Collections::Hashtable* callbacks; // 0x38
		::System::Boolean topLevelElement; // 0x40
		::System::Int32 qnameCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Xml::XmlWriter* a1, ::System::Xml::Serialization::XmlSerializerNamespaces* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlWriter* get_Writer()
		{
			return ((::System::Xml::XmlWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GET_WRITER_OFFSET))(this);
		}

		::System::Void AddWriteCallback(::System::Type* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::Serialization::XmlSerializationWriteCallback* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::String*, ::System::Xml::Serialization::XmlSerializationWriteCallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ADDWRITECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Exception* CreateUnknownAnyElementException(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNANYELEMENTEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Exception* CreateUnknownTypeException(::System::Object* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Exception* CreateUnknownTypeException_1(::System::Type* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CREATEUNKNOWNTYPEEXCEPTION_1_OFFSET))(this, a1);
		}

		::System::String* FromXmlQualifiedName(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_FROMXMLQUALIFIEDNAME_OFFSET))(this, a1);
		}

		::System::String* GetId(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETID_OFFSET))(this, a1, a2);
		}

		::System::Boolean AlreadyQueued(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ALREADYQUEUED_OFFSET))(this, a1);
		}

		::System::String* GetNamespacePrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETNAMESPACEPREFIX_OFFSET))(this, a1);
		}

		::System::String* GetQualifiedName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_GETQUALIFIEDNAME_OFFSET))(this, a1, a2);
		}

		::System::Void TopLevelElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_TOPLEVELELEMENT_OFFSET))(this);
		}

		::System::Void WriteAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteAttribute_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEATTRIBUTE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteXmlNode(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLNODE_OFFSET))(this, a1);
		}

		::System::Void WriteElementEncoded(::System::Xml::XmlNode* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTENCODED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void WriteElementLiteral(::System::Xml::XmlNode* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTLITERAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void WriteElementQualifiedName(::System::String* a1, ::System::String* a2, ::System::Xml::XmlQualifiedName* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteElementQualifiedName_1(::System::String* a1, ::System::String* a2, ::System::Xml::XmlQualifiedName* a3, ::System::Xml::XmlQualifiedName* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTQUALIFIEDNAME_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteElementString(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteElementString_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlQualifiedName* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEELEMENTSTRING_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteEndElement_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEENDELEMENT_1_OFFSET))(this, a1);
		}

		::System::Void WriteNamespaceDeclarations(::System::Xml::Serialization::XmlSerializerNamespaces* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializerNamespaces*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENAMESPACEDECLARATIONS_OFFSET))(this, a1);
		}

		::System::Void WriteNullableQualifiedNameEncoded(::System::String* a1, ::System::String* a2, ::System::Xml::XmlQualifiedName* a3, ::System::Xml::XmlQualifiedName* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMEENCODED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteNullableQualifiedNameLiteral(::System::String* a1, ::System::String* a2, ::System::Xml::XmlQualifiedName* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLEQUALIFIEDNAMELITERAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNullableStringEncoded(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlQualifiedName* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGENCODED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteNullableStringLiteral(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLABLESTRINGLITERAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteNullTagEncoded(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGENCODED_OFFSET))(this, a1, a2);
		}

		::System::Void WriteNullTagLiteral(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITENULLTAGLITERAL_OFFSET))(this, a1, a2);
		}

		::System::Void WritePotentiallyReferencingElement(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Type* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEPOTENTIALLYREFERENCINGELEMENT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteReferencedElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCEDELEMENTS_OFFSET))(this);
		}

		::System::Boolean IsPrimitiveArray(::System::Xml::Serialization::TypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_ISPRIMITIVEARRAY_OFFSET))(this, a1);
		}

		::System::Void WriteArray(::System::Object* a1, ::System::Xml::Serialization::TypeData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteReferencingElement(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEREFERENCINGELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckReferenceQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_CHECKREFERENCEQUEUE_OFFSET))(this);
		}

		::System::Void WriteSerializable(::System::Xml::Serialization::IXmlSerializable* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteSerializable_1(::System::Xml::Serialization::IXmlSerializable* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESERIALIZABLE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteStartElement_1(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartElement_2(::System::String* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartElement_3(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement_4(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4, ::System::Collections::ICollection* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITESTARTELEMENT_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void WriteTypedPrimitive(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITETYPEDPRIMITIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteXmlAttribute(::System::Xml::XmlNode* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXMLATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXsiType(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITER_WRITEXSITYPE_OFFSET))(this, a1, a2);
		}
	};
}
