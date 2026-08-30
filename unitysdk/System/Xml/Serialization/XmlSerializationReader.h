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

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_1_OFFSET UNITYSDK_OFFSET(0x1E84BFA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_2_OFFSET UNITYSDK_OFFSET(0x1E84C070)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x1E84BCE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E84C150)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDTARGET_OFFSET UNITYSDK_OFFSET(0x1E84C310)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEREADONLYCOLLECTIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E84C8A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNCONSTANTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E84C970)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNNODEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E84CA50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E84CB00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CURRENTTAG_OFFSET UNITYSDK_OFFSET(0x1E84C580)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1E84CC50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYLIST_OFFSET UNITYSDK_OFFSET(0x1E84BAB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1E84BB00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETCALLBACKINFO_OFFSET UNITYSDK_OFFSET(0x1E84F000)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETNULLATTR_OFFSET UNITYSDK_OFFSET(0x1E84CEE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1E84D170)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETXSITYPE_OFFSET UNITYSDK_OFFSET(0x1E84D390)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E84BB70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_READER_OFFSET UNITYSDK_OFFSET(0x1E84BCD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E84B3F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ISXMLNSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E84D8A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1E853B30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_PARSEWSDLARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1E84D960)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READELEMENTQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1E84DD00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E84E3D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READLIST_OFFSET UNITYSDK_OFFSET(0x1E84F6B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLEQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1E84E920)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLESTRING_OFFSET UNITYSDK_OFFSET(0x1E84E950)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1E84E660)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E8511B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1E84EB20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E84EA00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1E851180)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1E8530A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1E852F70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1E853700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_1_OFFSET UNITYSDK_OFFSET(0x1E850130)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1E853B20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E854250)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x1E854120)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_SHRINKARRAY_OFFSET UNITYSDK_OFFSET(0x1E8545C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TARGETREADY_OFFSET UNITYSDK_OFFSET(0x1E84D2F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TOXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1E84DFF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E855720)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x1E8558F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_1_OFFSET UNITYSDK_OFFSET(0x1E855AC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1E84E8F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1E852E70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84BB60)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_TypeDefinitionIndex = 2027;

	class XmlSerializationReader : public ::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
	public:
		::System::Collections::ArrayList* noIDTargets; // 0x10
		::System::String* nullX; // 0x18
		::System::Collections::Hashtable* referencedObjects; // 0x20
		::System::String* w3InstanceNS2000; // 0x28
		::System::Collections::ArrayList* fixups; // 0x30
		::System::Collections::Hashtable* collFixups; // 0x38
		::System::String* w3SchemaNS; // 0x40
		::System::String* nil; // 0x48
		::System::Xml::XmlDocument* document; // 0x50
		::System::Xml::XmlReader* reader; // 0x58
		::System::Collections::Hashtable* delayedListFixups; // 0x60
		::System::String* arrayType; // 0x68
		::System::String* wsdlNS; // 0x70
		::System::Collections::Hashtable* targets; // 0x78
		::System::Collections::Hashtable* typesCallbacks; // 0x80
		::System::String* w3InstanceNS; // 0x88
		::System::String* w3InstanceNS1999; // 0x90
		::System::Collections::ArrayList* collItemFixups; // 0x98
		::System::Xml::Serialization::XmlSerializer* eventSource; // 0xA0
		::System::String* typeX; // 0xA8
		::System::Xml::XmlQualifiedName* arrayQName; // 0xB0
		::System::String* soapNS; // 0xB8
		::System::Int32 readCount; // 0xC0
		::System::Int32 whileIterationCount; // 0xC4
		::System::Int32 delayedFixupId; // 0xC8

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
