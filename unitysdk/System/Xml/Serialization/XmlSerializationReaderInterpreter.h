#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Serialization/SerializationFormat.h"
#include "unitysdk/System/Xml/Serialization/XmlSerializationReader.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Serialization { class ClassMap; }
namespace System::Xml::Serialization { class TypeData; }
namespace System::Xml::Serialization { class XmlMapping; }
namespace System::Xml::Serialization { class XmlMembersMapping; }
namespace System::Xml::Serialization { class XmlTypeMapElementInfo; }
namespace System::Xml::Serialization { class XmlTypeMapMember; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET UNITYSDK_OFFSET(0x1C17F860)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET UNITYSDK_OFFSET(0x1C1816C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1C17A6C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C17F220)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x1C180260)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET UNITYSDK_OFFSET(0x1C1816B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C1806C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET UNITYSDK_OFFSET(0x1C1815A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1C17F5B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1C17F2D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1C175900)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1C1801E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET UNITYSDK_OFFSET(0x1C1735A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C180040)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C180C10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET UNITYSDK_OFFSET(0x1C180C70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C17A7C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C17F230)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C17EF30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1C179D80)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x1C17EC90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C17E3D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET UNITYSDK_OFFSET(0x1C181200)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C17AEE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C179F90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C180350)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x1C17E1D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C17EBC0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x1C1810F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_1_OFFSET UNITYSDK_OFFSET(0x1C179BB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET UNITYSDK_OFFSET(0x1C179AB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C17E1B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET UNITYSDK_OFFSET(0x1C1804E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C17ED00)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1C17FE90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET UNITYSDK_OFFSET(0x1C17A740)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1C17F3C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C181C30)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C179A80)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReaderInterpreter_TypeDefinitionIndex = 1908;

	class XmlSerializationReaderInterpreter : public ::System::Xml::Serialization::XmlSerializationReader
	{
	public:
		static ::System::Xml::XmlQualifiedName** StaticGet_AnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializationReaderInterpreter_TypeDefinitionIndex)->GetStaticField(0x1EF0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_empty_array()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSerializationReaderInterpreter_TypeDefinitionIndex)->GetStaticField(0x1EF8);
		}
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0xD0
		::System::Xml::Serialization::SerializationFormat _format; // 0xD8

		::System::Void _ctor(::System::Xml::Serialization::XmlMapping* typeMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CTOR_OFFSET))(this, typeMap);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER__CCTOR_OFFSET))();
		}

		::System::Void InitCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITCALLBACKS_OFFSET))(this);
		}

		::System::Void InitIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIDS_OFFSET))(this);
		}

		::System::Object* ReadRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_OFFSET))(this);
		}

		::System::Object* ReadEncodedObject(::System::Xml::Serialization::XmlTypeMapping* typeMap)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENCODEDOBJECT_OFFSET))(this, typeMap);
		}

		::System::Object* ReadMessage(::System::Xml::Serialization::XmlMembersMapping* typeMap)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlMembersMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMESSAGE_OFFSET))(this, typeMap);
		}

		::System::Object* ReadRoot_1(::System::Xml::Serialization::XmlTypeMapping* rootMap)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READROOT_1_OFFSET))(this, rootMap);
		}

		::System::Object* ReadObject(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable, ::System::Boolean checkType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECT_OFFSET))(this, typeMap, isNullable, checkType);
		}

		::System::Object* ReadClassInstance(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable, ::System::Boolean checkType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCE_OFFSET))(this, typeMap, isNullable, checkType);
		}

		::System::Void ReadClassInstanceMembers(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READCLASSINSTANCEMEMBERS_OFFSET))(this, typeMap, ob);
		}

		::System::Void ReadAttributeMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READATTRIBUTEMEMBERS_OFFSET))(this, map, ob, isValueList);
		}

		::System::Void ReadMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList, ::System::Boolean readBySoapOrder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READMEMBERS_OFFSET))(this, map, ob, isValueList, readBySoapOrder);
		}

		::System::Void SetListMembersDefaults(::System::Xml::Serialization::ClassMap* map, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETLISTMEMBERSDEFAULTS_OFFSET))(this, map, ob, isValueList);
		}

		::System::Void FixupMembers(::System::Xml::Serialization::ClassMap* map, ::System::Object* obfixup, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FIXUPMEMBERS_OFFSET))(this, map, obfixup, isValueList);
		}

		::System::Void ProcessUnknownAttribute(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNATTRIBUTE_OFFSET))(this, target);
		}

		::System::Void ProcessUnknownElement(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_PROCESSUNKNOWNELEMENT_OFFSET))(this, target);
		}

		::System::Boolean IsReadOnly(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Xml::Serialization::TypeData* memType, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Xml::Serialization::TypeData*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ISREADONLY_OFFSET))(this, member, memType, ob, isValueList);
		}

		::System::Void SetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUE_OFFSET))(this, member, ob, value, isValueList);
		}

		::System::Void SetMemberValueFromAttr(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Object* value, ::System::Boolean isValueList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_SETMEMBERVALUEFROMATTR_OFFSET))(this, member, ob, value, isValueList);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* member, ::System::Object* ob, ::System::Boolean isValueList)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETMEMBERVALUE_OFFSET))(this, member, ob, isValueList);
		}

		::System::Object* ReadObjectElement(::System::Xml::Serialization::XmlTypeMapElementInfo* elem)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READOBJECTELEMENT_OFFSET))(this, elem);
		}

		::System::Object* ReadPrimitiveValue(::System::Xml::Serialization::XmlTypeMapElementInfo* elem)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEVALUE_OFFSET))(this, elem);
		}

		::System::Object* GetValueFromXmlString(::System::String* value, ::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlTypeMapping* typeMap)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETVALUEFROMXMLSTRING_OFFSET))(this, value, typeData, typeMap);
		}

		::System::Object* ReadListElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable, ::System::Object* list, ::System::Boolean canCreateInstance)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTELEMENT_OFFSET))(this, typeMap, isNullable, list, canCreateInstance);
		}

		::System::Object* ReadListString(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::String* values)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READLISTSTRING_OFFSET))(this, typeMap, values);
		}

		::System::Void AddListValue(::System::Xml::Serialization::TypeData* listType, ::System::Object*& list, ::System::Int32 index, ::System::Object* value, ::System::Boolean canCreateInstance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*&, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_ADDLISTVALUE_OFFSET))(this, listType, list, index, value, canCreateInstance);
		}

		static ::System::Object* CreateInstance(::System::Type* type, ::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_OFFSET))(type, nonPublic);
		}

		::System::Object* CreateInstance_1(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATEINSTANCE_1_OFFSET))(this, type);
		}

		::System::Object* CreateList(::System::Type* listType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_CREATELIST_OFFSET))(this, listType);
		}

		::System::Object* InitializeList(::System::Xml::Serialization::TypeData* listType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_INITIALIZELIST_OFFSET))(this, listType);
		}

		::System::Void FillList(::System::Object* list, ::System::Object* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_FILLLIST_OFFSET))(this, list, items);
		}

		::System::Void CopyEnumerableList(::System::Object* source, ::System::Object* dest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_COPYENUMERABLELIST_OFFSET))(this, source, dest);
		}

		::System::Object* ReadXmlNodeElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODEELEMENT_OFFSET))(this, typeMap, isNullable);
		}

		::System::Object* ReadXmlNode(::System::Xml::Serialization::TypeData* type, ::System::Boolean wrapped)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLNODE_OFFSET))(this, type, wrapped);
		}

		::System::Object* ReadPrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READPRIMITIVEELEMENT_OFFSET))(this, typeMap, isNullable);
		}

		::System::Object* ReadEnumElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READENUMELEMENT_OFFSET))(this, typeMap, isNullable);
		}

		::System::Object* GetEnumValue(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::String* val)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_GETENUMVALUE_OFFSET))(this, typeMap, val);
		}

		::System::Object* ReadXmlSerializableElement(::System::Xml::Serialization::XmlTypeMapping* typeMap, ::System::Boolean isNullable)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADERINTERPRETER_READXMLSERIALIZABLEELEMENT_OFFSET))(this, typeMap, isNullable);
		}
	};
}
