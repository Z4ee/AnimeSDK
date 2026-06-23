#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_BoolField.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AD4B0)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x1B4AD460)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x1B4AD440)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x1B4AD450)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD560)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_HistoryBoolField_TypeDefinitionIndex = 18282;

	class DebugUI_HistoryBoolField : public ::UnityEngine::Rendering::DebugUI_BoolField
	{
	public:
		::Il2CppArray<::System::Func_1<::System::Boolean>*>* _historyGetter_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Func_1<::System::Boolean>*>* get_historyGetter()
		{
			return ((::Il2CppArray<::System::Func_1<::System::Boolean>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYGETTER_OFFSET))(this);
		}

		::System::Void set_historyGetter(::Il2CppArray<::System::Func_1<::System::Boolean>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Func_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET))(this, value);
		}

		::System::Int32 get_historyDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET))(this);
		}

		::System::Boolean GetHistoryValue(::System::Int32 historyIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET))(this, historyIndex);
		}
	};
}
