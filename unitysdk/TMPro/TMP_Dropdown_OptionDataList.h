#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Dropdown_OptionData; }

#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B1A5050)
#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B1A5060)
#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1AF0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_OptionDataList_TypeDefinitionIndex = 40945;

	class TMP_Dropdown_OptionDataList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* m_Options; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::TMPro::TMP_Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET))(this, a1);
		}
	};
}
