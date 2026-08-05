#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UILocalizationText_EDeferMarkDirtyReq.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_FLUSHALLREQUEST_OFFSET UNITYSDK_OFFSET(0x1C14D610)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_REMOVEDEFERMARKDIRTYREQUEST_OFFSET UNITYSDK_OFFSET(0x1C14D680)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_REQUIREDEFERMARKDIRTY_OFFSET UNITYSDK_OFFSET(0x1C14D390)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14D750)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_DeferMarkDirty_TypeDefinitionIndex = 53370;

	class UILocalizationText_DeferMarkDirty : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet__requests()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_DeferMarkDirty_TypeDefinitionIndex)->GetStaticField(0x41330);
		}
		static ::Foundation::Coroutine::CoroutineHandle* StaticGet__deferHandle()
		{
			return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_DeferMarkDirty_TypeDefinitionIndex)->GetStaticField(0xF300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY__CCTOR_OFFSET))();
		}

		static ::System::Void RequireDeferMarkDirty(::UnityEngine::UI::Extension::UILocalizationText* text, ::UnityEngine::UI::Extension::UILocalizationText_EDeferMarkDirtyReq type)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText_EDeferMarkDirtyReq))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_REQUIREDEFERMARKDIRTY_OFFSET))(text, type);
		}

		static ::System::Void RemoveDeferMarkDirtyRequest(::UnityEngine::UI::Extension::UILocalizationText* text)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_REMOVEDEFERMARKDIRTYREQUEST_OFFSET))(text);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* FlushAllRequest()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DEFERMARKDIRTY_FLUSHALLREQUEST_OFFSET))();
		}
	};
}
