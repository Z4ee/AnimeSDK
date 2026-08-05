#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_FONTUPDATETRACKER_REBUILDFORFONT_OFFSET UNITYSDK_OFFSET(0x1F581FE0)
#define UNITYENGINE_UI_FONTUPDATETRACKER_TRACKTEXT_OFFSET UNITYSDK_OFFSET(0x1F581AF0)
#define UNITYENGINE_UI_FONTUPDATETRACKER_UNTRACKTEXT_OFFSET UNITYSDK_OFFSET(0x1F5821E0)
#define UNITYENGINE_UI_FONTUPDATETRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5825A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontUpdateTracker_TypeDefinitionIndex = 19211;

	class FontUpdateTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Text*>*>** StaticGet_m_Tracked()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Text*>*>**)Il2CppClass::FromTypeDefinitionIndex(FontUpdateTracker_TypeDefinitionIndex)->GetStaticField(0x8830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER__CCTOR_OFFSET))();
		}

		static ::System::Void TrackText(::UnityEngine::UI::Text* t)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_TRACKTEXT_OFFSET))(t);
		}

		static ::System::Void RebuildForFont(::UnityEngine::Font* f)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_REBUILDFORFONT_OFFSET))(f);
		}

		static ::System::Void UntrackText(::UnityEngine::UI::Text* t)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_UNTRACKTEXT_OFFSET))(t);
		}
	};
}
