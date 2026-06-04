#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Style; }

#define TMPRO_TMP_STYLESHEET_GETSTYLE_1_OFFSET UNITYSDK_OFFSET(0x1B1D79F0)
#define TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x1B1D7980)
#define TMPRO_TMP_STYLESHEET_GET_STYLES_OFFSET UNITYSDK_OFFSET(0x1B1D7560)
#define TMPRO_TMP_STYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B1D7580)
#define TMPRO_TMP_STYLESHEET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x1B1D7A80)
#define TMPRO_TMP_STYLESHEET_RESET_OFFSET UNITYSDK_OFFSET(0x1B1D7570)
#define TMPRO_TMP_STYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7A90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_StyleSheet_TypeDefinitionIndex = 41022;

	class TMP_StyleSheet : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* m_StyleList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_Style*>* m_StyleLookupDictionary; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* get_styles()
		{
			return ((::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GET_STYLES_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_RESET_OFFSET))(this);
		}

		::TMPro::TMP_Style* GetStyle(::System::Int32 a1)
		{
			return ((::TMPro::TMP_Style*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET))(this, a1);
		}

		::TMPro::TMP_Style* GetStyle_1(::System::String* a1)
		{
			return ((::TMPro::TMP_Style*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_1_OFFSET))(this, a1);
		}

		::System::Void RefreshStyles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_REFRESHSTYLES_OFFSET))(this);
		}

		::System::Void LoadStyleDictionaryInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET))(this);
		}
	};
}
