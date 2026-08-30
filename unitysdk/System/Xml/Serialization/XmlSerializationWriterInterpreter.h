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

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET UNITYSDK_OFFSET(0x1E86F850)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E86EDA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1E86B2F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1E86B390)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET UNITYSDK_OFFSET(0x1E860880)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E866260)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET UNITYSDK_OFFSET(0x1E86AFE0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1E86C970)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E869B20)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E86A740)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET UNITYSDK_OFFSET(0x1E86F7B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET UNITYSDK_OFFSET(0x1E86BC70)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E86EB50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET UNITYSDK_OFFSET(0x1E86B5E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E869870)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E869540)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E869A90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E86A6B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E8698B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E868890)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET UNITYSDK_OFFSET(0x1E86F700)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET UNITYSDK_OFFSET(0x1E86E7C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET UNITYSDK_OFFSET(0x1E86E3B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET UNITYSDK_OFFSET(0x1E8685F0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E868560)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriterInterpreter_TypeDefinitionIndex = 2038;

	class XmlSerializationWriterInterpreter : public ::System::Xml::Serialization::XmlSerializationWriter
	{
	public:
		::System::Xml::Serialization::XmlMapping* _typeMap; // 0x48
		::System::Xml::Serialization::SerializationFormat _format; // 0x50

		::System::Void _ctor(::System::Xml::Serialization::XmlMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void InitCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_INITCALLBACKS_OFFSET))(this);
		}

		::System::Void WriteRoot(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEROOT_OFFSET))(this, a1);
		}

		::System::Void WriteObject(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteMessage(::System::Xml::Serialization::XmlMembersMapping* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlMembersMapping*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteObjectElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteObjectElementAttributes(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTATTRIBUTES_OFFSET))(this, a1, a2);
		}

		::System::Void WriteObjectElementElements(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEOBJECTELEMENTELEMENTS_OFFSET))(this, a1, a2);
		}

		::System::Void WriteMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteAttributeMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEATTRIBUTEMEMBERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteElementMembers(::System::Xml::Serialization::ClassMap* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::ClassMap*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEELEMENTMEMBERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* GetMemberValue(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETMEMBERVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MemberHasValue(::System::Xml::Serialization::XmlTypeMapMember* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMember*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_MEMBERHASVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteMemberElement(::System::Xml::Serialization::XmlTypeMapElementInfo* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapElementInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEMEMBERELEMENT_OFFSET))(this, a1, a2);
		}

		static ::System::Object* ImplicitConvert(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_IMPLICITCONVERT_OFFSET))(a1, a2);
		}

		::System::Void WritePrimitiveValueLiteral(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::Serialization::XmlTypeMapping* a4, ::System::Xml::Serialization::TypeData* a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUELITERAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WritePrimitiveValueEncoded(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlQualifiedName* a4, ::System::Xml::Serialization::XmlTypeMapping* a5, ::System::Xml::Serialization::TypeData* a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEVALUEENCODED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void WriteListElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteListContent(::System::Object* a1, ::System::Xml::Serialization::TypeData* a2, ::System::Xml::Serialization::ListMap* a3, ::System::Object* a4, ::System::Text::StringBuilder* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::TypeData*, ::System::Xml::Serialization::ListMap*, ::System::Object*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITELISTCONTENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 GetListCount(::System::Xml::Serialization::TypeData* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETLISTCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAnyElementContent(::System::Xml::Serialization::XmlTypeMapMemberAnyElement* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapMemberAnyElement*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEANYELEMENTCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void WritePrimitiveElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEPRIMITIVEELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEnumElement(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_WRITEENUMELEMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetStringValue(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Xml::Serialization::TypeData* a2, ::System::Object* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Xml::Serialization::TypeData*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETSTRINGVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetEnumXmlValue(::System::Xml::Serialization::XmlTypeMapping* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Serialization::XmlTypeMapping*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_GETENUMXMLVALUE_OFFSET))(this, a1, a2);
		}
	};
}
