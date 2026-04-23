#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class IInputProxy; }
namespace UnityEngine { class RawInputProxy; }

#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1A5357E0)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1A535950)
#define UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A535670)
#define UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1A528980)
#define UNITYENGINE_INPUTPROXY_GET_ISINPROXYMODE_OFFSET UNITYSDK_OFFSET(0x1A535540)
#define UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A535AC0)
#define UNITYENGINE_INPUTPROXY_GET_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5287C0)
#define UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET UNITYSDK_OFFSET(0x1A535630)
#define UNITYENGINE_INPUTPROXY_TOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A535590)
#define UNITYENGINE_INPUTPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A535CB0)

namespace UnityEngine
{
	inline static constexpr unsigned int InputProxy_TypeDefinitionIndex = 5568;

	class InputProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::RawInputProxy** StaticGet_defaultProxy()
		{
			return (::UnityEngine::RawInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x17C50);
		}
		static ::UnityEngine::IInputProxy** StaticGet_Poxyimpl()
		{
			return (::UnityEngine::IInputProxy**)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x17C58);
		}
		static ::System::Boolean* StaticGet_InProxyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InputProxy_TypeDefinitionIndex)->GetStaticField(0x67C0);
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

		static ::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETTOUCH_OFFSET))(index);
		}

		static ::System::Void SetProxyImpl(::UnityEngine::IInputProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::IInputProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_SETPROXYIMPL_OFFSET))(proxy);
		}

		static ::System::Boolean GetMouseButton(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTON_OFFSET))(index);
		}

		static ::System::Boolean GetMouseButtonDown(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONDOWN_OFFSET))(index);
		}

		static ::System::Boolean GetMouseButtonUp(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GETMOUSEBUTTONUP_OFFSET))(index);
		}

		static ::UnityEngine::Vector3 get_mousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTPROXY_GET_MOUSEPOSITION_OFFSET))();
		}
	};
}
