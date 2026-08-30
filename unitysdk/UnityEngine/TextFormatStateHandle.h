#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

#define UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB50E0)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_OFFSET UNITYSDK_OFFSET(0x1EFB5040)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE_SETFORMATSTATE_OFFSET UNITYSDK_OFFSET(0x1EFB50F0)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB5100)

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormatStateHandle_TypeDefinitionIndex = 5052;

	class TextFormatStateHandle : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE__CTOR_OFFSET))(this);
		}

		::UnityEngine::TextFormatState GetFormatState()
		{
			return ((::UnityEngine::TextFormatState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_OFFSET))(this);
		}

		::System::Void SetFormatState(::UnityEngine::TextFormatState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE_SETFORMATSTATE_OFFSET))(this, a1);
		}

		::System::Void GetFormatState_Injected(::UnityEngine::TextFormatState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_INJECTED_OFFSET))(this, a1);
		}
	};
}
