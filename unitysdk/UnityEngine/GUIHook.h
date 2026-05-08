#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_GUIHOOK_INVOKE_ONHOOKGUISETCHANGED_OFFSET UNITYSDK_OFFSET(0x1B3C07B0)
#define UNITYENGINE_GUIHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C0810)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIHook_TypeDefinitionIndex = 5344;

	class GUIHook : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet_onHookSetChanged()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GUIHook_TypeDefinitionIndex)->GetStaticField(0x55A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookGUISetChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIHOOK_INVOKE_ONHOOKGUISETCHANGED_OFFSET))(value);
		}
	};
}
