#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaInference_InferenceOption.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class NameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaComplexType; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }
namespace System::Xml::Schema { class XmlSchemaSet; }
namespace System::Xml::Schema { class XmlSchemaSimpleContentExtension; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A461EF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A45F060)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CHECKSIMPLECONTENTEXTENSION_OFFSET UNITYSDK_OFFSET(0x1A466C10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATENEWELEMENTFORCHOICE_OFFSET UNITYSDK_OFFSET(0x1A469040)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATEXMLSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A4658F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_DATETIME_OFFSET UNITYSDK_OFFSET(0x1A46AD20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTEREF_OFFSET UNITYSDK_OFFSET(0x1A4630C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A463540)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENTREF_OFFSET UNITYSDK_OFFSET(0x1A468E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A468CD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDGLOBALELEMENT_OFFSET UNITYSDK_OFFSET(0x1A465980)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDMATCHINGELEMENT_OFFSET UNITYSDK_OFFSET(0x1A467480)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETEFFECTIVESCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1A465D80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETSCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1A464AC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERELEMENT_OFFSET UNITYSDK_OFFSET(0x1A45FC80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA1_OFFSET UNITYSDK_OFFSET(0x1A45E440)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A45E3E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1A4696B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MAKEEXISTINGATTRIBUTESOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1A466B70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1A466D10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A4672D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_PROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A465F20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_REFINESIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x1A463950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SETMINMAXOCCURS_OFFSET UNITYSDK_OFFSET(0x1A468A50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_TYPEINFERENCE_OFFSET UNITYSDK_OFFSET(0x1A45E260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SWITCHUSETOOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1A469500)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A46AE20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45E270)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaInference_TypeDefinitionIndex = 2067;

	class XmlSchemaInference : public ::System::Object
	{
	public:
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_time()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1A80);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_short()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1A88);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_int()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1A90);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_boolean()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1A98);
		}
		static ::Il2CppArray<::System::Xml::XmlQualifiedName*>** StaticGet_SimpleTypes()
		{
			return (::Il2CppArray<::System::Xml::XmlQualifiedName*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AA0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_float()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AA8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_byte()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AB0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_unsignedInt()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AB8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_decimal()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AC0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_long()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AC8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_double()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AD0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_string()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AD8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_unsignedByte()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AE0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_gYearMonth()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AE8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_dateTime()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AF0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_unsignedLong()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1AF8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_integer()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1B00);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_unsignedShort()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1B08);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_anySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1B10);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_duration()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1B18);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_ST_date()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaInference_TypeDefinitionIndex)->GetStaticField(0x1B20);
		}
		::System::Collections::ArrayList* schemaList; // 0x10
		::System::Xml::Schema::XmlSchema* rootSchema; // 0x18
		::System::Xml::Schema::XmlSchemaSet* schemaSet; // 0x20
		::System::Xml::NameTable* nametable; // 0x28
		::System::String* TargetNamespace; // 0x30
		::System::Xml::XmlNamespaceManager* NamespaceManager; // 0x38
		::System::Xml::XmlReader* xtr; // 0x40
		::System::Xml::Schema::XmlSchemaInference_InferenceOption occurrence; // 0x48
		::System::Xml::Schema::XmlSchemaInference_InferenceOption typeInference; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE__CCTOR_OFFSET))();
		}

		::System::Void set_TypeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaInference_InferenceOption))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SET_TYPEINFERENCE_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaSet* InferSchema(::System::Xml::XmlReader* instanceDocument)
		{
			return ((::System::Xml::Schema::XmlSchemaSet*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA_OFFSET))(this, instanceDocument);
		}

		::System::Xml::Schema::XmlSchemaSet* InferSchema1(::System::Xml::XmlReader* instanceDocument, ::System::Xml::Schema::XmlSchemaSet* schemas)
		{
			return ((::System::Xml::Schema::XmlSchemaSet*(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSCHEMA1_OFFSET))(this, instanceDocument, schemas);
		}

		::System::Xml::Schema::XmlSchemaAttribute* AddAttribute(::System::String* localName, ::System::String* prefix, ::System::String* childURI, ::System::String* attrValue, ::System::Boolean bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema, ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation, ::System::Xml::Schema::XmlSchemaObjectTable* compiledAttributes)
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDATTRIBUTE_OFFSET))(this, localName, prefix, childURI, attrValue, bCreatingNewType, parentSchema, addLocation, compiledAttributes);
		}

		::System::Xml::Schema::XmlSchema* CreateXmlSchema(::System::String* targetNS)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATEXMLSCHEMA_OFFSET))(this, targetNS);
		}

		::System::Xml::Schema::XmlSchemaElement* AddElement(::System::String* localName, ::System::String* prefix, ::System::String* childURI, ::System::Xml::Schema::XmlSchema* parentSchema, ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation, ::System::Int32 positionWithinCollection)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_ADDELEMENT_OFFSET))(this, localName, prefix, childURI, parentSchema, addLocation, positionWithinCollection);
		}

		::System::Void InferElement(::System::Xml::Schema::XmlSchemaElement* xse, ::System::Boolean bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERELEMENT_OFFSET))(this, xse, bCreatingNewType, parentSchema);
		}

		::System::Xml::Schema::XmlSchemaSimpleContentExtension* CheckSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* ct)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleContentExtension*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CHECKSIMPLECONTENTEXTENSION_OFFSET))(this, ct);
		}

		::System::Xml::Schema::XmlSchemaType* GetEffectiveSchemaType(::System::Xml::Schema::XmlSchemaElement* elem, ::System::Boolean bCreatingNewType)
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETEFFECTIVESCHEMATYPE_OFFSET))(this, elem, bCreatingNewType);
		}

		::System::Xml::Schema::XmlSchemaElement* FindMatchingElement(::System::Boolean bCreatingNewType, ::System::Xml::XmlReader* xtr, ::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Int32& lastUsedSeqItem, ::System::Boolean& bParticleChanged, ::System::Xml::Schema::XmlSchema* parentSchema, ::System::Boolean setMaxoccurs)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Boolean, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Int32&, ::System::Boolean&, ::System::Xml::Schema::XmlSchema*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDMATCHINGELEMENT_OFFSET))(this, bCreatingNewType, xtr, ct, lastUsedSeqItem, bParticleChanged, parentSchema, setMaxoccurs);
		}

		::System::Void ProcessAttributes(::System::Xml::Schema::XmlSchemaElement*& xse, ::System::Xml::Schema::XmlSchemaType* effectiveSchemaType, ::System::Boolean bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*&, ::System::Xml::Schema::XmlSchemaType*, ::System::Boolean, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_PROCESSATTRIBUTES_OFFSET))(this, xse, effectiveSchemaType, bCreatingNewType, parentSchema);
		}

		::System::Void MoveAttributes(::System::Xml::Schema::XmlSchemaSimpleContentExtension* scExtension, ::System::Xml::Schema::XmlSchemaComplexType* ct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Xml::Schema::XmlSchemaComplexType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_OFFSET))(this, scExtension, ct);
		}

		::System::Void MoveAttributes_1(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension, ::System::Boolean bCreatingNewType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MOVEATTRIBUTES_1_OFFSET))(this, ct, simpleContentExtension, bCreatingNewType);
		}

		::System::Xml::Schema::XmlSchemaAttribute* FindAttribute(::System::Collections::ICollection* attributes, ::System::String* attrName)
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID, ::System::Collections::ICollection*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTE_OFFSET))(this, attributes, attrName);
		}

		::System::Xml::Schema::XmlSchemaElement* FindGlobalElement(::System::String* namespaceURI, ::System::String* localName, ::System::Xml::Schema::XmlSchema*& parentSchema)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchema*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDGLOBALELEMENT_OFFSET))(this, namespaceURI, localName, parentSchema);
		}

		::System::Xml::Schema::XmlSchemaElement* FindElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::System::String* elementName)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENT_OFFSET))(this, elements, elementName);
		}

		::System::Xml::Schema::XmlSchemaAttribute* FindAttributeRef(::System::Collections::ICollection* attributes, ::System::String* attributeName, ::System::String* nsURI)
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID, ::System::Collections::ICollection*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDATTRIBUTEREF_OFFSET))(this, attributes, attributeName, nsURI);
		}

		::System::Xml::Schema::XmlSchemaElement* FindElementRef(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::System::String* elementName, ::System::String* nsURI)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_FINDELEMENTREF_OFFSET))(this, elements, elementName, nsURI);
		}

		::System::Void MakeExistingAttributesOptional(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_MAKEEXISTINGATTRIBUTESOPTIONAL_OFFSET))(this, ct, attributesInInstance);
		}

		::System::Void SwitchUseToOptional(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SWITCHUSETOOPTIONAL_OFFSET))(this, attributes, attributesInInstance);
		}

		::System::Xml::XmlQualifiedName* RefineSimpleType(::System::String* s, ::System::Int32& iTypeFlags)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_REFINESIMPLETYPE_OFFSET))(this, s, iTypeFlags);
		}

		static ::System::Int32 InferSimpleType(::System::String* s, ::System::Boolean& bNeedsRangeCheck)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_INFERSIMPLETYPE_OFFSET))(s, bNeedsRangeCheck);
		}

		static ::System::Int32 DateTime(::System::String* s, ::System::Boolean bDate, ::System::Boolean bTime)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_DATETIME_OFFSET))(s, bDate, bTime);
		}

		::System::Xml::Schema::XmlSchemaElement* CreateNewElementforChoice(::System::Xml::Schema::XmlSchemaElement* copyElement)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_CREATENEWELEMENTFORCHOICE_OFFSET))(this, copyElement);
		}

		static ::System::Int32 GetSchemaType(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Int32(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_GETSCHEMATYPE_OFFSET))(qname);
		}

		::System::Void SetMinMaxOccurs(::System::Xml::Schema::XmlSchemaElement* el, ::System::Boolean setMaxOccurs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAINFERENCE_SETMINMAXOCCURS_OFFSET))(this, el, setMaxOccurs);
		}
	};
}
