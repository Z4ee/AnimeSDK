#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/SchemaBuilder.h"
#include "unitysdk/System/Xml/Schema/SchemaNames_Token.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"
#include "unitysdk/System/Xml/Schema/XsdBuilder_State.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class Stack; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class PositionInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAll; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }
namespace System::Xml::Schema { class XmlSchemaAny; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaAppInfo; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroup; }
namespace System::Xml::Schema { class XmlSchemaAttributeGroupRef; }
namespace System::Xml::Schema { class XmlSchemaChoice; }
namespace System::Xml::Schema { class XmlSchemaComplexContent; }
namespace System::Xml::Schema { class XmlSchemaComplexContentExtension; }
namespace System::Xml::Schema { class XmlSchemaComplexContentRestriction; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaDocumentation; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaException; }
namespace System::Xml::Schema { class XmlSchemaFacet; }
namespace System::Xml::Schema { class XmlSchemaGroup; }
namespace System::Xml::Schema { class XmlSchemaGroupRef; }
namespace System::Xml::Schema { class XmlSchemaIdentityConstraint; }
namespace System::Xml::Schema { class XmlSchemaImport; }
namespace System::Xml::Schema { class XmlSchemaInclude; }
namespace System::Xml::Schema { class XmlSchemaNotation; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaRedefine; }
namespace System::Xml::Schema { class XmlSchemaSequence; }
namespace System::Xml::Schema { class XmlSchemaSimpleContent; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentExtension; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentRestriction; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaSimpleTypeList; }
namespace System::Xml::Schema { class XmlSchemaSimpleTypeRestriction; }
namespace System::Xml::Schema { class XmlSchemaSimpleTypeUnion; }
namespace System::Xml::Schema { class XmlSchemaXPath; }
namespace System::Xml::Schema { class XsdBuilder_XsdAttributeEntry; }
namespace System::Xml::Schema { class XsdBuilder_XsdEntry; }

