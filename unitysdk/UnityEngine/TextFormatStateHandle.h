#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

#define UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18AC26F0)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_OFFSET UNITYSDK_OFFSET(0x18AC2650)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE_SETFORMATSTATE_OFFSET UNITYSDK_OFFSET(0x18AC2700)
#define UNITYENGINE_TEXTFORMATSTATEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC2710)

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormatStateHandle_TypeDefinitionIndex = 4949;

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

		::System::Void SetFormatState(::UnityEngine::TextFormatState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE_SETFORMATSTATE_OFFSET))(this, state);
		}

		::System::Void GetFormatState_Injected(::UnityEngine::TextFormatState& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTFORMATSTATEHANDLE_GETFORMATSTATE_INJECTED_OFFSET))(this, ret);
		}
	};
}
