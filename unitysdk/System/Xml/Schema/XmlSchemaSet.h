#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class SortedList; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventArgs; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaException; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaSubstitutionGroup; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDSCHEMATOSET_OFFSET UNITYSDK_OFFSET(0x1E4A7FF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDTOTABLE_OFFSET UNITYSDK_OFFSET(0x1E4A9E60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E4A3860)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_2_OFFSET UNITYSDK_OFFSET(0x1E4A3800)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_3_OFFSET UNITYSDK_OFFSET(0x1E4A8750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_OFFSET UNITYSDK_OFFSET(0x1E4A0470)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1E4A00D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_CLEARTABLES_OFFSET UNITYSDK_OFFSET(0x1E4A5A20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COMPILE_OFFSET UNITYSDK_OFFSET(0x1E4A5380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E4A5340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYFROMCOMPILEDSET_OFFSET UNITYSDK_OFFSET(0x1E4A0FE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E4A7E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_FINDSCHEMABYNSANDURL_OFFSET UNITYSDK_OFFSET(0x1E4A3520)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1E4AA350)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMABYURI_OFFSET UNITYSDK_OFFSET(0x1E4AA370)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x1E4AA1D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETTARGETNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4A4DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E4A0250)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E4A02E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E4A0280)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALTYPES_OFFSET UNITYSDK_OFFSET(0x1E4A0340)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1E49FC10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_SUBSTITUTIONGROUPS_OFFSET UNITYSDK_OFFSET(0x1E4A03A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_TYPEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1E4A0410)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E4AA4A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_ISSCHEMALOADED_OFFSET UNITYSDK_OFFSET(0x1E4A8CF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PARSESCHEMA_OFFSET UNITYSDK_OFFSET(0x1E4A9240)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PREPROCESSSCHEMA_OFFSET UNITYSDK_OFFSET(0x1E4A7CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_PROCESSNEWSUBSTITUTIONGROUPS_OFFSET UNITYSDK_OFFSET(0x1E4A9440)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVERECURSIVE_OFFSET UNITYSDK_OFFSET(0x1E4A3AA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMCACHES_OFFSET UNITYSDK_OFFSET(0x1E4A73E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMGLOBALTABLES_OFFSET UNITYSDK_OFFSET(0x1E4A6640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E4A4EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1E4A0180)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_REPROCESS_OFFSET UNITYSDK_OFFSET(0x1E4A5C50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_RESOLVESUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1E4A9950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_1_OFFSET UNITYSDK_OFFSET(0x1E4A7AF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1E4A7FC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E4A4E00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1E4A01F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_VERIFYTABLES_OFFSET UNITYSDK_OFFSET(0x1E4AA260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49FD10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E49FC50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSet_TypeDefinitionIndex = 2184;

	class XmlSchemaSet : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes; // 0x10
		::System::Xml::Schema::ValidationEventHandler* internalEventHandler; // 0x18
		::System::Collections::Hashtable* schemaLocations; // 0x20
		::System::Collections::Hashtable* targetNamespaces; // 0x28
		::System::Xml::Schema::XmlSchemaObjectTable* typeExtensions; // 0x30
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x38
		::System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x40
		::System::Xml::Schema::SchemaInfo* cachedCompiledInfo; // 0x48
		::System::Object* internalSyncObject; // 0x50
		::System::Xml::XmlReaderSettings* readerSettings; // 0x58
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x60
		::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings; // 0x68
		::System::Collections::SortedList* schemas; // 0x70
		::System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x78
		::System::Collections::Hashtable* chameleonSchemas; // 0x80
		::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroups; // 0x88
		::System::Xml::Schema::XmlSchema* schemaForSchema; // 0x90
		::System::Xml::XmlNameTable* nameTable; // 0x98
		::System::Boolean isCompiled; // 0xA0
		::System::Boolean compileAll; // 0xA1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET))(this, nameTable);
		}

		::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_INTERNALSYNCOBJECT_OFFSET))(this);
		}

		::System::Void add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalElements()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALELEMENTS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalAttributes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalTypes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_GLOBALTYPES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_SubstitutionGroups()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_SUBSTITUTIONGROUPS_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_TypeExtensions()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_TYPEEXTENSIONS_OFFSET))(this);
		}

		::System::Void Add(::System::Xml::Schema::XmlSchemaSet* schemas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_OFFSET))(this, schemas);
		}

		::System::Xml::Schema::XmlSchema* Add_1(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_1_OFFSET))(this, schema);
		}

		::System::Boolean RemoveRecursive(::System::Xml::Schema::XmlSchema* schemaToRemove)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVERECURSIVE_OFFSET))(this, schemaToRemove);
		}

		::System::Boolean Contains(::System::String* targetNamespace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_CONTAINS_OFFSET))(this, targetNamespace);
		}

		::System::Void Compile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COMPILE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* Reprocess(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REPROCESS_OFFSET))(this, schema);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Xml::Schema::XmlSchema*>* schemas, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Schema::XmlSchema*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET))(this, schemas, index);
		}

		::System::Collections::ICollection* Schemas()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_OFFSET))(this);
		}

		::System::Collections::ICollection* Schemas_1(::System::String* targetNamespace)
		{
			return ((::System::Collections::ICollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SCHEMAS_1_OFFSET))(this, targetNamespace);
		}

		::System::Xml::Schema::XmlSchema* Add_2(::System::String* targetNamespace, ::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_2_OFFSET))(this, targetNamespace, schema);
		}

		::System::Void Add_3(::System::String* targetNamespace, ::System::Xml::XmlReader* reader, ::System::Collections::Hashtable* validatedNamespaces)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlReader*, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADD_3_OFFSET))(this, targetNamespace, reader, validatedNamespaces);
		}

		::System::Xml::Schema::XmlSchema* FindSchemaByNSAndUrl(::System::Uri* schemaUri, ::System::String* ns, ::Il2CppArray<::System::Collections::DictionaryEntry>* locationsTable)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Collections::DictionaryEntry>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_FINDSCHEMABYNSANDURL_OFFSET))(this, schemaUri, ns, locationsTable);
		}

		::System::Void AddSchemaToSet(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDSCHEMATOSET_OFFSET))(this, schema);
		}

		::System::Void ProcessNewSubstitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, ::System::Boolean resolve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PROCESSNEWSUBSTITUTIONGROUPS_OFFSET))(this, substitutionGroupsTable, resolve);
		}

		::System::Void ResolveSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, ::System::Xml::Schema::XmlSchemaObjectTable* substTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSubstitutionGroup*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_RESOLVESUBSTITUTIONGROUP_OFFSET))(this, substitutionGroup, substTable);
		}

		::System::Xml::Schema::XmlSchema* Remove(::System::Xml::Schema::XmlSchema* schema, ::System::Boolean forceCompile)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVE_OFFSET))(this, schema, forceCompile);
		}

		::System::Void ClearTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_CLEARTABLES_OFFSET))(this);
		}

		::System::Boolean PreprocessSchema(::System::Xml::Schema::XmlSchema*& schema, ::System::String* targetNamespace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PREPROCESSSCHEMA_OFFSET))(this, schema, targetNamespace);
		}

		::System::Xml::Schema::XmlSchema* ParseSchema(::System::String* targetNamespace, ::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_PARSESCHEMA_OFFSET))(this, targetNamespace, reader);
		}

		::System::Void CopyFromCompiledSet(::System::Xml::Schema::XmlSchemaSet* otherSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYFROMCOMPILEDSET_OFFSET))(this, otherSet);
		}

		::System::Xml::XmlResolver* GetResolver()
		{
			return ((::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETRESOLVER_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Xml::Schema::SchemaNames*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMANAMES_OFFSET))(this, nt);
		}

		::System::Boolean IsSchemaLoaded(::System::Uri* schemaUri, ::System::String* targetNamespace, ::System::Xml::Schema::XmlSchema*& schema)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Xml::Schema::XmlSchema*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ISSCHEMALOADED_OFFSET))(this, schemaUri, targetNamespace, schema);
		}

		::System::Boolean GetSchemaByUri(::System::Uri* schemaUri, ::System::Xml::Schema::XmlSchema*& schema)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Xml::Schema::XmlSchema*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETSCHEMABYURI_OFFSET))(this, schemaUri, schema);
		}

		::System::String* GetTargetNamespace(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GETTARGETNAMESPACE_OFFSET))(this, schema);
		}

		::System::Void RemoveSchemaFromCaches(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMCACHES_OFFSET))(this, schema);
		}

		::System::Void RemoveSchemaFromGlobalTables(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_REMOVESCHEMAFROMGLOBALTABLES_OFFSET))(this, schema);
		}

		::System::Boolean AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_ADDTOTABLE_OFFSET))(this, table, qname, item);
		}

		::System::Void VerifyTables()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_VERIFYTABLES_OFFSET))(this);
		}

		::System::Void InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET))(this, sender, e);
		}

		::System::Void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_SENDVALIDATIONEVENT_OFFSET))(this, e, severity);
		}
	};
}
