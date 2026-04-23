#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyboardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MiHoYo::SDK::InputSystem { class ICommonService; }
namespace MiHoYo::SDK::InputSystem { class IKeyMapping; }
namespace MiHoYo::SDK::InputSystem { class IKeyService; }
namespace MiHoYo::SDK::InputSystem { class IMouseService; }
namespace MiHoYo::SDK::InputSystem { class IPropertyService; }
namespace System { class String; }

#define UNITYENGINE_INPUTINTERFACE_DISABLEDEFAULTINPUT_OFFSET UNITYSDK_OFFSET(0x1738DF10)
#define UNITYENGINE_INPUTINTERFACE_ENABLEDEFAULTINPUT_OFFSET UNITYSDK_OFFSET(0x1738DF20)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1738E5B0)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1738E630)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1738E5F0)
#define UNITYENGINE_INPUTINTERFACE_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1738E430)
#define UNITYENGINE_INPUTINTERFACE_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1738E4B0)
#define UNITYENGINE_INPUTINTERFACE_GETKEY_OFFSET UNITYSDK_OFFSET(0x1738E470)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1738E530)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1738E570)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1738E4F0)
#define UNITYENGINE_INPUTINTERFACE_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1738E670)
#define UNITYENGINE_INPUTINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1738DD00)
#define UNITYENGINE_INPUTINTERFACE_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1738DD60)
#define UNITYENGINE_INPUTINTERFACE_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1738DDE0)
#define UNITYENGINE_INPUTINTERFACE_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1738DEA0)
#define UNITYENGINE_INPUTINTERFACE_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1738DE70)
#define UNITYENGINE_INPUTINTERFACE_ISDEFAULTINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x1738DF30)
#define UNITYENGINE_INPUTINTERFACE_REGISTERCOMMONSERVICE_OFFSET UNITYSDK_OFFSET(0x1738E240)
#define UNITYENGINE_INPUTINTERFACE_REGISTERGAMEPADSERVICE_OFFSET UNITYSDK_OFFSET(0x1738E0E0)
#define UNITYENGINE_INPUTINTERFACE_REGISTERJOYPADSERVICE_OFFSET UNITYSDK_OFFSET(0x1738DF40)
#define UNITYENGINE_INPUTINTERFACE_REGISTERKEYBOARDSERVICE_OFFSET UNITYSDK_OFFSET(0x1738E010)
#define UNITYENGINE_INPUTINTERFACE_REGISTERKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x1738E360)
#define UNITYENGINE_INPUTINTERFACE_REGISTERMOUSESERVICE_OFFSET UNITYSDK_OFFSET(0x1738E1B0)
#define UNITYENGINE_INPUTINTERFACE_REGISTERPROPERTYSERVICE_OFFSET UNITYSDK_OFFSET(0x1738E2D0)
#define UNITYENGINE_INPUTINTERFACE_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x1738E400)
#define UNITYENGINE_INPUTINTERFACE_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1738DE30)
#define UNITYENGINE_INPUTINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1738DD50)
#define UNITYENGINE_INPUTINTERFACE_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1738DED0)
#define UNITYENGINE_INPUTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1738DD40)

namespace UnityEngine
{
	inline static constexpr unsigned int InputInterface_TypeDefinitionIndex = 9977;

	class InputInterface : public ::System::Object
	{
	public:
		static ::UnityEngine::InputInterface** StaticGet_sm_instance()
		{
			return (::UnityEngine::InputInterface**)Il2CppClass::FromTypeDefinitionIndex(InputInterface_TypeDefinitionIndex)->GetStaticField(0xC60);
		}
		::System::Boolean m_bDisableDefaultInput; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputInterface* get_Instance()
		{
			return ((::UnityEngine::InputInterface*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::UnityEngine::InputInterface* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_INSTANCE_OFFSET))(value);
		}

		::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_MOUSESCROLLDELTA_OFFSET))(this);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_IMECOMPOSITIONMODE_OFFSET))(this, value);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean get_simulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void set_simulateMouseWithTouches(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(this, value);
		}

		::System::Void DisableDefaultInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_DISABLEDEFAULTINPUT_OFFSET))(this);
		}

		::System::Void EnableDefaultInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_ENABLEDEFAULTINPUT_OFFSET))(this);
		}

		::System::Boolean IsDefaultInputEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_ISDEFAULTINPUTENABLED_OFFSET))(this);
		}

		::System::Void RegisterJoypadService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERJOYPADSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterKeyboardService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERKEYBOARDSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterGamepadService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERGAMEPADSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterMouseService(::MiHoYo::SDK::InputSystem::IMouseService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERMOUSESERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterCommonService(::MiHoYo::SDK::InputSystem::ICommonService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERCOMMONSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterPropertyService(::MiHoYo::SDK::InputSystem::IPropertyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERPROPERTYSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterKeyMapping(::MiHoYo::SDK::InputSystem::KeyboardType eType, ::MiHoYo::SDK::InputSystem::IKeyMapping* instance)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::KeyboardType, ::MiHoYo::SDK::InputSystem::IKeyMapping*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERKEYMAPPING_OFFSET))(this, eType, instance);
		}

		::System::Void SetInputActionAsset(::System::Object* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SETINPUTACTIONASSET_OFFSET))(this, actions);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEYDOWN_OFFSET))(this, key);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEY_OFFSET))(this, key);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEYUP_OFFSET))(this, key);
		}

		::System::Boolean GetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTON_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONDOWN_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONUP_OFFSET))(this, button);
		}

		::System::Boolean GetButtonDown(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTONDOWN_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButton(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTON_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButtonUp(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTONUP_OFFSET))(this, buttonName);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETTOUCH_OFFSET))(this, index);
		}
	};
}
