#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement_SecurityAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A3B4630)
#define SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1A3B4B70)
#define SYSTEM_SECURITY_SECURITYELEMENT_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A3B4C80)
#define SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1A3B4D00)
#define SYSTEM_SECURITY_SECURITYELEMENT_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A3B4F80)
#define SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A3B47E0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A3B4130)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x1A3B5140)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A3B51C0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET UNITYSDK_OFFSET(0x1A3B3F20)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET UNITYSDK_OFFSET(0x1A3B4470)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET UNITYSDK_OFFSET(0x1A3B5240)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A3B5B40)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A3B3FA0)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A3B5360)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET UNITYSDK_OFFSET(0x1A3B53F0)
#define SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1A3B44F0)
#define SYSTEM_SECURITY_SECURITYELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3B5E30)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3B3DC0)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B3DB0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_TypeDefinitionIndex = 946;

	class SecurityElement : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_name_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x368);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_value_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x370);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_tag_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x378);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_text_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		::System::String* text; // 0x10
		::System::Collections::ArrayList* children; // 0x18
		::System::String* tag; // 0x20
		::System::Collections::ArrayList* attributes; // 0x28

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

		::System::String* Attribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ATTRIBUTE_OFFSET))(this, name);
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

		::System::String* SearchForTextOfLocalName(::System::String* strLocalName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET))(this, strLocalName);
		}
	};
}
