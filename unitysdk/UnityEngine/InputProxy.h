#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class IInputProxy; }
namespace UnityEngine { class RawInputProxy; }

#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1B3811C0)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1B381330)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B381050)
#define UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1B374280)
#define UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET UNITYSDK_OFFSET(0x1B380F20)
#define UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3814A0)
#define UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3740C0)
#define UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET UNITYSDK_OFFSET(0x1B381010)
#define UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B380F70)
#define UNITYENGINE_INPUTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3816A0)

namespace UnityEngine
{
	inline static constexpr unsigned int InputProxy_TypeDefinitionIndex = 5845;

	class InputProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::IInputProxy** StaticGet_Poxyimpl()
		{
			return (::UnityEngine::IInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x451F0);
		}
		static ::UnityEngine::RawInputProxy** StaticGet_defaultProxy()
		{
			return (::UnityEngine::RawInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x451F8);
		}
		static ::System::Boolean* StaticGet_InProxyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0xC670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsInProxyMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET))();
		}

		static ::System::Int32 get_touchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET))();
		}

		static ::System::Int32 TouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET))();
		}

		static ::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET))(a1);
		}

		static ::System::Void SetProxyImpl(::UnityEngine::IInputProxy* a1)
		{
			return ((::System::Void(*)(::UnityEngine::IInputProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET))();
		}
	};
}
