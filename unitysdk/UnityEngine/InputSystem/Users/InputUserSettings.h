#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class IInputActionCollection; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_APPLY_OFFSET UNITYSDK_OFFSET(0x1D3C8C00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_CUSTOMBINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3C8A80)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEX_OFFSET UNITYSDK_OFFSET(0x1D3C8AA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEY_OFFSET UNITYSDK_OFFSET(0x1D3C8AC0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKX_OFFSET UNITYSDK_OFFSET(0x1D3C8B20)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKY_OFFSET UNITYSDK_OFFSET(0x1D3C8B40)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1D3C8B00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESMOOTHING_OFFSET UNITYSDK_OFFSET(0x1D3C8AE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPBUMPERS_OFFSET UNITYSDK_OFFSET(0x1D3C8B80)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPDPADANDLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1D3C8BC0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPSTICKS_OFFSET UNITYSDK_OFFSET(0x1D3C8B60)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3C8BA0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_VIBRATIONSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D3C8BE0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_CUSTOMBINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3C8A90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEX_OFFSET UNITYSDK_OFFSET(0x1D3C8AB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEY_OFFSET UNITYSDK_OFFSET(0x1D3C8AD0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKX_OFFSET UNITYSDK_OFFSET(0x1D3C8B30)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKY_OFFSET UNITYSDK_OFFSET(0x1D3C8B50)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1D3C8B10)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESMOOTHING_OFFSET UNITYSDK_OFFSET(0x1D3C8AF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPBUMPERS_OFFSET UNITYSDK_OFFSET(0x1D3C8B90)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPDPADANDLEFTSTICK_OFFSET UNITYSDK_OFFSET(0x1D3C8BD0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPSTICKS_OFFSET UNITYSDK_OFFSET(0x1D3C8B70)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3C8BB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_VIBRATIONSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1D3C8BF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8C10)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUserSettings_TypeDefinitionIndex = 31761;

	class InputUserSettings : public ::System::Object
	{
	public:
		::System::String* _customBindings_k__BackingField; // 0x10
		::System::Boolean _invertMouseX_k__BackingField; // 0x18
		::System::Boolean _invertMouseY_k__BackingField; // 0x19
		::System::Nullable_1<::System::Single> _mouseSmoothing_k__BackingField; // 0x1C
		::System::Nullable_1<::System::Single> _mouseSensitivity_k__BackingField; // 0x24
		::System::Boolean _invertStickX_k__BackingField; // 0x2C
		::System::Boolean _invertStickY_k__BackingField; // 0x2D
		::System::Boolean _swapSticks_k__BackingField; // 0x2E
		::System::Boolean _swapBumpers_k__BackingField; // 0x2F
		::System::Boolean _swapTriggers_k__BackingField; // 0x30
		::System::Boolean _swapDpadAndLeftStick_k__BackingField; // 0x31
		::System::Single _vibrationStrength_k__BackingField; // 0x34
		::System::String* m_CustomBindings; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get_customBindings()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_CUSTOMBINDINGS_OFFSET))(this);
		}

		::System::Void set_customBindings(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_CUSTOMBINDINGS_OFFSET))(this, value);
		}

		::System::Boolean get_invertMouseX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEX_OFFSET))(this);
		}

		::System::Void set_invertMouseX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEX_OFFSET))(this, value);
		}

		::System::Boolean get_invertMouseY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTMOUSEY_OFFSET))(this);
		}

		::System::Void set_invertMouseY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTMOUSEY_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Single> get_mouseSmoothing()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESMOOTHING_OFFSET))(this);
		}

		::System::Void set_mouseSmoothing(::System::Nullable_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESMOOTHING_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Single> get_mouseSensitivity()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_MOUSESENSITIVITY_OFFSET))(this);
		}

		::System::Void set_mouseSensitivity(::System::Nullable_1<::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_MOUSESENSITIVITY_OFFSET))(this, value);
		}

		::System::Boolean get_invertStickX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKX_OFFSET))(this);
		}

		::System::Void set_invertStickX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKX_OFFSET))(this, value);
		}

		::System::Boolean get_invertStickY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_INVERTSTICKY_OFFSET))(this);
		}

		::System::Void set_invertStickY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_INVERTSTICKY_OFFSET))(this, value);
		}

		::System::Boolean get_swapSticks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPSTICKS_OFFSET))(this);
		}

		::System::Void set_swapSticks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPSTICKS_OFFSET))(this, value);
		}

		::System::Boolean get_swapBumpers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPBUMPERS_OFFSET))(this);
		}

		::System::Void set_swapBumpers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPBUMPERS_OFFSET))(this, value);
		}

		::System::Boolean get_swapTriggers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPTRIGGERS_OFFSET))(this);
		}

		::System::Void set_swapTriggers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPTRIGGERS_OFFSET))(this, value);
		}

		::System::Boolean get_swapDpadAndLeftStick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_SWAPDPADANDLEFTSTICK_OFFSET))(this);
		}

		::System::Void set_swapDpadAndLeftStick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_SWAPDPADANDLEFTSTICK_OFFSET))(this, value);
		}

		::System::Single get_vibrationStrength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_GET_VIBRATIONSTRENGTH_OFFSET))(this);
		}

		::System::Void set_vibrationStrength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_SET_VIBRATIONSTRENGTH_OFFSET))(this, value);
		}

		::System::Void Apply(::UnityEngine::InputSystem::IInputActionCollection* actions)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::IInputActionCollection*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSERSETTINGS_APPLY_OFFSET))(this, actions);
		}
	};
}
