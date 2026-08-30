#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Dropdown_OptionData; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B78AC30)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1B78AC40)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B786DF0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionDataList_TypeDefinitionIndex = 6701;

	class Dropdown_OptionDataList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* m_Options; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Dropdown_OptionData*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET))(this, a1);
		}
	};
}
