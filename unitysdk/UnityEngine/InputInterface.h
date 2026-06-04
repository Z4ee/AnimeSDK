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

#define UNITYENGINE_INPUTINTERFACE_DISABLEDEFAULTINPUT_OFFSET UNITYSDK_OFFSET(0x181988E0)
#define UNITYENGINE_INPUTINTERFACE_ENABLEDEFAULTINPUT_OFFSET UNITYSDK_OFFSET(0x181988F0)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x18198DA0)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x18198E20)
#define UNITYENGINE_INPUTINTERFACE_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x18198DE0)
#define UNITYENGINE_INPUTINTERFACE_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x18198C20)
#define UNITYENGINE_INPUTINTERFACE_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x18198CA0)
#define UNITYENGINE_INPUTINTERFACE_GETKEY_OFFSET UNITYSDK_OFFSET(0x18198C60)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x18198D20)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x18198D60)
#define UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x18198CE0)
#define UNITYENGINE_INPUTINTERFACE_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x18198E60)
#define UNITYENGINE_INPUTINTERFACE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x181986D0)
#define UNITYENGINE_INPUTINTERFACE_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x18198730)
#define UNITYENGINE_INPUTINTERFACE_GET_MOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x181987B0)
#define UNITYENGINE_INPUTINTERFACE_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x18198870)
#define UNITYENGINE_INPUTINTERFACE_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x18198840)
#define UNITYENGINE_INPUTINTERFACE_ISDEFAULTINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x18198900)
#define UNITYENGINE_INPUTINTERFACE_REGISTERCOMMONSERVICE_OFFSET UNITYSDK_OFFSET(0x18198A30)
#define UNITYENGINE_INPUTINTERFACE_REGISTERGAMEPADSERVICE_OFFSET UNITYSDK_OFFSET(0x18198970)
#define UNITYENGINE_INPUTINTERFACE_REGISTERJOYPADSERVICE_OFFSET UNITYSDK_OFFSET(0x18198910)
#define UNITYENGINE_INPUTINTERFACE_REGISTERKEYBOARDSERVICE_OFFSET UNITYSDK_OFFSET(0x18198940)
#define UNITYENGINE_INPUTINTERFACE_REGISTERKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x18198B50)
#define UNITYENGINE_INPUTINTERFACE_REGISTERMOUSESERVICE_OFFSET UNITYSDK_OFFSET(0x181989A0)
#define UNITYENGINE_INPUTINTERFACE_REGISTERPROPERTYSERVICE_OFFSET UNITYSDK_OFFSET(0x18198AC0)
#define UNITYENGINE_INPUTINTERFACE_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x18198BF0)
#define UNITYENGINE_INPUTINTERFACE_SET_IMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x18198800)
#define UNITYENGINE_INPUTINTERFACE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18198720)
#define UNITYENGINE_INPUTINTERFACE_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x181988A0)
#define UNITYENGINE_INPUTINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x18198710)

namespace UnityEngine
{
	inline static constexpr unsigned int InputInterface_TypeDefinitionIndex = 9804;

	class InputInterface : public ::System::Object
	{
	public:
		static ::UnityEngine::InputInterface** StaticGet_sm_instance()
		{
			return (::UnityEngine::InputInterface**)Il2CppClass::FromTypeDefinitionIndex(InputInterface_TypeDefinitionIndex)->GetStaticField(0xB90);
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

		static ::System::Void set_Instance(::UnityEngine::InputInterface* a1)
		{
			return ((::System::Void(*)(::UnityEngine::InputInterface*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_INSTANCE_OFFSET))(a1);
		}

		::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_mouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_MOUSESCROLLDELTA_OFFSET))(this);
		}

		::System::Void set_imeCompositionMode(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_IMECOMPOSITIONMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_TOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean get_simulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void set_simulateMouseWithTouches(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SET_SIMULATEMOUSEWITHTOUCHES_OFFSET))(this, a1);
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

		::System::Void RegisterJoypadService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERJOYPADSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterKeyboardService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERKEYBOARDSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterGamepadService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERGAMEPADSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterMouseService(::MiHoYo::SDK::InputSystem::IMouseService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERMOUSESERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterCommonService(::MiHoYo::SDK::InputSystem::ICommonService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERCOMMONSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterPropertyService(::MiHoYo::SDK::InputSystem::IPropertyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERPROPERTYSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterKeyMapping(::MiHoYo::SDK::InputSystem::KeyboardType a1, ::MiHoYo::SDK::InputSystem::IKeyMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::KeyboardType, ::MiHoYo::SDK::InputSystem::IKeyMapping*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_REGISTERKEYMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void SetInputActionAsset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_SETINPUTACTIONASSET_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEYDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETKEYUP_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonDown(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetButton(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonUp(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETBUTTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTINTERFACE_GETTOUCH_OFFSET))(this, a1);
		}
	};
}
