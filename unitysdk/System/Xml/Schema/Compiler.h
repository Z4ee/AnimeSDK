#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/BaseProcessor.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class Stack; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class ParticleContentValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaDeclBase; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAll; }
namespace System::Xml::Schema { class XmlSchemaAnnotated; }
namespace System::Xml::Schema { class XmlSchemaAny; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaChoice; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaComplexContent; }
namespace System::Xml::Schema { class XmlSchemaComplexContentExtension; }
namespace System::Xml::Schema { class XmlSchemaComplexContentRestriction; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaGroup; }
namespace System::Xml::Schema { class XmlSchemaGroupBase; }
namespace System::Xml::Schema { class XmlSchemaGroupRef; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaSequence; }
namespace System::Xml::Schema { class XmlSchemaSet; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentExtension; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentRestriction; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaSubstitutionGroup; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_COMPILER_BUILDPARTICLECONTENTMODEL_OFFSET UNITYSDK_OFFSET(0x1BCEE780)
#define SYSTEM_XML_SCHEMA_COMPILER_CALCULATEEFFECTIVETOTALRANGE_OFFSET UNITYSDK_OFFSET(0x1BCED170)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEALL_OFFSET UNITYSDK_OFFSET(0x1BCE7EA0)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZECHOICE_OFFSET UNITYSDK_OFFSET(0x1BCE8270)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1BCE94B0)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEGROUPREF_OFFSET UNITYSDK_OFFSET(0x1BCE76F0)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1BCE0C40)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEPOINTLESSROOT_OFFSET UNITYSDK_OFFSET(0x1BCE67C0)
#define SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1BCE8BF0)
#define SYSTEM_XML_SCHEMA_COMPILER_CHECKATRRIBUTEGROUPRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1BCE1020)
#define SYSTEM_XML_SCHEMA_COMPILER_CHECKPARTICLEDERIVATION_1_OFFSET UNITYSDK_OFFSET(0x1BCE0F70)
#define SYSTEM_XML_SCHEMA_COMPILER_CHECKPARTICLEDERIVATION_OFFSET UNITYSDK_OFFSET(0x1BCDFB70)
#define SYSTEM_XML_SCHEMA_COMPILER_CHECKUNIONTYPE_OFFSET UNITYSDK_OFFSET(0x1BCE2240)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1BCDA7F0)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BCE0410)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BCDA650)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1BCDAB90)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPELEMENT_OFFSET UNITYSDK_OFFSET(0x1BCDA1C0)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPGROUP_OFFSET UNITYSDK_OFFSET(0x1BCDA7B0)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPPARTICLE_OFFSET UNITYSDK_OFFSET(0x1BCE04C0)
#define SYSTEM_XML_SCHEMA_COMPILER_CLEANUPSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1BCDB330)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEANYATTRIBUTEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1BCEE380)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEANYATTRIBUTEUNION_OFFSET UNITYSDK_OFFSET(0x1BCEE450)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1BCDB7D0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BCDE4A0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEBASEMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x1BCE1DE0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1BCE2B60)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1BCE3120)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENT_OFFSET UNITYSDK_OFFSET(0x1BCE5C90)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXTYPEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1BCDF040)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1BCDC580)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILECONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1BCE5AA0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEELEMENT_OFFSET UNITYSDK_OFFSET(0x1BCDD670)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEGROUP_OFFSET UNITYSDK_OFFSET(0x1BCDB720)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1BCDEB70)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILELOCALATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BCE34D0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEPARTICLEELEMENTS_1_OFFSET UNITYSDK_OFFSET(0x1BCE0DE0)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILEPARTICLEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1BCEF220)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLECONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1BCE2340)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLECONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1BCE2610)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1BCDCF40)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILESUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1BCE0740)
#define SYSTEM_XML_SCHEMA_COMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x1BCD4110)
#define SYSTEM_XML_SCHEMA_COMPILER_COPYPOSITION_OFFSET UNITYSDK_OFFSET(0x1BCE98A0)
#define SYSTEM_XML_SCHEMA_COMPILER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BCD40A0)
#define SYSTEM_XML_SCHEMA_COMPILER_GETANYSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1BCE6620)
#define SYSTEM_XML_SCHEMA_COMPILER_GETCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1BCE6730)
#define SYSTEM_XML_SCHEMA_COMPILER_GETMAPPINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x1BCEE240)
#define SYSTEM_XML_SCHEMA_COMPILER_GETSCHEMACONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BCE5C30)
#define SYSTEM_XML_SCHEMA_COMPILER_GETSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1BCE1D20)
#define SYSTEM_XML_SCHEMA_COMPILER_IMPORTALLCOMPILEDSCHEMAS_OFFSET UNITYSDK_OFFSET(0x1BCDB620)
#define SYSTEM_XML_SCHEMA_COMPILER_ISANYFROMANY_OFFSET UNITYSDK_OFFSET(0x1BCEA160)
#define SYSTEM_XML_SCHEMA_COMPILER_ISCHOICEFROMCHOICESUBSTGROUP_OFFSET UNITYSDK_OFFSET(0x1BCEC8C0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMANY_OFFSET UNITYSDK_OFFSET(0x1BCE9DC0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1BCE99D0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMGROUPBASE_OFFSET UNITYSDK_OFFSET(0x1BCEAA60)
#define SYSTEM_XML_SCHEMA_COMPILER_ISFIXEDEQUAL_OFFSET UNITYSDK_OFFSET(0x1BCECFF0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISGROUPBASEFROMANY_OFFSET UNITYSDK_OFFSET(0x1BCEA260)
#define SYSTEM_XML_SCHEMA_COMPILER_ISGROUPBASEFROMGROUPBASE_OFFSET UNITYSDK_OFFSET(0x1BCEBFF0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISPARTICLEEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x1BCE98F0)
#define SYSTEM_XML_SCHEMA_COMPILER_ISPROCESSCONTENTSRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1BCEE520)
#define SYSTEM_XML_SCHEMA_COMPILER_ISSEQUENCEFROMALL_OFFSET UNITYSDK_OFFSET(0x1BCEC430)
#define SYSTEM_XML_SCHEMA_COMPILER_ISSEQUENCEFROMCHOICE_OFFSET UNITYSDK_OFFSET(0x1BCECA60)
#define SYSTEM_XML_SCHEMA_COMPILER_ISVALIDOCCURRENCERANGERESTRICTION_1_OFFSET UNITYSDK_OFFSET(0x1BCEE090)
#define SYSTEM_XML_SCHEMA_COMPILER_ISVALIDOCCURRENCERANGERESTRICTION_OFFSET UNITYSDK_OFFSET(0x1BCECF80)
#define SYSTEM_XML_SCHEMA_COMPILER_ISVALIDRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1BCE6D40)
#define SYSTEM_XML_SCHEMA_COMPILER_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1BCD6CF0)
#define SYSTEM_XML_SCHEMA_COMPILER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1BCD8240)
#define SYSTEM_XML_SCHEMA_COMPILER_PROCESSSUBSTITUTIONGROUPS_OFFSET UNITYSDK_OFFSET(0x1BCDF150)
#define SYSTEM_XML_SCHEMA_COMPILER_PUSHCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1BCEE350)
#define SYSTEM_XML_SCHEMA_COMPILER_RECURSIVELYCHECKREDEFINEDATTRIBUTEGROUPS_OFFSET UNITYSDK_OFFSET(0x1BCE0390)
#define SYSTEM_XML_SCHEMA_COMPILER_RECURSIVELYCHECKREDEFINEDGROUPS_OFFSET UNITYSDK_OFFSET(0x1BCE02D0)
#define SYSTEM_XML_SCHEMA_COMPILER_SETDEFAULTFIXED_OFFSET UNITYSDK_OFFSET(0x1BCEE5D0)
#define SYSTEM_XML_SCHEMA_COMPILER_UPDATESFORSSIMPLETYPES_OFFSET UNITYSDK_OFFSET(0x1BCDB470)
#define SYSTEM_XML_SCHEMA_COMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD3DE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Compiler_TypeDefinitionIndex = 2092;

