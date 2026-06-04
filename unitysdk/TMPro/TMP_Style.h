#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1D7220)
#define TMPRO_TMP_STYLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1D71D0)
#define TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET UNITYSDK_OFFSET(0x1B1D70E0)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x1B1D7250)
#define TMPRO_TMP_STYLE_GET_STYLECLOSINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x1B1D7270)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGDEFINITION_OFFSET UNITYSDK_OFFSET(0x1B1D7240)
#define TMPRO_TMP_STYLE_GET_STYLEOPENINGTAGARRAY_OFFSET UNITYSDK_OFFSET(0x1B1D7260)
#define TMPRO_TMP_STYLE_REFRESHSTYLE_OFFSET UNITYSDK_OFFSET(0x1B1D7280)
#define TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1D7230)
#define TMPRO_TMP_STYLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1D71E0)
#define TMPRO_TMP_STYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7170)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Style_TypeDefinitionIndex = 41021;

	class TMP_Style : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Style** StaticGet_k_NormalStyle()
		{
			return (::TMPro::TMP_Style**)Il2CppClass::FromTypeDefinitionIndex(TMP_Style_TypeDefinitionIndex)->GetStaticField(0x59080);
		}
		::System::String* m_Name; // 0x10
		::System::Int32 m_HashCode; // 0x18
		::System::String* m_OpeningDefinition; // 0x20
		::System::String* m_ClosingDefinition; // 0x28
		::Il2CppArray<::System::Int32>* m_OpeningTagArray; // 0x30
		::Il2CppArray<::System::Int32>* m_ClosingTagArray; // 0x38
		::Il2CppArray<::System::UInt32>* m_OpeningTagUnicodeArray; // 0x40
		::Il2CppArray<::System::UInt32>* m_ClosingTagUnicodeArray; // 0x48

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::TMPro::TMP_Style* get_NormalStyle()
		{
			return ((::TMPro::TMP_Style*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NORMALSTYLE_OFFSET))();
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_hashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_GET_HASHCODE_OFFSET))(this);
		}

		::System::Void set_hashCode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLE_SET_HASHCODE_OFFSET))(this, a1);
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
