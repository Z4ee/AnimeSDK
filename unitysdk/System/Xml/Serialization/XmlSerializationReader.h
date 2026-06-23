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

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_1_OFFSET UNITYSDK_OFFSET(0x1C173960)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_2_OFFSET UNITYSDK_OFFSET(0x1C173A20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_OFFSET UNITYSDK_OFFSET(0x1C173800)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C173AE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDTARGET_OFFSET UNITYSDK_OFFSET(0x1C173C70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEREADONLYCOLLECTIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C173FE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNCONSTANTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1740D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNNODEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1741D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1742B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CURRENTTAG_OFFSET UNITYSDK_OFFSET(0x1C173E50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x1C174490)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYLIST_OFFSET UNITYSDK_OFFSET(0x1C1735B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1C173650)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETCALLBACKINFO_OFFSET UNITYSDK_OFFSET(0x1C1757F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETNULLATTR_OFFSET UNITYSDK_OFFSET(0x1C174780)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1C174850)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETXSITYPE_OFFSET UNITYSDK_OFFSET(0x1C174980)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C173700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C173310)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ISXMLNSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C174C40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ONUNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1C178C20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_PARSEWSDLARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1C174CD0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READELEMENTQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1C174EC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C1751C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READLIST_OFFSET UNITYSDK_OFFSET(0x1C175C90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLEQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1C1753E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULLABLESTRING_OFFSET UNITYSDK_OFFSET(0x1C175410)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READNULL_OFFSET UNITYSDK_OFFSET(0x1C175270)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1C1770A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1C1754C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C175460)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1C177080)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1C178550)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1C1784E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1C178A20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_1_OFFSET UNITYSDK_OFFSET(0x1C1763B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1C178C10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C178F20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x1C178EB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_SHRINKARRAY_OFFSET UNITYSDK_OFFSET(0x1C179510)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TARGETREADY_OFFSET UNITYSDK_OFFSET(0x1C174960)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TOXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1C174F90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C179750)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x1C1798C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_1_OFFSET UNITYSDK_OFFSET(0x1C179A20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_OFFSET UNITYSDK_OFFSET(0x1C175380)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNREFERENCEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1C178420)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1736F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_TypeDefinitionIndex = 1903;

	class XmlSerializationReader : public ::System::Xml::Serialization::XmlSerializationGeneratedCode
	{
	public:
		::System::Collections::ArrayList* fixups; // 0x10
		::System::String* w3InstanceNS2000; // 0x18
		::System::Collections::Hashtable* collFixups; // 0x20
		::System::Collections::Hashtable* targets; // 0x28
		::System::String* nil; // 0x30
		::System::Xml::XmlDocument* document; // 0x38
		::System::String* wsdlNS; // 0x40
		::System::Collections::Hashtable* delayedListFixups; // 0x48
		::System::Collections::Hashtable* typesCallbacks; // 0x50
		::System::String* typeX; // 0x58
		::System::Xml::XmlQualifiedName* arrayQName; // 0x60
		::System::String* arrayType; // 0x68
		::System::Xml::Serialization::XmlSerializer* eventSource; // 0x70
		::System::Collections::ArrayList* collItemFixups; // 0x78
		::System::String* w3InstanceNS1999; // 0x80
		::System::String* nullX; // 0x88
		::System::Xml::XmlReader* reader; // 0x90
		::System::Collections::ArrayList* noIDTargets; // 0x98
		::System::String* soapNS; // 0xA0
		::System::String* w3SchemaNS; // 0xA8
		::System::String* w3InstanceNS; // 0xB0
		::System::Collections::Hashtable* referencedObjects; // 0xB8
		::System::Int32 delayedFixupId; // 0xC0
		::System::Int32 whileIterationCount; // 0xC4
		::System::Int32 readCount; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::System::Xml::XmlReader* reader, ::System::Xml::Serialization::XmlSerializer* eventSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Serialization::XmlSerializer*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_INITIALIZE_OFFSET))(this, reader, eventSource);
		}

		::System::Collections::ArrayList* EnsureArrayList(::System::Collections::ArrayList* list)
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYLIST_OFFSET))(this, list);
		}

		::System::Collections::Hashtable* EnsureHashtable(::System::Collections::Hashtable* hash)
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREHASHTABLE_OFFSET))(this, hash);
		}

		::System::Xml::XmlDocument* get_Document()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Void AddFixup(::System::Xml::Serialization::XmlSerializationReader_CollectionFixup* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_CollectionFixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_OFFSET))(this, fixup);
		}

		::System::Void AddFixup_1(::System::Xml::Serialization::XmlSerializationReader_Fixup* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_Fixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_1_OFFSET))(this, fixup);
		}

		::System::Void AddFixup_2(::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup* fixup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationReader_CollectionItemFixup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDFIXUP_2_OFFSET))(this, fixup);
		}

		::System::Void AddReadCallback(::System::String* name, ::System::String* ns, ::System::Type* type, ::System::Xml::Serialization::XmlSerializationReadCallback* read)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Type*, ::System::Xml::Serialization::XmlSerializationReadCallback*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDREADCALLBACK_OFFSET))(this, name, ns, type, read);
		}

		::System::Void AddTarget(::System::String* id, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ADDTARGET_OFFSET))(this, id, o);
		}

		::System::String* CurrentTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CURRENTTAG_OFFSET))(this);
		}

		::System::Exception* CreateReadOnlyCollectionException(::System::String* name)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEREADONLYCOLLECTIONEXCEPTION_OFFSET))(this, name);
		}

		::System::Exception* CreateUnknownConstantException(::System::String* value, ::System::Type* enumType)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNCONSTANTEXCEPTION_OFFSET))(this, value, enumType);
		}

		::System::Exception* CreateUnknownNodeException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNNODEEXCEPTION_OFFSET))(this);
		}

		::System::Exception* CreateUnknownTypeException(::System::Xml::XmlQualifiedName* type)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_CREATEUNKNOWNTYPEEXCEPTION_OFFSET))(this, type);
		}

		::System::Array* EnsureArrayIndex(::System::Array* a, ::System::Int32 index, ::System::Type* elementType)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ENSUREARRAYINDEX_OFFSET))(this, a, index, elementType);
		}

		::System::Boolean GetNullAttr()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETNULLATTR_OFFSET))(this);
		}

		::System::Object* GetTarget(::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETTARGET_OFFSET))(this, id);
		}

		::System::Boolean TargetReady(::System::String* id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TARGETREADY_OFFSET))(this, id);
		}

		::System::Xml::XmlQualifiedName* GetXsiType()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETXSITYPE_OFFSET))(this);
		}

		::System::Boolean IsXmlnsAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ISXMLNSATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void ParseWsdlArrayType(::System::Xml::XmlAttribute* attr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_PARSEWSDLARRAYTYPE_OFFSET))(this, attr);
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

		::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo* GetCallbackInfo(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Xml::Serialization::XmlSerializationReader_WriteCallbackInfo*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_GETCALLBACKINFO_OFFSET))(this, qname);
		}

		::System::Object* ReadReferencedElement_1(::System::String* name, ::System::String* ns)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENT_1_OFFSET))(this, name, ns);
		}

		::System::Boolean ReadList(::System::Object*& resultList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READLIST_OFFSET))(this, resultList);
		}

		::System::Void ReadReferencedElements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCEDELEMENTS_OFFSET))(this);
		}

		::System::Object* ReadReferencingElement(::System::String*& fixupReference)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_OFFSET))(this, fixupReference);
		}

		::System::Object* ReadReferencingElement_1(::System::String* name, ::System::String* ns, ::System::String*& fixupReference)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_1_OFFSET))(this, name, ns, fixupReference);
		}

		::System::Object* ReadReferencingElement_2(::System::String* name, ::System::String* ns, ::System::Boolean elementCanBeType, ::System::String*& fixupReference)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READREFERENCINGELEMENT_2_OFFSET))(this, name, ns, elementCanBeType, fixupReference);
		}

		::System::Xml::Serialization::IXmlSerializable* ReadSerializable(::System::Xml::Serialization::IXmlSerializable* serializable)
		{
			return ((::System::Xml::Serialization::IXmlSerializable*(*)(::PVOID, ::System::Xml::Serialization::IXmlSerializable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READSERIALIZABLE_OFFSET))(this, serializable);
		}

		::System::Object* ReadTypedPrimitive(::System::Xml::XmlQualifiedName* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_OFFSET))(this, type);
		}

		::System::Object* ReadTypedPrimitive_1(::System::Xml::XmlQualifiedName* qname, ::System::Boolean reportUnknown)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READTYPEDPRIMITIVE_1_OFFSET))(this, qname, reportUnknown);
		}

		::System::Xml::XmlNode* ReadXmlNode(::System::Boolean wrapped)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLNODE_OFFSET))(this, wrapped);
		}

		::System::Xml::XmlDocument* ReadXmlDocument(::System::Boolean wrapped)
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_READXMLDOCUMENT_OFFSET))(this, wrapped);
		}

		::System::Array* ShrinkArray(::System::Array* a, ::System::Int32 length, ::System::Type* elementType, ::System::Boolean isNullable)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Array*, ::System::Int32, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_SHRINKARRAY_OFFSET))(this, a, length, elementType, isNullable);
		}

		::System::Xml::XmlQualifiedName* ToXmlQualifiedName(::System::String* value)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_TOXMLQUALIFIEDNAME_OFFSET))(this, value);
		}

		::System::Void UnknownAttribute(::System::Object* o, ::System::Xml::XmlAttribute* attr, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNATTRIBUTE_OFFSET))(this, o, attr, qnames);
		}

		::System::Void UnknownElement(::System::Object* o, ::System::Xml::XmlElement* elem, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNELEMENT_OFFSET))(this, o, elem, qnames);
		}

		::System::Void UnknownNode(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_OFFSET))(this, o);
		}

		::System::Void UnknownNode_1(::System::Object* o, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNKNOWNNODE_1_OFFSET))(this, o, qnames);
		}

		::System::Void OnUnknownNode(::System::Xml::XmlNode* node, ::System::Object* o, ::System::String* qnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_ONUNKNOWNNODE_OFFSET))(this, node, o, qnames);
		}

		::System::Void UnreferencedObject(::System::String* id, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_UNREFERENCEDOBJECT_OFFSET))(this, id, o);
		}
	};
}
