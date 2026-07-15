#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class IInputGetter; }

#define UNITYENGINE_UI_INPUTUTILS_BUTTONVALIDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x15DAF6B0)
#define UNITYENGINE_UI_INPUTUTILS_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0x15DAF560)
#define UNITYENGINE_UI_INPUTUTILS_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0x15DAF4B0)
#define UNITYENGINE_UI_INPUTUTILS_ISTEXTPROOPEN_OFFSET UNITYSDK_OFFSET(0x15DAF580)
#define UNITYENGINE_UI_INPUTUTILS_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0x15DAF540)
#define UNITYENGINE_UI_INPUTUTILS_SETDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0x15DAF520)
#define UNITYENGINE_UI_INPUTUTILS_SETINPUTGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x15DAF4A0)
#define UNITYENGINE_UI_INPUTUTILS_SHAREDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x15DAF610)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputUtils_TypeDefinitionIndex = 6036;

	class InputUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::IInputGetter** StaticGet_mGetter()
		{
			return (::UnityEngine::UI::IInputGetter**)Il2CppClass::FromTypeDefinitionIndex(InputUtils_TypeDefinitionIndex)->GetStaticField(0x32490);
		}

		static ::System::Void SetInputGetterImpl(::UnityEngine::UI::IInputGetter* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::IInputGetter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SETINPUTGETTERIMPL_OFFSET))(a1);
		}

		static ::System::Boolean IsControllerInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ISCONTROLLERINPUT_OFFSET))();
		}

		static ::System::Void SetDropdownShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SETDROPDOWNSHOW_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* NoLeadingChars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_NOLEADINGCHARS_OFFSET))();
		}

		static ::System::Int32 Ellipsis()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ELLIPSIS_OFFSET))();
		}

		static ::System::Boolean IsTextProOpen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_ISTEXTPROOPEN_OFFSET))();
		}

		static ::System::Single ShareDragThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_SHAREDRAGTHRESHOLD_OFFSET))();
		}

		static ::System::Single ButtonValidThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTUTILS_BUTTONVALIDTHRESHOLD_OFFSET))();
		}
	};
}
