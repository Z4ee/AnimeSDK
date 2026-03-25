#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_Style; }

#define TMPRO_TMP_STYLESHEET_GETSTYLE_1_OFFSET UNITYSDK_OFFSET(0x189447F0)
#define TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x18944750)
#define TMPRO_TMP_STYLESHEET_GET_STYLES_OFFSET UNITYSDK_OFFSET(0x18944370)
#define TMPRO_TMP_STYLESHEET_LOADSTYLEDICTIONARYINTERNAL_OFFSET UNITYSDK_OFFSET(0x18944390)
#define TMPRO_TMP_STYLESHEET_REFRESHSTYLES_OFFSET UNITYSDK_OFFSET(0x189448B0)
#define TMPRO_TMP_STYLESHEET_RESET_OFFSET UNITYSDK_OFFSET(0x18944380)
#define TMPRO_TMP_STYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x189448C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_StyleSheet_TypeDefinitionIndex = 34376;

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

		::TMPro::TMP_Style* GetStyle(::System::Int32 hashCode)
		{
			return ((::TMPro::TMP_Style*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_OFFSET))(this, hashCode);
		}

		::TMPro::TMP_Style* GetStyle_1(::System::String* name)
		{
			return ((::TMPro::TMP_Style*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TMP_STYLESHEET_GETSTYLE_1_OFFSET))(this, name);
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
