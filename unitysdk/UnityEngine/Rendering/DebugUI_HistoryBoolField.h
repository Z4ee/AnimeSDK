#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_BoolField.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET UNITYSDK_OFFSET(0x1EBF89C0)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x1EBF89B0)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x1EBF8990)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x1EBF89A0)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF8A10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_HistoryBoolField_TypeDefinitionIndex = 34861;

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

		::System::Void set_historyGetter(::Il2CppArray<::System::Func_1<::System::Boolean>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Func_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET))(this, a1);
		}

		::System::Int32 get_historyDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET))(this);
		}

		::System::Boolean GetHistoryValue(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET))(this, a1);
		}
	};
}
