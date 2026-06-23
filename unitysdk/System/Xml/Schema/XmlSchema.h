#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IList; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Schema { class XmlSchemaCollection; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMA_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1DE45EE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE45870)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_COMPILESCHEMAINSET_OFFSET UNITYSDK_OFFSET(0x1DE45570)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_COMPILESCHEMA_OFFSET UNITYSDK_OFFSET(0x1DE45310)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1DE45960)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GETEXTERNALSCHEMASLIST_OFFSET UNITYSDK_OFFSET(0x1DE46120)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ATTRIBUTEGROUPS_OFFSET UNITYSDK_OFFSET(0x1DE45660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE45600)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1DE45780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1DE45800)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1DE45720)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DE45EB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IMPORTEDNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1DE46070)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IMPORTEDSCHEMAS_OFFSET UNITYSDK_OFFSET(0x1DE45FC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_SCHEMAID_OFFSET UNITYSDK_OFFSET(0x1DE45790)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_SCHEMATYPES_OFFSET UNITYSDK_OFFSET(0x1DE456C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_READ_OFFSET UNITYSDK_OFFSET(0x1DE45160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE45ED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DE45EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE46360)
#define SYSTEM_XML_SCHEMA_XMLSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE44E90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchema_TypeDefinitionIndex = 2113;

	class XmlSchema : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		static ::System::Int32* StaticGet_globalIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(XmlSchema_TypeDefinitionIndex)->GetStaticField(0xEF0);
		}
		::System::Xml::Schema::XmlSchemaObjectTable* types; // 0x38
		::System::String* id; // 0x40
		::System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x48
		::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x50
		::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes; // 0x58
		::System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x60
		::System::String* version; // 0x68
		::System::Collections::ArrayList* importedSchemas; // 0x70
		::System::Xml::Schema::XmlSchemaObjectCollection* includes; // 0x78
		::System::Xml::XmlDocument* document; // 0x80
		::System::String* targetNs; // 0x88
		::System::Collections::Hashtable* ids; // 0x90
		::System::Xml::Schema::XmlSchemaObjectTable* notations; // 0x98
		::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints; // 0xA0
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0xA8
		::System::Uri* baseUri; // 0xB0
		::System::Collections::ArrayList* importedNamespaces; // 0xB8
		::System::Xml::Schema::XmlSchemaObjectTable* groups; // 0xC0
		::System::Xml::Schema::XmlSchemaForm elementFormDefault; // 0xC8
		::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault; // 0xCC
		::System::Boolean isChameleon; // 0xD0
		::System::Int32 errorCount; // 0xD4
		::System::Xml::Schema::XmlSchemaForm attributeFormDefault; // 0xD8
		::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault; // 0xDC
		::System::Int32 schemaId; // 0xE0
		::System::Boolean isRedefined; // 0xE4
		::System::Boolean isCompiled; // 0xE5
		::System::Boolean isCompiledBySet; // 0xE6
		::System::Boolean isPreprocessed; // 0xE7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA__CCTOR_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchema* Read(::System::Xml::XmlReader* reader, ::System::Xml::Schema::ValidationEventHandler* validationEventHandler)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::System::Xml::XmlReader*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_READ_OFFSET))(reader, validationEventHandler);
		}

		::System::Boolean CompileSchema(::System::Xml::Schema::XmlSchemaCollection* xsc, ::System::Xml::XmlResolver* resolver, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::String* ns, ::System::Xml::Schema::ValidationEventHandler* validationEventHandler, ::System::Xml::XmlNameTable* nameTable, ::System::Boolean CompileContentModel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::XmlResolver*, ::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::XmlNameTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_COMPILESCHEMA_OFFSET))(this, xsc, resolver, schemaInfo, ns, validationEventHandler, nameTable, CompileContentModel);
		}

		::System::Void CompileSchemaInSet(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_COMPILESCHEMAINSET_OFFSET))(this, nameTable, eventHandler, compilationSettings);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_Attributes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ATTRIBUTEGROUPS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_SCHEMATYPES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_Elements()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_ELEMENTS_OFFSET))(this);
		}

		::System::Uri* get_BaseUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_BASEURI_OFFSET))(this);
		}

		::System::Int32 get_SchemaId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_SCHEMAID_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_Document()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_DOCUMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* Clone()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* DeepClone()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_DEEPCLONE_OFFSET))(this);
		}

		::System::String* get_IdAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IDATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IdAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_SET_IDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_SETUNHANDLEDATTRIBUTES_OFFSET))(this, moreAttributes);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_ADDANNOTATION_OFFSET))(this, annotation);
		}

		::System::Collections::ArrayList* get_ImportedSchemas()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IMPORTEDSCHEMAS_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_ImportedNamespaces()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GET_IMPORTEDNAMESPACES_OFFSET))(this);
		}

		::System::Void GetExternalSchemasList(::System::Collections::IList* extList, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMA_GETEXTERNALSCHEMASLIST_OFFSET))(this, extList, schema);
		}
	};
}
