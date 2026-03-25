#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement_SecurityAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x161E80B0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x161E9100)
#define SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET UNITYSDK_OFFSET(0x161ED890)
#define SYSTEM_SECURITY_SECURITYELEMENT_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x161EDAB0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x161ED0E0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x161ECBB0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x161ECEF0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x161ECF00)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x161ECF10)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x161EDD80)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x161EDE00)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET UNITYSDK_OFFSET(0x161EC770)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET UNITYSDK_OFFSET(0x161ECF20)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET UNITYSDK_OFFSET(0x161EDE80)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET UNITYSDK_OFFSET(0x161EE800)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET UNITYSDK_OFFSET(0x161EE7F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x161ECA20)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x161E9060)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET UNITYSDK_OFFSET(0x161EE030)
#define SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x161ECFA0)
#define SYSTEM_SECURITY_SECURITYELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x161EEF90)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161EC610)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x161E90F0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_TypeDefinitionIndex = 942;

	class SecurityElement : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_text_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x59B0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_tag_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x59B8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_value_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x59C0);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_name_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x59C8);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x59D0);
		}
		::System::String* tag; // 0x10
		::System::Collections::ArrayList* attributes; // 0x18
		::System::Collections::ArrayList* children; // 0x20
		::System::String* text; // 0x28

		::System::Void _ctor(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT__CTOR_OFFSET))(this, tag);
		}

		::System::Void _ctor_1(::System::String* tag, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT__CTOR_1_OFFSET))(this, tag, text);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT__CCTOR_OFFSET))();
		}

		::System::Collections::Hashtable* get_Attributes()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Children()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_CHILDREN_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_TAG_OFFSET))(this);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void AddAttribute(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET))(this, name, value);
		}

		::System::Void AddChild(::System::Security::SecurityElement* child)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET))(this, child);
		}

		static ::System::String* Escape(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET))(str);
		}

		static ::System::String* Unescape(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET))(str);
		}

		static ::System::Security::SecurityElement* FromString(::System::String* xml)
		{
			return ((::System::Security::SecurityElement*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_FROMSTRING_OFFSET))(xml);
		}

		static ::System::Boolean IsValidAttributeName(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET))(name);
		}

		static ::System::Boolean IsValidAttributeValue(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET))(value);
		}

		static ::System::Boolean IsValidTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET))(tag);
		}

		static ::System::Boolean IsValidText(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET))(text);
		}

		::System::Security::SecurityElement* SearchForChildByTag(::System::String* tag)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET))(this, tag);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET))(this);
		}

		::System::Void ToXml(::System::Text::StringBuilder*& s, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET))(this, s, level);
		}

		::System::Security::SecurityElement_SecurityAttribute* GetAttribute(::System::String* name)
		{
			return ((::System::Security::SecurityElement_SecurityAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void set_m_strText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET))(this, value);
		}

		::System::String* SearchForTextOfLocalName(::System::String* strLocalName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET))(this, strLocalName);
		}
	};
}
