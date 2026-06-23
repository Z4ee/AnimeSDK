#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/BaseProcessor.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"

namespace System::Collections { class ArrayList; }
namespace System::Collections { class Stack; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class ParticleContentValidator; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAll; }
namespace System::Xml::Schema { class XmlSchemaAny; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaChoice; }
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
namespace System::Xml::Schema { class XmlSchemaSimpleContentExtension; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentRestriction; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaSubstitutionGroup; }
namespace System::Xml::Schema { class XmlSchemaSubstitutionGroupV1Compat; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_BUILDPARTICLECONTENTMODEL_OFFSET UNITYSDK_OFFSET(0x1CFBC4D0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CALCULATEEFFECTIVETOTALRANGE_OFFSET UNITYSDK_OFFSET(0x1CFBA940)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CALCULATESEQUENCERANGE_OFFSET UNITYSDK_OFFSET(0x1CFBBB00)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEALL_OFFSET UNITYSDK_OFFSET(0x1CFB7680)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZECHOICE_OFFSET UNITYSDK_OFFSET(0x1CFB7EB0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFB6C40)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEGROUPREF_OFFSET UNITYSDK_OFFSET(0x1CFB6DF0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1CFB1750)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1CFB8820)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKPARTICLEDERIVATION_OFFSET UNITYSDK_OFFSET(0x1CFB1140)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKSUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1CFB1230)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKUNIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CFB2040)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1CFABA80)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CFB1510)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFAC180)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1CFABBD0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFABFE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPGROUP_OFFSET UNITYSDK_OFFSET(0x1CFABA50)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPPARTICLE_OFFSET UNITYSDK_OFFSET(0x1CFB15E0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1CFABFC0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUP_1_OFFSET UNITYSDK_OFFSET(0x1CFAC1C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1CFA5F40)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEANYATTRIBUTEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1CFBC330)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEANYATTRIBUTEUNION_OFFSET UNITYSDK_OFFSET(0x1CFBC400)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1CFAD450)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFB0360)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEBASEMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x1CFB1BE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPEXTYPEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1CFB1080)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1CFB29C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1CFB2FA0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENT_OFFSET UNITYSDK_OFFSET(0x1CFB5A70)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1CFAE1B0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECONTENTTYPEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1CFB5870)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFAF5E0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEGROUP_OFFSET UNITYSDK_OFFSET(0x1CFAD3A0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1CFB0BA0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILELOCALATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CFB3320)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEPARTICLEELEMENTS_OFFSET UNITYSDK_OFFSET(0x1CFBCEF0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLECONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1CFB2140)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLECONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1CFB2410)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1CFAEEE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1CFACC30)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x1CFA7570)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CFA59E0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETANYSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1CFB6410)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1CFB65A0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETMAPPINGPARTICLE_OFFSET UNITYSDK_OFFSET(0x1CFBB9F0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETSCHEMACONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CFB5A10)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1CFB1930)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISANYFROMANY_OFFSET UNITYSDK_OFFSET(0x1CFB9440)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMANY_OFFSET UNITYSDK_OFFSET(0x1CFB9390)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFB91A0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMGROUPBASE_OFFSET UNITYSDK_OFFSET(0x1CFB9780)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISGROUPBASEFROMANY_OFFSET UNITYSDK_OFFSET(0x1CFB94D0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISGROUPBASEFROMGROUPBASE_OFFSET UNITYSDK_OFFSET(0x1CFB9E30)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISPARTICLEEMPTIABLE_OFFSET UNITYSDK_OFFSET(0x1CFB90C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISSEQUENCEFROMALL_OFFSET UNITYSDK_OFFSET(0x1CFBA230)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISSEQUENCEFROMCHOICE_OFFSET UNITYSDK_OFFSET(0x1CFBA6C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDOCCURRENCERANGERESTRICTION_1_OFFSET UNITYSDK_OFFSET(0x1CFBB840)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDOCCURRENCERANGERESTRICTION_OFFSET UNITYSDK_OFFSET(0x1CFBA8D0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1CFB66B0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1CFAA490)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1CFA5A30)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_PUSHCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1CFBC300)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA58B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaCollectionCompiler_TypeDefinitionIndex = 2079;

	class SchemaCollectionCompiler : public ::System::Xml::Schema::BaseProcessor
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectTable* examplars; // 0x40
		::System::Xml::Schema::XmlSchema* schema; // 0x48
		::System::Collections::Stack* complexTypeStack; // 0x50
		::System::Boolean compileContentModel; // 0x58

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER__CTOR_OFFSET))(this, nameTable, eventHandler);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Boolean compileContentModel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::SchemaInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_EXECUTE_OFFSET))(this, schema, schemaInfo, compileContentModel);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_PREPARE_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUP_OFFSET))(this);
		}

		static ::System::Void Cleanup_1(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUP_1_OFFSET))(schema);
		}

		::System::Void Compile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILE_OFFSET))(this);
		}

		::System::Void Output(::System::Xml::Schema::SchemaInfo* schemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_OUTPUT_OFFSET))(this, schemaInfo);
		}

		static ::System::Void CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTE_OFFSET))(attribute);
		}

		static ::System::Void CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTEGROUP_OFFSET))(attributeGroup);
		}

		static ::System::Void CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPCOMPLEXTYPE_OFFSET))(complexType);
		}

		static ::System::Void CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPSIMPLETYPE_OFFSET))(simpleType);
		}

		static ::System::Void CleanupElement(::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPELEMENT_OFFSET))(element);
		}

		static ::System::Void CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPATTRIBUTES_OFFSET))(attributes);
		}

		static ::System::Void CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPGROUP_OFFSET))(group);
		}

		static ::System::Void CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CLEANUPPARTICLE_OFFSET))(particle);
		}

		::System::Void CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESUBSTITUTIONGROUP_OFFSET))(this, substitutionGroup);
		}

		::System::Void CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSubstitutionGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKSUBSTITUTIONGROUP_OFFSET))(this, substitutionGroup);
		}

		::System::Void CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEGROUP_OFFSET))(this, group);
		}

		::System::Void CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLETYPE_OFFSET))(this, simpleType);
		}

		::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType)
		{
			return ((::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEBASEMEMBERTYPES_OFFSET))(this, simpleType);
		}

		::System::Void CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions, ::System::Xml::Schema::XmlSchemaSimpleType* parentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKUNIONTYPE_OFFSET))(this, unionMember, memberTypeDefinitions, parentType);
		}

		::System::Void CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXTYPE_OFFSET))(this, complexType);
		}

		::System::Void CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLECONTENTEXTENSION_OFFSET))(this, complexType, simpleExtension);
		}

		::System::Void CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILESIMPLECONTENTRESTRICTION_OFFSET))(this, complexType, simpleRestriction);
		}

		::System::Void CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENTEXTENSION_OFFSET))(this, complexType, complexContent, complexExtension);
		}

		::System::Void CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENTRESTRICTION_OFFSET))(this, complexType, complexContent, complexRestriction);
		}

		::System::Void CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CHECKPARTICLEDERIVATION_OFFSET))(this, complexType);
		}

		::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECONTENTTYPEPARTICLE_OFFSET))(this, particle, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Boolean root, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEPARTICLE_OFFSET))(this, particle, root, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEELEMENT_OFFSET))(this, element, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, ::System::Boolean root, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupRef*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEGROUPREF_OFFSET))(this, groupRef, root, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, ::System::Boolean root, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAll*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZEALL_OFFSET))(this, all, root, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, ::System::Boolean root, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaChoice*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZECHOICE_OFFSET))(this, choice, root, substitution);
		}

		::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, ::System::Boolean root, ::System::Boolean substitution)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CANNONICALIZESEQUENCE_OFFSET))(this, sequence, root, substitution);
		}

		::System::Boolean IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDRESTRICTION_OFFSET))(this, derivedParticle, baseParticle);
		}

		::System::Boolean IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMELEMENT_OFFSET))(this, derivedElement, baseElement);
		}

		::System::Boolean IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMANY_OFFSET))(this, derivedElement, baseAny);
		}

		::System::Boolean IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISANYFROMANY_OFFSET))(this, derivedAny, baseAny);
		}

		::System::Boolean IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISGROUPBASEFROMANY_OFFSET))(this, derivedGroupBase, baseAny);
		}

		::System::Boolean IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, ::System::Boolean skipEmptableOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISELEMENTFROMGROUPBASE_OFFSET))(this, derivedElement, baseGroupBase, skipEmptableOnly);
		}

		::System::Boolean IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, ::System::Boolean skipEmptableOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISGROUPBASEFROMGROUPBASE_OFFSET))(this, derivedGroupBase, baseGroupBase, skipEmptableOnly);
		}

		::System::Boolean IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISSEQUENCEFROMALL_OFFSET))(this, derivedSequence, baseAll);
		}

		::System::Boolean IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISSEQUENCEFROMCHOICE_OFFSET))(this, derivedSequence, baseChoice);
		}

		::System::Void CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence* sequence, ::System::Decimal& minOccurs, ::System::Decimal& maxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSequence*, ::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CALCULATESEQUENCERANGE_OFFSET))(this, sequence, minOccurs, maxOccurs);
		}

		::System::Boolean IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDOCCURRENCERANGERESTRICTION_OFFSET))(this, derivedParticle, baseParticle);
		}

		::System::Boolean IsValidOccurrenceRangeRestriction_1(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs, ::System::Decimal baseMaxOccurs)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISVALIDOCCURRENCERANGERESTRICTION_1_OFFSET))(this, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
		}

		::System::Int32 GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETMAPPINGPARTICLE_OFFSET))(this, particle, collection);
		}

		::System::Boolean IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_ISPARTICLEEMPTIABLE_OFFSET))(this, particle);
		}

		::System::Void CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Decimal& minOccurs, ::System::Decimal& maxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::Decimal&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_CALCULATEEFFECTIVETOTALRANGE_OFFSET))(this, particle, minOccurs, maxOccurs);
		}

		::System::Void PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_PUSHCOMPLEXTYPE_OFFSET))(this, complexType);
		}

		::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Xml::Schema::XmlSchemaContentType(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETSCHEMACONTENTTYPE_OFFSET))(this, complexType, complexContent, particle);
		}

		::System::Void CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttributeGroup*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEATTRIBUTEGROUP_OFFSET))(this, attributeGroup);
		}

		::System::Void CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType, ::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaDerivationMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILELOCALATTRIBUTES_OFFSET))(this, baseType, derivedType, attributes, anyAttribute, derivedBy);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEANYATTRIBUTEUNION_OFFSET))(this, a, b);
		}

		::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a, ::System::Xml::Schema::XmlSchemaAnyAttribute* b)
		{
			return ((::System::Xml::Schema::XmlSchemaAnyAttribute*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEANYATTRIBUTEINTERSECTION_OFFSET))(this, a, b);
		}

		::System::Void CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEATTRIBUTE_OFFSET))(this, xa);
		}

		::System::Void CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaIdentityConstraint*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEIDENTITYCONSTRAINT_OFFSET))(this, xi);
		}

		::System::Void CompileElement(::System::Xml::Schema::XmlSchemaElement* xe)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEELEMENT_OFFSET))(this, xe);
		}

		::System::Xml::Schema::ContentValidator* CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Xml::Schema::ContentValidator*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPLEXCONTENT_OFFSET))(this, complexType);
		}

		::System::Void BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_BUILDPARTICLECONTENTMODEL_OFFSET))(this, contentValidator, particle);
		}

		::System::Void CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILEPARTICLEELEMENTS_OFFSET))(this, complexType, particle);
		}

		::System::Void CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_COMPILECOMPEXTYPEELEMENTS_OFFSET))(this, complexType);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETSIMPLETYPE_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETCOMPLEXTYPE_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONCOMPILER_GETANYSCHEMATYPE_OFFSET))(this, name);
		}
	};
}
