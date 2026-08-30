#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class IInputGetter; }

#define UNITYENGINE_UI_INPUTUTILS_BUTTONVALIDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x17724470)
#define UNITYENGINE_UI_INPUTUTILS_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0x17724320)
#define UNITYENGINE_UI_INPUTUTILS_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0x17724270)
#define UNITYENGINE_UI_INPUTUTILS_ISTEXTPROOPEN_OFFSET UNITYSDK_OFFSET(0x17724340)
#define UNITYENGINE_UI_INPUTUTILS_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0x17724300)
#define UNITYENGINE_UI_INPUTUTILS_SETDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0x177242E0)
#define UNITYENGINE_UI_INPUTUTILS_SETINPUTGETTERIMPL_OFFSET UNITYSDK_OFFSET(0x17724260)
#define UNITYENGINE_UI_INPUTUTILS_SHAREDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x177243D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputUtils_TypeDefinitionIndex = 6866;

	class InputUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::IInputGetter** StaticGet_mGetter()
		{
			return (::UnityEngine::UI::IInputGetter**)Il2CppClass::FromTypeDefinitionIndex(InputUtils_TypeDefinitionIndex)->GetStaticField(0x27180);
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
