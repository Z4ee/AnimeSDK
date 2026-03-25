#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/SerializationFormat.h"
#include "unitysdk/System/Xml/Serialization/XmlSerializationWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class ClassMap; }
namespace System::Xml::Serialization { class ListMap; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlMapping; }
namespace System::Xml::Serialization { class XmlMembersMapping; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapMemberAnyElement; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET UNITYSDK_OFFSET(0x185EF110)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x185EE910)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x185EB7B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x185EB850)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET UNITYSDK_OFFSET(0x185E32D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x185E7C10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET UNITYSDK_OFFSET(0x185EB5A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x185ECD50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x185EA5F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET UNITYSDK_OFFSET(0x185EAF10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x185EF0D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET UNITYSDK_OFFSET(0x185EC250)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET UNITYSDK_OFFSET(0x185EE690)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET UNITYSDK_OFFSET(0x185EBAF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x185EA3C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x185EA160)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x185EA540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET UNITYSDK_OFFSET(0x185EAE60)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x185EA400)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x185E9880)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x185EF080)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET UNITYSDK_OFFSET(0x185EE350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET UNITYSDK_OFFSET(0x185EDFA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET UNITYSDK_OFFSET(0x185E9680)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER__CTOR_OFFSET UNITYSDK_OFFSET(0x185E95F0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriterInterpreter_TypeDefinitionIndex = 2026;

	class XmlSerializationWriterInterpreter : public ::System::Xml::Serialization::XmlSerializationWriter
	{
	public:
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0x48
		::System::Xml::Serialization::SerializationFormat _format; // 0x50

		::System::Void _ctor(::System::Xml::Serialization::XmlMapping* typeMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER__CTOR_OFFSET))(this, typeMap);
		}

		::System::Void InitCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET))(this);
		}

		::System::Void WriteRoot(::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET))(this, ob);
		}

		::System::Void WriteObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::System::String* element, ::System::String* namesp, ::System::Boolean isNullable, ::System::Boolean needType, ::System::Boolean writeWrappingElem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET))(this, typeMap, ob, element, namesp, isNullable, needType, writeWrappingElem);
		}

		::System::Void WriteMessage(::System::Xml::Serialization::XmlMembersMapping* membersMap, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMembersMapping*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET))(this, membersMap, parameters);
		}

		::System::Void WriteObjectElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::System::String* element, ::System::String* namesp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET))(this, typeMap, ob, element, namesp);
		}

		::System::Void WriteObjectElementAttributes(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET))(this, typeMap, ob);
		}

		::System::Void WriteObjectElementElements(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET))(this, typeMap, ob);
		}

		::System::Void WriteMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET))(this, map, ob, isValueList);
		}

		::System::Void WriteAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET))(this, map, ob, isValueList);
		}

		::System::Void WriteElementMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET))(this, map, ob, isValueList);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET))(this, member, ob, isValueList);
		}

		::System::Boolean MemberHasValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET))(this, member, ob, isValueList);
		}

		::System::Void WriteMemberElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem, ::System::Object* memberValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET))(this, elem, memberValue);
		}

		static ::System::Object* ImplicitConvert(::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET))(obj, type);
		}

		::System::Void WritePrimitiveValueLiteral(::System::Object* memberValue, ::System::String* name, ::System::String* ns, ::System::Xml::Serialization::XmlTypeMapping* mappedType, ::System::Xml::Serialization::TypeData* typeData, ::System::Boolean wrapped, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET))(this, memberValue, name, ns, mappedType, typeData, wrapped, isNullable);
		}

		::System::Void WritePrimitiveValueEncoded(::System::Object* memberValue, ::System::String* name, ::System::String* ns, ::System::Xml::XmlQualifiedName* xsiType, ::System::Xml::Serialization::XmlTypeMapping* mappedType, ::System::Xml::Serialization::TypeData* typeData, ::System::Boolean wrapped, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET))(this, memberValue, name, ns, xsiType, mappedType, typeData, wrapped, isNullable);
		}

		::System::Void WriteListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::System::String* element, ::System::String* namesp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET))(this, typeMap, ob, element, namesp);
		}

		::System::Void WriteListContent(::System::Object* container, ::System::Xml::Serialization::TypeData* listType, ::System::Xml::Serialization::ListMap* map, ::System::Object* ob, ::System::Text::StringBuilder* targetString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::ListMap*, ::System::Object*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET))(this, container, listType, map, ob, targetString);
		}

		::System::Int32 GetListCount(::System::Xml::Serialization::TypeData* listType, ::System::Object* ob)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET))(this, listType, ob);
		}

		::System::Void WriteAnyElementContent(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* member, ::System::Object* memberValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET))(this, member, memberValue);
		}

		::System::Void WritePrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::System::String* element, ::System::String* namesp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET))(this, typeMap, ob, element, namesp);
		}

		::System::Void WriteEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob, ::System::String* element, ::System::String* namesp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET))(this, typeMap, ob, element, namesp);
		}

		::System::String* GetStringValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Xml::Serialization::TypeData* type, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET))(this, typeMap, type, value);
		}

		::System::String* GetEnumXmlValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET))(this, typeMap, ob);
		}
	};
}
