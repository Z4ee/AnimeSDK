#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC20D90)
#define TMPRO_TMP_STYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC20D40)
#define TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET UNITYSDK_OFFSET(0x1FC20BB0)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x1FC20DC0)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x1FC20DE0)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x1FC20DB0)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x1FC20DD0)
#define TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0x1FC20DF0)
#define TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC20DA0)
#define TMPRO_TMP_STYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC20D50)
#define TMPRO_TMP_STYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC20CB0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Style_TypeDefinitionIndex = 39863;

	class TMP_Style : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Style** StaticGet_k_NormalStyle()
		{
			return (::TMPro::TMP_Style**)Il2CppClass::FromTypeDefinitionIndex(TMP_Style_TypeDefinitionIndex)->GetStaticField(0x2C7A0);
		}
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::Int32>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::Int32>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::UInt32>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::UInt32>* m_ClosingTagUnicodeArray; // 0x48

		::System::Void _ctor(::System::String* styleName, ::System::String* styleOpeningDefinition, ::System::String* styleClosingDefinition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE__CTOR_OFFSET))(this, styleName, styleOpeningDefinition, styleClosingDefinition);
		}

		static ::TMPro::TMP_Style* get_NormalStyle()
		{
			return ((::TMPro::TMP_Style*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET))();
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET))(this);
		}

		::System::Void set_hashCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET))(this, value);
		}

		::System::String* get_styleOpeningDefinition()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLEOPENINGDEFINITION_OFFSET))(this);
		}

		::System::String* get_styleClosingDefinition()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLECLOSINGDEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_styleOpeningTagArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_styleClosingTagArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET))(this);
		}

		::System::Void RefreshStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET))(this);
		}
	};
}
