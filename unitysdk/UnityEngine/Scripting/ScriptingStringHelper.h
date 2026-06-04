#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5AA0)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1B2D5A80)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET UNITYSDK_OFFSET(0x1B2D5A10)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int ScriptingStringHelper_TypeDefinitionIndex = 4486;

	class ScriptingStringHelper : public ::System::Object
	{
	public:
		static ::System::Boolean ModifyString(::System::String* a1, ::UnityEngine::NativeStringRef a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean ModifyStringByNativeString(::System::String* a1, ::UnityEngine::NativeStringRef a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean ModifyStringByNativeString_Injected(::System::String* a1, ::UnityEngine::NativeStringRef& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET))(a1, a2);
		}
	};
}
