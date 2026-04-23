#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_EnumField.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GETHISTORYVALUE_OFFSET UNITYSDK_OFFSET(0x1A31D150)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x1A31D130)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GET_HISTORYINDEXGETTER_OFFSET UNITYSDK_OFFSET(0x1A31D110)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_SET_HISTORYINDEXGETTER_OFFSET UNITYSDK_OFFSET(0x1A31D120)
#define UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31D1A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_HistoryEnumField_TypeDefinitionIndex = 33447;

	class DebugUI_HistoryEnumField : public ::UnityEngine::Rendering::DebugUI_EnumField
	{
	public:
		::Il2CppArray<::System::Func_1<::System::Int32>*>* _historyIndexGetter_k__BackingField; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Func_1<::System::Int32>*>* get_historyIndexGetter()
		{
			return ((::Il2CppArray<::System::Func_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GET_HISTORYINDEXGETTER_OFFSET))(this);
		}

		::System::Void set_historyIndexGetter(::Il2CppArray<::System::Func_1<::System::Int32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Func_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_SET_HISTORYINDEXGETTER_OFFSET))(this, value);
		}

		::System::Int32 get_historyDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GET_HISTORYDEPTH_OFFSET))(this);
		}

		::System::Int32 GetHistoryValue(::System::Int32 historyIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_HISTORYENUMFIELD_GETHISTORYVALUE_OFFSET))(this, historyIndex);
		}
	};
}
