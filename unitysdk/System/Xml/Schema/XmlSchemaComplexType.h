#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDerivationMethod.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaForm.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaType.h"

namespace System::Xml::Schema { class ContentValidator; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAnyAttribute; }
namespace System::Xml::Schema { class XmlSchemaContentModel; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaParticle; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLEARCOMPILEDSTATE_OFFSET UNITYSDK_OFFSET(0x1F14E610)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F14DC90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEGROUPBASEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1F14E820)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEPARTICLE_OFFSET UNITYSDK_OFFSET(0x1F14E2A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_1_OFFSET UNITYSDK_OFFSET(0x1F14D210)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F14D200)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CONTAINSIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1F14CD90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET UNITYSDK_OFFSET(0x1F14C360)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GETRESOLVEDELEMENTFORM_OFFSET UNITYSDK_OFFSET(0x1F14E9E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1F14CAC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F14CB90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEUSES_OFFSET UNITYSDK_OFFSET(0x1F14CC90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1F14CB50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1F14CB80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_LOCALELEMENTS_OFFSET UNITYSDK_OFFSET(0x1F14CD00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASATTRIBUTEQNAMEREF_OFFSET UNITYSDK_OFFSET(0x1F14E690)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASPARTICLEREF_OFFSET UNITYSDK_OFFSET(0x1F14DFD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_HASWILDCARD_OFFSET UNITYSDK_OFFSET(0x1F14CD70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1F14CB60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1F14CAA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14C000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14C9B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaComplexType_TypeDefinitionIndex = 2131;

	class XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType
	{
	public:
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_anyTypeLax()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x1840);
		}
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_untypedAnyType()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x1848);
		}
		static ::System::Xml::Schema::XmlSchemaComplexType** StaticGet_anyTypeSkip()
		{
			return (::System::Xml::Schema::XmlSchemaComplexType**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaComplexType_TypeDefinitionIndex)->GetStaticField(0x1850);
		}
		::System::Xml::Schema::XmlSchemaObjectCollection* attributes; // 0x90
		::System::Xml::Schema::XmlSchemaContentModel* contentModel; // 0x98
		::System::Xml::Schema::XmlSchemaObjectTable* attributeUses; // 0xA0
		::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard; // 0xA8
		::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute; // 0xB0
		::System::Xml::Schema::XmlSchemaObjectTable* localElements; // 0xB8
		::System::Xml::Schema::XmlSchemaParticle* particle; // 0xC0
		::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle; // 0xC8
		::System::Byte pvFlags; // 0xD0
		::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved; // 0xD4
		::System::Xml::Schema::XmlSchemaDerivationMethod block; // 0xD8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing processContents)
		{
			return ((::System::Xml::Schema::XmlSchemaComplexType*(*)(::System::Xml::Schema::XmlSchemaContentProcessing))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CREATEANYTYPE_OFFSET))(processContents);
		}

		static ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator()
		{
			return ((::System::Xml::Schema::ContentValidator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ANYTYPECONTENTVALIDATOR_OFFSET))();
		}

		::System::Boolean get_IsAbstract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISABSTRACT_OFFSET))(this);
		}

		::System::Void set_IsAbstract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISABSTRACT_OFFSET))(this, value);
		}

		::System::Boolean get_IsMixed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ISMIXED_OFFSET))(this);
		}

		::System::Void set_IsMixed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_ISMIXED_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_ATTRIBUTEUSES_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectTable* get_LocalElements()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GET_LOCALELEMENTS_OFFSET))(this);
		}

		::System::Void set_HasWildCard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_SET_HASWILDCARD_OFFSET))(this, value);
		}

		::System::Boolean ContainsIdAttribute(::System::Boolean findAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CONTAINSIDATTRIBUTE_OFFSET))(this, findAll);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone_1(::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONE_1_OFFSET))(this, parentSchema);
		}

		::System::Void ClearCompiledState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLEARCOMPILEDSTATE_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaObjectCollection* CloneAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEATTRIBUTES_OFFSET))(attributes);
		}

		static ::System::Xml::Schema::XmlSchemaObjectCollection* CloneGroupBaseParticles(::System::Xml::Schema::XmlSchemaObjectCollection* groupBaseParticles, ::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEGROUPBASEPARTICLES_OFFSET))(groupBaseParticles, parentSchema);
		}

		static ::System::Xml::Schema::XmlSchemaParticle* CloneParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaParticle*(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_CLONEPARTICLE_OFFSET))(particle, parentSchema);
		}

		static ::System::Xml::Schema::XmlSchemaForm GetResolvedElementForm(::System::Xml::Schema::XmlSchema* parentSchema, ::System::Xml::Schema::XmlSchemaElement* element)
		{
			return ((::System::Xml::Schema::XmlSchemaForm(*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_GETRESOLVEDELEMENTFORM_OFFSET))(parentSchema, element);
		}

		static ::System::Boolean HasParticleRef(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASPARTICLEREF_OFFSET))(particle, parentSchema);
		}

		static ::System::Boolean HasAttributeQNameRef(::System::Xml::Schema::XmlSchemaObjectCollection* attributes)
		{
			return ((::System::Boolean(*)(::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOMPLEXTYPE_HASATTRIBUTEQNAMEREF_OFFSET))(attributes);
		}
	};
}