#define SYSTEM_XML_SCHEMA_XSDBUILDER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E4ECE30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ADDPARTICLE_OFFSET UNITYSDK_OFFSET(0x1E4F0AC0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANNOTATED_ID_OFFSET UNITYSDK_OFFSET(0x1E4EBED0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANYATTRIBUTE_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4F0700)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANYATTRIBUTE_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x1E4F0730)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANY_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4F14A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANY_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x1E4F14D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDAPPINFO_SOURCE_OFFSET UNITYSDK_OFFSET(0x1E4F2640)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTEGROUPREF_REF_OFFSET UNITYSDK_OFFSET(0x1E4F0300)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTEGROUP_NAME_OFFSET UNITYSDK_OFFSET(0x1E4F0220)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4ED1E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_FIXED_OFFSET UNITYSDK_OFFSET(0x1E4ED210)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_FORM_OFFSET UNITYSDK_OFFSET(0x1E4ED240)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_NAME_OFFSET UNITYSDK_OFFSET(0x1E4ED550)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_REF_OFFSET UNITYSDK_OFFSET(0x1E4ED360)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_TYPE_OFFSET UNITYSDK_OFFSET(0x1E4ED580)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_USE_OFFSET UNITYSDK_OFFSET(0x1E4ED2D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENTEXTENSION_BASE_OFFSET UNITYSDK_OFFSET(0x1E4EF9D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENTRESTRICTION_BASE_OFFSET UNITYSDK_OFFSET(0x1E4EFB30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENT_MIXED_OFFSET UNITYSDK_OFFSET(0x1E4EF810)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_ABSTRACT_OFFSET UNITYSDK_OFFSET(0x1E4EF3A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_BLOCK_OFFSET UNITYSDK_OFFSET(0x1E4EF4D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_FINAL_OFFSET UNITYSDK_OFFSET(0x1E4EF540)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_MIXED_OFFSET UNITYSDK_OFFSET(0x1E4EF5B0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_NAME_OFFSET UNITYSDK_OFFSET(0x1E4EF6E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDDOCUMENTATION_SOURCE_OFFSET UNITYSDK_OFFSET(0x1E4F2850)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDDOCUMENTATION_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1E4F28C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_ABSTRACT_OFFSET UNITYSDK_OFFSET(0x1E4ED8A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_BLOCK_OFFSET UNITYSDK_OFFSET(0x1E4EDA80)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4EDAF0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FINAL_OFFSET UNITYSDK_OFFSET(0x1E4EDC90)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FIXED_OFFSET UNITYSDK_OFFSET(0x1E4EDD00)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FORM_OFFSET UNITYSDK_OFFSET(0x1E4EDB20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4EDD30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4EDE60)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_NAME_OFFSET UNITYSDK_OFFSET(0x1E4EDF90)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_NILLABLE_OFFSET UNITYSDK_OFFSET(0x1E4EDFC0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_REF_OFFSET UNITYSDK_OFFSET(0x1E4EE0E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_SUBSTITUTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1E4EDBB0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_TYPE_OFFSET UNITYSDK_OFFSET(0x1E4EE1C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFACET_FIXED_OFFSET UNITYSDK_OFFSET(0x1E4F1B20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFACET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E4F1C50)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFIELD_XPATH_OFFSET UNITYSDK_OFFSET(0x1E4F22A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDGROUPREF_REF_OFFSET UNITYSDK_OFFSET(0x1E4F1130)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDGROUP_NAME_OFFSET UNITYSDK_OFFSET(0x1E4F0A20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIDENTITYCONSTRAINT_NAME_OFFSET UNITYSDK_OFFSET(0x1E4F1EE0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIDENTITYCONSTRAINT_REFER_OFFSET UNITYSDK_OFFSET(0x1E4F1F10)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIMPORT_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4EC9C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIMPORT_SCHEMALOCATION_OFFSET UNITYSDK_OFFSET(0x1E4EC9F0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDINCLUDE_SCHEMALOCATION_OFFSET UNITYSDK_OFFSET(0x1E4EC830)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_NAME_OFFSET UNITYSDK_OFFSET(0x1E4F1710)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_PUBLIC_OFFSET UNITYSDK_OFFSET(0x1E4F1740)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1E4F1770)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDPARTICLE_MAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4F0FF0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDPARTICLE_MINOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4F1090)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDREDEFINE_SCHEMALOCATION_OFFSET UNITYSDK_OFFSET(0x1E4ECB80)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_ATTRIBUTEFORMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4EBF10)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_BLOCKDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4EC630)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_ELEMENTFORMDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4EC0D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_FINALDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E4EC1C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_TARGETNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4EC160)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_VERSION_OFFSET UNITYSDK_OFFSET(0x1E4EC190)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSELECTOR_XPATH_OFFSET UNITYSDK_OFFSET(0x1E4F2100)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLECONTENTEXTENSION_BASE_OFFSET UNITYSDK_OFFSET(0x1E4EFDB0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLECONTENTRESTRICTION_BASE_OFFSET UNITYSDK_OFFSET(0x1E4EFF30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPELIST_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1E4EED30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPERESTRICTION_BASE_OFFSET UNITYSDK_OFFSET(0x1E4EEEB0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPEUNION_MEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x1E4EEA00)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPE_FINAL_OFFSET UNITYSDK_OFFSET(0x1E4EE8F0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPE_NAME_OFFSET UNITYSDK_OFFSET(0x1E4EE8C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ENDAPPINFO_OFFSET UNITYSDK_OFFSET(0x1E4F26C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ENDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E4EB010)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ENDDOCUMENTATION_OFFSET UNITYSDK_OFFSET(0x1E4F2A20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ENDREDEFINE_OFFSET UNITYSDK_OFFSET(0x1E4ECBB0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E4EB160)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_GETNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1E4E9F30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_GET_CURRENTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4EBDA0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_GET_PARENTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E4EBE40)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_GET_PARENTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4EBDC0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITALL_OFFSET UNITYSDK_OFFSET(0x1E4F1220)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITANNOTATION_OFFSET UNITYSDK_OFFSET(0x1E4F22D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E4F03E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITANY_OFFSET UNITYSDK_OFFSET(0x1E4F1370)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITAPPINFO_OFFSET UNITYSDK_OFFSET(0x1E4F24E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTEGROUPREF_OFFSET UNITYSDK_OFFSET(0x1E4F0250)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x1E4F0010)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E4ECBD0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITCHOICE_OFFSET UNITYSDK_OFFSET(0x1E4F1290)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E4EF920)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1E4EFAB0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENT_OFFSET UNITYSDK_OFFSET(0x1E4EF710)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x1E4EEF90)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITDOCUMENTATION_OFFSET UNITYSDK_OFFSET(0x1E4F26F0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4ED660)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITFACET_OFFSET UNITYSDK_OFFSET(0x1E4F17A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITFIELD_OFFSET UNITYSDK_OFFSET(0x1E4F2130)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITGROUPREF_OFFSET UNITYSDK_OFFSET(0x1E4F0A50)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITGROUP_OFFSET UNITYSDK_OFFSET(0x1E4F07C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E4F1C80)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITIMPORT_OFFSET UNITYSDK_OFFSET(0x1E4EC860)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITINCLUDE_OFFSET UNITYSDK_OFFSET(0x1E4EC6D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITNOTATION_OFFSET UNITYSDK_OFFSET(0x1E4F1560)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITREDEFINE_OFFSET UNITYSDK_OFFSET(0x1E4ECA20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSCHEMA_OFFSET UNITYSDK_OFFSET(0x1E4EC6A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSELECTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2070)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E4F1300)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E4EFD10)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENTRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1E4EFE90)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENT_OFFSET UNITYSDK_OFFSET(0x1E4EFC10)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPELIST_OFFSET UNITYSDK_OFFSET(0x1E4EEC30)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPERESTRICTION_OFFSET UNITYSDK_OFFSET(0x1E4EEE10)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPEUNION_OFFSET UNITYSDK_OFFSET(0x1E4EE960)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1E4EE2A0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ISCONTENTPARSED_OFFSET UNITYSDK_OFFSET(0x1E4EADD0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_ISSKIPABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4EA4B0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEBLOCKFINALENUM_OFFSET UNITYSDK_OFFSET(0x1E4EC230)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1E4ED9C0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEENUM_OFFSET UNITYSDK_OFFSET(0x1E4EBFA0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEQNAME_OFFSET UNITYSDK_OFFSET(0x1E4ED450)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEURIREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E4F26B0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_POP_OFFSET UNITYSDK_OFFSET(0x1E4EB050)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E4EA5E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSCDATA_OFFSET UNITYSDK_OFFSET(0x1E4EAE00)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1E4E9DD0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSMARKUP_OFFSET UNITYSDK_OFFSET(0x1E4EADF0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_PUSH_OFFSET UNITYSDK_OFFSET(0x1E4EA150)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_RECORDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E4EA350)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1E4EA4E0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1E4EAC20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_3_OFFSET UNITYSDK_OFFSET(0x1E4F2C80)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_4_OFFSET UNITYSDK_OFFSET(0x1E4EEC20)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1E4F2A50)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SETCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E4EB2D0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SETMAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4EDDD0)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_SETMINOCCURS_OFFSET UNITYSDK_OFFSET(0x1E4EDF00)
#define SYSTEM_XML_SCHEMA_XSDBUILDER_STARTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E4EAE40)
#define SYSTEM_XML_SCHEMA_XSDBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F2D90)
#define SYSTEM_XML_SCHEMA_XSDBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E9AC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdBuilder_TypeDefinitionIndex = 2219;

	class XsdBuilder : public ::System::Xml::Schema::SchemaBuilder
	{
	public:
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_FieldAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2000);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_GroupSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2008);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ElementAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2010);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ParticleAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2018);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AttributeAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2020);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_DerivationMethodStrings()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2028);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleTypeListSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2030);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AnyAttributeAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2038);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ComplexContentExtensionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2040);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SelectorAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2048);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_AnnotationSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2050);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_AnnotatedSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2058);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_FormStringValues()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2060);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_AllSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2068);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_GroupRefAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2070);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ProcessContentsStringValues()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2078);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ComplexContentRestrictionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2080);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DerivationMethodValues()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2088);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_UseStringValues()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2090);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleContentAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2098);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleContentExtensionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20A0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_FacetAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20A8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleContentRestrictionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20B0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleTypeListAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20B8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SchemaElement()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20C0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ComplexContentRestrictionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20C8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleContentRestrictionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20D0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AttributeGroupAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20D8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleContentSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20E0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AnnotationAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20E8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AppinfoAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20F0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ComplexContentAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x20F8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_IdentityConstraintAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2100);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleTypeAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2108);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ElementSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2110);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_RedefineAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2118);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdEntry*>** StaticGet_SchemaEntries()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2120);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_NotationAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2128);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AttributeGroupRefAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2130);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ComplexContentSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2138);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ChoiceSequenceSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2140);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_IncludeAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2148);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ImportAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2150);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleTypeRestrictionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2158);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SchemaAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2160);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleTypeRestrictionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2168);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_RedefineSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2170);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_GroupAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2178);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ComplexTypeAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2180);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleContentExtensionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2188);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_AttributeGroupSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2190);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleTypeUnionSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x2198);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_AnyAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21A0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_ComplexTypeSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21A8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_AttributeSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21B0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_IdentityConstraintSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21B8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SimpleTypeSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21C0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_SimpleTypeUnionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21C8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>** StaticGet_SchemaSubelements()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_State>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21D0);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_DocumentationAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21D8);
		}
		static ::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>** StaticGet_ComplexContentExtensionAttributes()
		{
			return (::Il2CppArray<::System::Xml::Schema::XsdBuilder_XsdAttributeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(XsdBuilder_TypeDefinitionIndex)->GetStaticField(0x21E0);
		}
		::System::Xml::Schema::XmlSchemaAttributeGroupRef* attributeGroupRef; // 0x10
		::System::Xml::Schema::XmlSchemaAppInfo* appInfo; // 0x18
		::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension; // 0x20
		::System::Xml::Schema::XmlSchemaImport* import; // 0x28
		::System::Xml::Schema::XmlSchemaElement* element; // 0x30
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x38
		::System::Xml::Schema::XmlSchemaParticle* particle; // 0x40
		::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleContentRestriction; // 0x48
		::System::Collections::Hashtable* namespaces; // 0x50
		::System::Xml::Schema::XmlSchemaChoice* choice; // 0x58
		::System::Collections::ArrayList* unhandledAttributes; // 0x60
		::System::Xml::Schema::XmlSchemaXPath* xpath; // 0x68
		::System::Xml::Schema::XmlSchemaSimpleType* simpleType; // 0x70
		::System::Xml::Schema::XmlSchemaNotation* notation; // 0x78
		::System::Xml::HWStack* stateHistory; // 0x80
		::System::Xml::Schema::XmlSchemaFacet* facet; // 0x88
		::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexContentRestriction; // 0x90
		::System::Xml::Schema::XsdBuilder_XsdEntry* nextEntry; // 0x98
		::System::Xml::Schema::XmlSchemaComplexType* complexType; // 0xA0
		::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* simpleTypeRestriction; // 0xA8
		::System::Xml::XmlNamespaceManager* namespaceManager; // 0xB0
		::System::Xml::Schema::XmlSchemaSimpleTypeUnion* simpleTypeUnion; // 0xB8
		::System::Collections::Stack* containerStack; // 0xC0
		::System::Xml::Schema::XmlSchemaIdentityConstraint* identityConstraint; // 0xC8
		::System::Xml::Schema::XmlSchemaSequence* sequence; // 0xD0
		::System::Xml::PositionInfo* positionInfo; // 0xD8
		::System::Xml::XmlNameTable* nameTable; // 0xE0
		::System::Xml::Schema::ValidationEventHandler* validationEventHandler; // 0xE8
		::System::Xml::Schema::XmlSchemaDocumentation* documentation; // 0xF0
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0xF8
		::System::Xml::Schema::XmlSchemaAttribute* attribute; // 0x100
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x108
		::System::Xml::Schema::XmlSchemaAny* anyElement; // 0x110
		::System::Xml::Schema::XmlSchemaSimpleTypeList* simpleTypeList; // 0x118
		::System::Xml::Schema::XmlSchemaComplexContentExtension* complexContentExtension; // 0x120
		::System::Xml::Schema::XmlSchemaSimpleContent* simpleContent; // 0x128
		::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup; // 0x130
		::Il2CppArray<::System::Xml::XmlNode*>* markup; // 0x138
		::System::Xml::Schema::XmlSchema* schema; // 0x140
		::System::Xml::XmlReader* reader; // 0x148
		::System::Xml::Schema::XmlSchemaGroupRef* groupRef; // 0x150
		::System::Xml::Schema::XmlSchemaAll* all; // 0x158
		::System::Xml::Schema::XmlSchemaComplexContent* complexContent; // 0x160
		::System::Xml::Schema::XsdBuilder_XsdEntry* currentEntry; // 0x168
		::System::Xml::Schema::XmlSchemaInclude* include; // 0x170
		::System::Xml::Schema::XmlSchemaRedefine* redefine; // 0x178
		::System::Xml::Schema::XmlSchemaGroup* group; // 0x180
		::System::Xml::Schema::XmlSchemaObject* xso; // 0x188
		::System::Boolean hasChild; // 0x190
		::System::Boolean canIncludeImport; // 0x191

		::System::Void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::XmlSchema* schema, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER__CTOR_OFFSET))(this, reader, curmgr, schema, nameTable, schemaNames, eventhandler);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER__CCTOR_OFFSET))();
		}

		::System::Boolean ProcessElement(::System::String* prefix, ::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSELEMENT_OFFSET))(this, prefix, name, ns);
		}

		::System::Void ProcessAttribute(::System::String* prefix, ::System::String* name, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSATTRIBUTE_OFFSET))(this, prefix, name, ns, value);
		}

		::System::Boolean IsContentParsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ISCONTENTPARSED_OFFSET))(this);
		}

		::System::Void ProcessMarkup(::Il2CppArray<::System::Xml::XmlNode*>* markup)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlNode*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSMARKUP_OFFSET))(this, markup);
		}

		::System::Void ProcessCData(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PROCESSCDATA_OFFSET))(this, value);
		}

		::System::Void StartChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_STARTCHILDREN_OFFSET))(this);
		}

		::System::Void EndChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ENDCHILDREN_OFFSET))(this);
		}

		::System::Void Push()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PUSH_OFFSET))(this);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_POP_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaNames_Token get_CurrentElement()
		{
			return ((::System::Xml::Schema::SchemaNames_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_GET_CURRENTELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaNames_Token get_ParentElement()
		{
			return ((::System::Xml::Schema::SchemaNames_Token(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_GET_PARENTELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* get_ParentContainer()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_GET_PARENTCONTAINER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* GetContainer(::System::Xml::Schema::XsdBuilder_State state)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::Schema::XsdBuilder_State))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_GETCONTAINER_OFFSET))(this, state);
		}

		::System::Void SetContainer(::System::Xml::Schema::XsdBuilder_State state, ::System::Object* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XsdBuilder_State, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SETCONTAINER_OFFSET))(this, state, container);
		}

		static ::System::Void BuildAnnotated_Id(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANNOTATED_ID_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_AttributeFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_ATTRIBUTEFORMDEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_ElementFormDefault(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_ELEMENTFORMDEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_TargetNamespace(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_TARGETNAMESPACE_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_Version(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_VERSION_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_FinalDefault(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_FINALDEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void BuildSchema_BlockDefault(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSCHEMA_BLOCKDEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void InitSchema(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSCHEMA_OFFSET))(builder, value);
		}

		static ::System::Void InitInclude(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITINCLUDE_OFFSET))(builder, value);
		}

		static ::System::Void BuildInclude_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDINCLUDE_SCHEMALOCATION_OFFSET))(builder, value);
		}

		static ::System::Void InitImport(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITIMPORT_OFFSET))(builder, value);
		}

		static ::System::Void BuildImport_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIMPORT_NAMESPACE_OFFSET))(builder, value);
		}

		static ::System::Void BuildImport_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIMPORT_SCHEMALOCATION_OFFSET))(builder, value);
		}

		static ::System::Void InitRedefine(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITREDEFINE_OFFSET))(builder, value);
		}

		static ::System::Void BuildRedefine_SchemaLocation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDREDEFINE_SCHEMALOCATION_OFFSET))(builder, value);
		}

		static ::System::Void EndRedefine(::System::Xml::Schema::XsdBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ENDREDEFINE_OFFSET))(builder);
		}

		static ::System::Void InitAttribute(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTE_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Default(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_DEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_FIXED_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Form(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_FORM_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Use(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_USE_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Ref(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_REF_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_NAME_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttribute_Type(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTE_TYPE_OFFSET))(builder, value);
		}

		static ::System::Void InitElement(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITELEMENT_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_ABSTRACT_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Block(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_BLOCK_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Default(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_DEFAULT_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Form(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FORM_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_SubstitutionGroup(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_SUBSTITUTIONGROUP_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Final(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FINAL_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_FIXED_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_MAXOCCURS_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_MINOCCURS_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_NAME_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Nillable(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_NILLABLE_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Ref(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_REF_OFFSET))(builder, value);
		}

		static ::System::Void BuildElement_Type(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDELEMENT_TYPE_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleType(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPE_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleType_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPE_NAME_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleType_Final(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPE_FINAL_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleTypeUnion(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPEUNION_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleTypeUnion_MemberTypes(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPEUNION_MEMBERTYPES_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleTypeList(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPELIST_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleTypeList_ItemType(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPELIST_ITEMTYPE_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleTypeRestriction(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLETYPERESTRICTION_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleTypeRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLETYPERESTRICTION_BASE_OFFSET))(builder, value);
		}

		static ::System::Void InitComplexType(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXTYPE_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexType_Abstract(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_ABSTRACT_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexType_Block(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_BLOCK_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexType_Final(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_FINAL_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexType_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_MIXED_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexType_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXTYPE_NAME_OFFSET))(builder, value);
		}

		static ::System::Void InitComplexContent(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENT_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexContent_Mixed(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENT_MIXED_OFFSET))(builder, value);
		}

		static ::System::Void InitComplexContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENTEXTENSION_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENTEXTENSION_BASE_OFFSET))(builder, value);
		}

		static ::System::Void InitComplexContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITCOMPLEXCONTENTRESTRICTION_OFFSET))(builder, value);
		}

		static ::System::Void BuildComplexContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDCOMPLEXCONTENTRESTRICTION_BASE_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleContent(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENT_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleContentExtension(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENTEXTENSION_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleContentExtension_Base(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLECONTENTEXTENSION_BASE_OFFSET))(builder, value);
		}

		static ::System::Void InitSimpleContentRestriction(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSIMPLECONTENTRESTRICTION_OFFSET))(builder, value);
		}

		static ::System::Void BuildSimpleContentRestriction_Base(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSIMPLECONTENTRESTRICTION_BASE_OFFSET))(builder, value);
		}

		static ::System::Void InitAttributeGroup(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTEGROUP_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttributeGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTEGROUP_NAME_OFFSET))(builder, value);
		}

		static ::System::Void InitAttributeGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITATTRIBUTEGROUPREF_OFFSET))(builder, value);
		}

		static ::System::Void BuildAttributeGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDATTRIBUTEGROUPREF_REF_OFFSET))(builder, value);
		}

		static ::System::Void InitAnyAttribute(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITANYATTRIBUTE_OFFSET))(builder, value);
		}

		static ::System::Void BuildAnyAttribute_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANYATTRIBUTE_NAMESPACE_OFFSET))(builder, value);
		}

		static ::System::Void BuildAnyAttribute_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANYATTRIBUTE_PROCESSCONTENTS_OFFSET))(builder, value);
		}

		static ::System::Void InitGroup(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITGROUP_OFFSET))(builder, value);
		}

		static ::System::Void BuildGroup_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDGROUP_NAME_OFFSET))(builder, value);
		}

		static ::System::Void InitGroupRef(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITGROUPREF_OFFSET))(builder, value);
		}

		static ::System::Void BuildParticle_MaxOccurs(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDPARTICLE_MAXOCCURS_OFFSET))(builder, value);
		}

		static ::System::Void BuildParticle_MinOccurs(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDPARTICLE_MINOCCURS_OFFSET))(builder, value);
		}

		static ::System::Void BuildGroupRef_Ref(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDGROUPREF_REF_OFFSET))(builder, value);
		}

		static ::System::Void InitAll(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITALL_OFFSET))(builder, value);
		}

		static ::System::Void InitChoice(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITCHOICE_OFFSET))(builder, value);
		}

		static ::System::Void InitSequence(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSEQUENCE_OFFSET))(builder, value);
		}

		static ::System::Void InitAny(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITANY_OFFSET))(builder, value);
		}

		static ::System::Void BuildAny_Namespace(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANY_NAMESPACE_OFFSET))(builder, value);
		}

		static ::System::Void BuildAny_ProcessContents(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDANY_PROCESSCONTENTS_OFFSET))(builder, value);
		}

		static ::System::Void InitNotation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITNOTATION_OFFSET))(builder, value);
		}

		static ::System::Void BuildNotation_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_NAME_OFFSET))(builder, value);
		}

		static ::System::Void BuildNotation_Public(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_PUBLIC_OFFSET))(builder, value);
		}

		static ::System::Void BuildNotation_System(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDNOTATION_SYSTEM_OFFSET))(builder, value);
		}

		static ::System::Void InitFacet(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITFACET_OFFSET))(builder, value);
		}

		static ::System::Void BuildFacet_Fixed(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFACET_FIXED_OFFSET))(builder, value);
		}

		static ::System::Void BuildFacet_Value(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFACET_VALUE_OFFSET))(builder, value);
		}

		static ::System::Void InitIdentityConstraint(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITIDENTITYCONSTRAINT_OFFSET))(builder, value);
		}

		static ::System::Void BuildIdentityConstraint_Name(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIDENTITYCONSTRAINT_NAME_OFFSET))(builder, value);
		}

		static ::System::Void BuildIdentityConstraint_Refer(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDIDENTITYCONSTRAINT_REFER_OFFSET))(builder, value);
		}

		static ::System::Void InitSelector(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITSELECTOR_OFFSET))(builder, value);
		}

		static ::System::Void BuildSelector_XPath(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDSELECTOR_XPATH_OFFSET))(builder, value);
		}

		static ::System::Void InitField(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITFIELD_OFFSET))(builder, value);
		}

		static ::System::Void BuildField_XPath(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDFIELD_XPATH_OFFSET))(builder, value);
		}

		static ::System::Void InitAnnotation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITANNOTATION_OFFSET))(builder, value);
		}

		static ::System::Void InitAppinfo(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITAPPINFO_OFFSET))(builder, value);
		}

		static ::System::Void BuildAppinfo_Source(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDAPPINFO_SOURCE_OFFSET))(builder, value);
		}

		static ::System::Void EndAppinfo(::System::Xml::Schema::XsdBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ENDAPPINFO_OFFSET))(builder);
		}

		static ::System::Void InitDocumentation(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_INITDOCUMENTATION_OFFSET))(builder, value);
		}

		static ::System::Void BuildDocumentation_Source(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDDOCUMENTATION_SOURCE_OFFSET))(builder, value);
		}

		static ::System::Void BuildDocumentation_XmlLang(::System::Xml::Schema::XsdBuilder* builder, ::System::String* value)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_BUILDDOCUMENTATION_XMLLANG_OFFSET))(builder, value);
		}

		static ::System::Void EndDocumentation(::System::Xml::Schema::XsdBuilder* builder)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XsdBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ENDDOCUMENTATION_OFFSET))(builder);
		}

		::System::Void AddAttribute(::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ADDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void AddParticle(::System::Xml::Schema::XmlSchemaParticle* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ADDPARTICLE_OFFSET))(this, particle);
		}

		::System::Boolean GetNextState(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_GETNEXTSTATE_OFFSET))(this, qname);
		}

		::System::Boolean IsSkipableElement(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_ISSKIPABLEELEMENT_OFFSET))(this, qname);
		}

		::System::Void SetMinOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SETMINOCCURS_OFFSET))(this, particle, value);
		}

		::System::Void SetMaxOccurs(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaParticle*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SETMAXOCCURS_OFFSET))(this, particle, value);
		}

		::System::Boolean ParseBoolean(::System::String* value, ::System::String* attributeName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEBOOLEAN_OFFSET))(this, value, attributeName);
		}

		::System::Int32 ParseEnum(::System::String* value, ::System::String* attributeName, ::Il2CppArray<::System::String*>* values)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEENUM_OFFSET))(this, value, attributeName, values);
		}

		::System::Xml::XmlQualifiedName* ParseQName(::System::String* value, ::System::String* attributeName)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEQNAME_OFFSET))(this, value, attributeName);
		}

		::System::Int32 ParseBlockFinalEnum(::System::String* value, ::System::String* attributeName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEBLOCKFINALENUM_OFFSET))(this, value, attributeName);
		}

		static ::System::String* ParseUriReference(::System::String* s)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_PARSEURIREFERENCE_OFFSET))(s);
		}

		::System::Void SendValidationEvent(::System::String* code, ::System::String* arg0, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_OFFSET))(this, code, arg0, arg1, arg2);
		}

		::System::Void SendValidationEvent_1(::System::String* code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_1_OFFSET))(this, code, msg);
		}

		::System::Void SendValidationEvent_2(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_2_OFFSET))(this, code, args, severity);
		}

		::System::Void SendValidationEvent_3(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_3_OFFSET))(this, e, severity);
		}

		::System::Void SendValidationEvent_4(::System::Xml::Schema::XmlSchemaException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_SENDVALIDATIONEVENT_4_OFFSET))(this, e);
		}

		::System::Void RecordPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDBUILDER_RECORDPOSITION_OFFSET))(this);
		}
	};
}
