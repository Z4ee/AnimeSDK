#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/XmlSerializationGeneratedCode.h"

namespace System { class Array; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml::Serialization { class IXmlSerializable; }
namespace System::Xml::Serialization { class XmlSerializationReadCallback; }
namespace System::Xml::Serialization { class XmlSerializationReader_CollectionFixup; }
namespace System::Xml::Serialization { class XmlSerializationReader_CollectionItemFixup; }
namespace System::Xml::Serialization { class XmlSerializationReader_Fixup; }
namespace System::Xml::Serialization { class XmlSerializationReader_WriteCallbackInfo; }
namespace System::Xml::Serialization { class XmlSerializer; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_1_OFFSET UNITYSDK_OFFSET(0x16287710)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_2_OFFSET UNITYSDK_OFFSET(0x162877F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x16287440)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x162878D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDTARGET_OFFSET UNITYSDK_OFFSET(0x16287A80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEREADONLYCOLLECTIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16288010)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNCONSTANTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162880E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNNODEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x162881C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16288270)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CURRENTTAG_OFFSET UNITYSDK_OFFSET(0x16287CF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x162883C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYLIST_OFFSET UNITYSDK_OFFSET(0x16287210)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREHASHTABLE_OFFSET UNITYSDK_OFFSET(0x16287260)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETCALLBACKINFO_OFFSET UNITYSDK_OFFSET(0x1628A750)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETNULLATTR_OFFSET UNITYSDK_OFFSET(0x16288650)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETTARGET_OFFSET UNITYSDK_OFFSET(0x162888E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETXSITYPE_OFFSET UNITYSDK_OFFSET(0x16288B10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x162872D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_READER_OFFSET UNITYSDK_OFFSET(0x16287430)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16286B70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ISXMLNSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16289000)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1628F260)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_PARSEWSDLARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x162890C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READELEMENTQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x16289460)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x16289B30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READLIST_OFFSET UNITYSDK_OFFSET(0x1628AE00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLEQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1628A080)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLESTRING_OFFSET UNITYSDK_OFFSET(0x1628A0B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x16289DC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1628C8F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1628A280)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1628A160)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1628C8C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1628E7E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1628E6B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1628EE30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_1_OFFSET UNITYSDK_OFFSET(0x1628B870)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1628F250)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1628F980)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x1628F850)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_SHRINKARRAY_OFFSET UNITYSDK_OFFSET(0x1628FCF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TARGETREADY_OFFSET UNITYSDK_OFFSET(0x16288A70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TOXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x16289750)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16290E50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x16291010)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_1_OFFSET UNITYSDK_OFFSET(0x162911D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1628A050)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1628E5B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x162872C0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_TypeDefinitionIndex = 2020;

	class XmlSerializationReader : public ::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
	public:
		::System::Collections::ArrayList* noIDTargets; // 0x10
		::System::Xml::XmlDocument* document; // 0x18
		::System::String* soapNS; // 0x20
		::System::String* typeX; // 0x28
		::System::Xml::XmlReader* reader; // 0x30
		::System::String* w3InstanceNS2000; // 0x38
		::System::String* nullX; // 0x40
		::System::Collections::Hashtable* collFixups; // 0x48
		::System::String* wsdlNS; // 0x50
		::System::Xml::XmlQualifiedName* arrayQName; // 0x58
		::System::String* w3SchemaNS; // 0x60
		::System::Collections::Hashtable* targets; // 0x68
		::System::String* w3InstanceNS; // 0x70
		::System::Xml::Serialization::XmlSerializer* eventSource; // 0x78
		::System::Collections::Hashtable* delayedListFixups; // 0x80
		::System::String* w3InstanceNS1999; // 0x88
		::System::String* arrayType; // 0x90
		::System::Collections::ArrayList* fixups; // 0x98
		::System::Collections::Hashtable* referencedObjects; // 0xA0
		::System::Collections::ArrayList* collItemFixups; // 0xA8
		::System::Collections::Hashtable* typesCallbacks; // 0xB0
		::System::String* nil; // 0xB8
		::System::Int32 delayedFixupId; // 0xC0
		::System::Int32 whileIterationCount; // 0xC4
		::System::Int32 readCount; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Xml::XmlReader* a1, ::System::Xml::Serialization::XmlSerializer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlSerializer*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Collections::ArrayList* EnsureArrayList(::System::Collections::ArrayList* a1)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Hashtable* EnsureHashtable(::System::Collections::Hashtable* a1)
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREHASHTABLE_OFFSET))(this, a1);
		}

		::System::Xml::XmlDocument* get_Document()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Xml::XmlReader* get_Reader()
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_READER_OFFSET))(this);
		}

		::System::Void AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_OFFSET))(this, a1);
		}

		::System::Void AddFixup_1(::System::Xml::Serialization::XmlSerializationReader_Fixup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_Fixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_1_OFFSET))(this, a1);
		}

		::System::Void AddFixup_2(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_2_OFFSET))(this, a1);
		}

		::System::Void AddReadCallback(::System::String* a1, ::System::String* a2, ::System::Type* a3, ::System::Xml::Serialization::XmlSerializationReadCallback* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlSerializationReadCallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDREADCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddTarget(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDTARGET_OFFSET))(this, a1, a2);
		}

		::System::String* CurrentTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CURRENTTAG_OFFSET))(this);
		}

		::System::Exception* CreateReadOnlyCollectionException(::System::String* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEREADONLYCOLLECTIONEXCEPTION_OFFSET))(this, a1);
		}

		::System::Exception* CreateUnknownConstantException(::System::String* a1, ::System::Type* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNCONSTANTEXCEPTION_OFFSET))(this, a1, a2);
		}

		::System::Exception* CreateUnknownNodeException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNNODEEXCEPTION_OFFSET))(this);
		}

		::System::Exception* CreateUnknownTypeException(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Array* EnsureArrayIndex(::System::Array* a1, ::System::Int32 a2, ::System::Type* a3)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetNullAttr()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETNULLATTR_OFFSET))(this);
		}

		::System::Object* GetTarget(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETTARGET_OFFSET))(this, a1);
		}

		::System::Boolean TargetReady(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TARGETREADY_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* GetXsiType()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETXSITYPE_OFFSET))(this);
		}

		::System::Boolean IsXmlnsAttribute(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ISXMLNSATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ParseWsdlArrayType(::System::Xml::XmlAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_PARSEWSDLARRAYTYPE_OFFSET))(this, a1);
		}

		::System::Xml::XmlQualifiedName* ReadElementQualifiedName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READELEMENTQUALIFIEDNAME_OFFSET))(this);
		}

		::System::Void ReadEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READENDELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULL_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* ReadNullableQualifiedName()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLEQUALIFIEDNAME_OFFSET))(this);
		}

		::System::String* ReadNullableString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLESTRING_OFFSET))(this);
		}

		::System::Object* ReadReferencedElement()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_OFFSET))(this);
		}

		::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* GetCallbackInfo(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETCALLBACKINFO_OFFSET))(this, a1);
		}

		::System::Object* ReadReferencedElement_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReadList(::System::Object*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READLIST_OFFSET))(this, a1);
		}

		::System::Void ReadReferencedElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENTS_OFFSET))(this);
		}

		::System::Object* ReadReferencingElement(::System::String*& a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_OFFSET))(this, a1);
		}

		::System::Object* ReadReferencingElement_1(::System::String* a1, ::System::String* a2, ::System::String*& a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ReadReferencingElement_2(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String*& a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::Serialization::IXmlSerializable* ReadSerializable(::System::Xml::Serialization::IXmlSerializable* a1)
		{
			return ((::System::Xml::Serialization::IXmlSerializable*(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READSERIALIZABLE_OFFSET))(this, a1);
		}

		::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_OFFSET))(this, a1);
		}

		::System::Object* ReadTypedPrimitive_1(::System::Xml::XmlQualifiedName* a1, ::System::Boolean a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlNode* ReadXmlNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLNODE_OFFSET))(this, a1);
		}

		::System::Xml::XmlDocument* ReadXmlDocument(::System::Boolean a1)
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLDOCUMENT_OFFSET))(this, a1);
		}

		::System::Array* ShrinkArray(::System::Array* a1, ::System::Int32 a2, ::System::Type* a3, ::System::Boolean a4)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_SHRINKARRAY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::XmlQualifiedName* ToXmlQualifiedName(::System::String* a1)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TOXMLQUALIFIEDNAME_OFFSET))(this, a1);
		}

		::System::Void UnknownAttribute(::System::Object* a1, ::System::Xml::XmlAttribute* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnknownElement(::System::Object* a1, ::System::Xml::XmlElement* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnknownNode(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_OFFSET))(this, a1);
		}

		::System::Void UnknownNode_1(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_1_OFFSET))(this, a1, a2);
		}

		::System::Void OnUnknownNode(::System::Xml::XmlNode* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ONUNKNOWNNODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnreferencedObject(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNREFERENCEDOBJECT_OFFSET))(this, a1, a2);
		}
	};
}
