#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeStringRef.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A4D750)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18A4D730)
#define UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET UNITYSDK_OFFSET(0x18A4D6C0)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int ScriptingStringHelper_TypeDefinitionIndex = 4310;

	class ScriptingStringHelper : public ::System::Object
	{
	public:
		static ::System::Boolean ModifyString(::System::String* source, ::UnityEngine::NativeStringRef str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRING_OFFSET))(source, str);
		}

		static ::System::Boolean ModifyStringByNativeString(::System::String* source, ::UnityEngine::NativeStringRef str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_OFFSET))(source, str);
		}

		static ::System::Boolean ModifyStringByNativeString_Injected(::System::String* source, ::UnityEngine::NativeStringRef& str)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::NativeStringRef&))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_SCRIPTINGSTRINGHELPER_MODIFYSTRINGBYNATIVESTRING_INJECTED_OFFSET))(source, str);
		}
	};
}
