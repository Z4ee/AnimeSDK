#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Security { class SecurityElement_SecurityAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x150B4140)
#define SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x150B5C60)
#define SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET UNITYSDK_OFFSET(0x150BACA0)
#define SYSTEM_SECURITY_SECURITYELEMENT_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x150BAF30)
#define SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x150BA480)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x150B9CD0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x150BA290)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x150BA2A0)
#define SYSTEM_SECURITY_SECURITYELEMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x150BA2B0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x150BB1B0)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x150BB230)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET UNITYSDK_OFFSET(0x150B9890)
#define SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET UNITYSDK_OFFSET(0x150BA2C0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET UNITYSDK_OFFSET(0x150BB2B0)
#define SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET UNITYSDK_OFFSET(0x150BC070)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET UNITYSDK_OFFSET(0x150BC060)
#define SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x150B9B40)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x150B5BC0)
#define SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET UNITYSDK_OFFSET(0x150BB550)
#define SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x150BA340)
#define SYSTEM_SECURITY_SECURITYELEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x150BCBC0)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x150B9730)
#define SYSTEM_SECURITY_SECURITYELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x150B5C50)

namespace System::Security
{
	inline static constexpr unsigned int SecurityElement_TypeDefinitionIndex = 943;

	class SecurityElement : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_name_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x1C850);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x1C858);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_tag_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x1C860);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_attr_value_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x1C868);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_invalid_text_chars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityElement_TypeDefinitionIndex)->GetStaticField(0x1C870);
		}
		::System::Collections::ArrayList* attributes; // 0x10
		::System::String* text; // 0x18
		::System::Collections::ArrayList* children; // 0x20
		::System::String* tag; // 0x28

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT__CTOR_1_OFFSET))(this, a1, a2);
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

		::System::Void set_Text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_TEXT_OFFSET))(this, a1);
		}

		::System::Void AddAttribute(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Void AddChild(::System::Security::SecurityElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ADDCHILD_OFFSET))(this, a1);
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ESCAPE_OFFSET))(a1);
		}

		static ::System::String* Unescape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_UNESCAPE_OFFSET))(a1);
		}

		static ::System::Security::SecurityElement* FromString(::System::String* a1)
		{
			return ((::System::Security::SecurityElement*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_FROMSTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsValidAttributeName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTENAME_OFFSET))(a1);
		}

		static ::System::Boolean IsValidAttributeValue(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDATTRIBUTEVALUE_OFFSET))(a1);
		}

		static ::System::Boolean IsValidTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTAG_OFFSET))(a1);
		}

		static ::System::Boolean IsValidText(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_ISVALIDTEXT_OFFSET))(a1);
		}

		::System::Security::SecurityElement* SearchForChildByTag(::System::String* a1)
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORCHILDBYTAG_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOSTRING_OFFSET))(this);
		}

		::System::Void ToXml(::System::Text::StringBuilder*& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_TOXML_OFFSET))(this, a1, a2);
		}

		::System::Security::SecurityElement_SecurityAttribute* GetAttribute(::System::String* a1)
		{
			return ((::System::Security::SecurityElement_SecurityAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_GETATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void set_m_strText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SET_M_STRTEXT_OFFSET))(this, a1);
		}

		::System::String* SearchForTextOfLocalName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYELEMENT_SEARCHFORTEXTOFLOCALNAME_OFFSET))(this, a1);
		}
	};
}
