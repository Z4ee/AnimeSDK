#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextTagReplacer_Matched.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAA180)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAA210)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEA9950)
#define UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9930)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextTagReplacer_MatchReplacer_TypeDefinitionIndex = 47865;

	class UITextTagReplacer_MatchReplacer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_INVOKE_OFFSET))(this, rawStr, matched, sb);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* rawStr, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched matched, ::System::Text::StringBuilder* sb, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::UnityEngine::UI::Extension::UITextTagReplacer_Matched, ::System::Text::StringBuilder*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_BEGININVOKE_OFFSET))(this, rawStr, matched, sb, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTTAGREPLACER_MATCHREPLACER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
