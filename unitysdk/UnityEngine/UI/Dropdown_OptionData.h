#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B78ABE0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B78AC00)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B78ABC0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B78ABF0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1B78AC10)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1B78ABD0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B787390)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B7874E0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B78AC20)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7855E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionData_TypeDefinitionIndex = 6700;

	class Dropdown_OptionData : public ::System::Object
	{
	public:
		::System::String* m_Text; // 0x10
		::UnityEngine::Sprite* m_Image; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::UnityEngine::Sprite* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_TEXT_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_image()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_image(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_IMAGE_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATA_SET_INDEX_OFFSET))(this, a1);
		}
	};
}