	class Compiler : public ::System::Xml::Schema::BaseProcessor
	{
	public:
		::System::Collections::Stack* complexTypeStack; // 0x40
		::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes; // 0x48
		::System::Xml::Schema::XmlSchema* schemaForSchema; // 0x50
		::System::Xml::Schema::XmlSchemaObjectTable* groups; // 0x58
		::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups; // 0x60
		::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints; // 0x68
		::System::Xml::Schema::XmlSchemaObjectTable* attributes; // 0x70
		::System::Collections::Hashtable* importedSchemas; // 0x78
		::System::Xml::Schema::XmlSchemaObjectTable* examplars; // 0x80
		::System::Collections::Hashtable* schemasToCompile; // 0x88
		::System::Xml::Schema::XmlSchemaObjectTable* notations; // 0x90
		::System::Xml::Schema::XmlSchemaObjectTable* elements; // 0x98
		::System::String* restrictionErrorMsg; // 0xA0

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchema* schemaForSchema, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCompilationSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER__CTOR_OFFSET))(this, nameTable, eventHandler, schemaForSchema, compilationSettings);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Xml::Schema::SchemaInfo* schemaCompiledInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*, ::System::Xml::Schema::SchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_EXECUTE_OFFSET))(this, schemaSet, schemaCompiledInfo);
		}

		::System::Void Prepare(::System::Xml::Schema::XmlSchema* schema, ::System::Boolean cleanup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_PREPARE_OFFSET))(this, schema, cleanup);
		}

		::System::Void UpdateSForSSimpleTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_UPDATESFORSSIMPLETYPES_OFFSET))(this);
		}

		::System::Void Output(::System::Xml::Schema::SchemaInfo* schemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_OUTPUT_OFFSET))(this, schemaInfo);
		}

		::System::Void ImportAllCompiledSchemas(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_IMPORTALLCOMPILEDSCHEMAS_OFFSET))(this, schemaSet);
		}

		::System::Boolean Compile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILE_OFFSET))(this);
		}

		::System::Void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTE_OFFSET))(this, attribute);
		}

		::System::Void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPCOMPLEXTYPE_OFFSET))(this, complexType);
		}

		::System::Void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPSIMPLETYPE_OFFSET))(this, simpleType);
		}

		::System::Void CleanupElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPELEMENT_OFFSET))(this, element);
		}

		::System::Void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPGROUP_OFFSET))(this, group);
		}

		::System::Void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CLEANUPPARTICLE_OFFSET))(this, particle);
		}

		::System::Void ProcessSubstitutionGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_PROCESSSUBSTITUTIONGROUPS_OFFSET))(this);
		}

		::System::Void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSubstitutionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILESUBSTITUTIONGROUP_OFFSET))(this, substitutionGroup);
		}

		::System::Void RecursivelyCheckRedefinedGroups(::System::Xml::Schema::XmlSchemaGroup* redefinedGroup, ::System::Xml::Schema::XmlSchemaGroup* baseGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_RECURSIVELYCHECKREDEFINEDGROUPS_OFFSET))(this, redefinedGroup, baseGroup);
		}

		::System::Void RecursivelyCheckRedefinedAttributeGroups(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_RECURSIVELYCHECKREDEFINEDATTRIBUTEGROUPS_OFFSET))(this, attributeGroup, baseAttributeGroup);
		}

		::System::Void CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEGROUP_OFFSET))(this, group);
		}

		::System::Void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLETYPE_OFFSET))(this, simpleType);
		}

		::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEBASEMEMBERTYPES_OFFSET))(this, simpleType);
		}

		::System::Void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType* parentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CHECKUNIONTYPE_OFFSET))(this, unionMember, memberTypeDefinitions, parentType);
		}

		::System::Void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXTYPE_OFFSET))(this, complexType);
		}

		::System::Void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLECONTENTEXTENSION_OFFSET))(this, complexType, simpleExtension);
		}

		::System::Void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILESIMPLECONTENTRESTRICTION_OFFSET))(this, complexType, simpleRestriction);
		}

		::System::Void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENTEXTENSION_OFFSET))(this, complexType, complexContent, complexExtension);
		}

		::System::Void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENTRESTRICTION_OFFSET))(this, complexType, complexContent, complexRestriction);
		}

		::System::Void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CHECKPARTICLEDERIVATION_OFFSET))(this, complexType);
		}

		::System::Void CheckParticleDerivation_1(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CHECKPARTICLEDERIVATION_1_OFFSET))(this, derivedParticle, baseParticle);
		}

		::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECONTENTTYPEPARTICLE_OFFSET))(this, particle);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Boolean root)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEPARTICLE_OFFSET))(this, particle, root);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEELEMENT_OFFSET))(this, element);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, ::System::Boolean root)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupRef*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEGROUPREF_OFFSET))(this, groupRef, root);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, ::System::Boolean root)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAll*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEALL_OFFSET))(this, all, root);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, ::System::Boolean root)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaChoice*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZECHOICE_OFFSET))(this, choice, root);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, ::System::Boolean root)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZESEQUENCE_OFFSET))(this, sequence, root);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizePointlessRoot(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CANNONICALIZEPOINTLESSROOT_OFFSET))(this, particle);
		}

		::System::Boolean IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISVALIDRESTRICTION_OFFSET))(this, derivedParticle, baseParticle);
		}

		::System::Boolean IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMELEMENT_OFFSET))(this, derivedElement, baseElement);
		}

		::System::Boolean IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMANY_OFFSET))(this, derivedElement, baseAny);
		}

		::System::Boolean IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISANYFROMANY_OFFSET))(this, derivedAny, baseAny);
		}

		::System::Boolean IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISGROUPBASEFROMANY_OFFSET))(this, derivedGroupBase, baseAny);
		}

		::System::Boolean IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISELEMENTFROMGROUPBASE_OFFSET))(this, derivedElement, baseGroupBase);
		}

		::System::Boolean IsChoiceFromChoiceSubstGroup(::System::Xml::Schema::XmlSchemaChoice* derivedChoice, ::System::Xml::Schema::XmlSchemaChoice* baseChoice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaChoice*, ::System::Xml::Schema::XmlSchemaChoice*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISCHOICEFROMCHOICESUBSTGROUP_OFFSET))(this, derivedChoice, baseChoice);
		}

		::System::Boolean IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, ::System::Boolean skipEmptableOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISGROUPBASEFROMGROUPBASE_OFFSET))(this, derivedGroupBase, baseGroupBase, skipEmptableOnly);
		}

		::System::Boolean IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISSEQUENCEFROMALL_OFFSET))(this, derivedSequence, baseAll);
		}

		::System::Boolean IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISSEQUENCEFROMCHOICE_OFFSET))(this, derivedSequence, baseChoice);
		}

		::System::Boolean IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISVALIDOCCURRENCERANGERESTRICTION_OFFSET))(this, derivedParticle, baseParticle);
		}

		::System::Boolean IsValidOccurrenceRangeRestriction_1(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs, ::System::Decimal baseMaxOccurs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISVALIDOCCURRENCERANGERESTRICTION_1_OFFSET))(this, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
		}

		::System::Int32 GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_GETMAPPINGPARTICLE_OFFSET))(this, particle, collection);
		}

		::System::Boolean IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISPARTICLEEMPTIABLE_OFFSET))(this, particle);
		}

		::System::Void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Decimal& minOccurs, ::System::Decimal& maxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CALCULATEEFFECTIVETOTALRANGE_OFFSET))(this, particle, minOccurs, maxOccurs);
		}

		::System::Void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_PUSHCOMPLEXTYPE_OFFSET))(this, complexType);
		}

		::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Xml::Schema::XmlSchemaContentType(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_GETSCHEMACONTENTTYPE_OFFSET))(this, complexType, complexContent, particle);
		}

		::System::Void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType, ::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaDerivationMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILELOCALATTRIBUTES_OFFSET))(this, baseType, derivedType, attributes, anyAttribute, derivedBy);
		}

		::System::Void CheckAtrributeGroupRestriction(::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup, ::System::Xml::Schema::XmlSchemaAttributeGroup* derivedAttributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_CHECKATRRIBUTEGROUPRESTRICTION_OFFSET))(this, baseAttributeGroup, derivedAttributeGroup);
		}

		::System::Boolean IsProcessContentsRestricted(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaAnyAttribute* derivedAttributeWildcard, ::System::Xml::Schema::XmlSchemaAnyAttribute* baseAttributeWildcard)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISPROCESSCONTENTSRESTRICTED_OFFSET))(this, baseType, derivedAttributeWildcard, baseAttributeWildcard);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEANYATTRIBUTEUNION_OFFSET))(this, a, b);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEANYATTRIBUTEINTERSECTION_OFFSET))(this, a, b);
		}

		::System::Void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEATTRIBUTE_OFFSET))(this, xa);
		}

		::System::Void SetDefaultFixed(::System::Xml::Schema::XmlSchemaAttribute* xa, ::System::Xml::Schema::SchemaAttDef* decl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_SETDEFAULTFIXED_OFFSET))(this, xa, decl);
		}

		::System::Void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEIDENTITYCONSTRAINT_OFFSET))(this, xi);
		}

		::System::Void CompileElement(::System::Xml::Schema::XmlSchemaElement* xe)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEELEMENT_OFFSET))(this, xe);
		}

		::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Xml::Schema::ContentValidator*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXCONTENT_OFFSET))(this, complexType);
		}

		::System::Boolean BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_BUILDPARTICLECONTENTMODEL_OFFSET))(this, contentValidator, particle);
		}

		::System::Void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEPARTICLEELEMENTS_OFFSET))(this, complexType, particle);
		}

		::System::Void CompileParticleElements_1(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILEPARTICLEELEMENTS_1_OFFSET))(this, particle);
		}

		::System::Void CompileComplexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COMPILECOMPLEXTYPEELEMENTS_OFFSET))(this, complexType);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_GETSIMPLETYPE_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_GETCOMPLEXTYPE_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_GETANYSCHEMATYPE_OFFSET))(this, name);
		}

		::System::Void CopyPosition(::System::Xml::Schema::XmlSchemaAnnotated* to, ::System::Xml::Schema::XmlSchemaAnnotated* from, ::System::Boolean copyParent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotated*, ::System::Xml::Schema::XmlSchemaAnnotated*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_COPYPOSITION_OFFSET))(this, to, from, copyParent);
		}

		::System::Boolean IsFixedEqual(::System::Xml::Schema::SchemaDeclBase* baseDecl, ::System::Xml::Schema::SchemaDeclBase* derivedDecl)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::SchemaDeclBase*, ::System::Xml::Schema::SchemaDeclBase*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_COMPILER_ISFIXEDEQUAL_OFFSET))(this, baseDecl, derivedDecl);
		}
	};
}
