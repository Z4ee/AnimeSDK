#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DebugUI_Container.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering { class DebugUI_Widget; }
namespace UnityEngine::Rendering { template <typename T> class ObservableList_1; }

#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AD150)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GET_COLUMNLABELS_OFFSET UNITYSDK_OFFSET(0x1B4AD100)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B4AD0F0)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1B4AD360)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AD240)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SET_COLUMNLABELS_OFFSET UNITYSDK_OFFSET(0x1B4AD110)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_UNITYENGINE_RENDERING_DEBUGUI_IVALUEFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AD190)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1B4AD3B0)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4AD130)
#define UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD120)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_Foldout_TypeDefinitionIndex = 18277;

	class DebugUI_Foldout : public ::UnityEngine::Rendering::DebugUI_Container
	{
	public:
		::Il2CppArray<::System::String*>* _columnLabels_k__BackingField; // 0x40
		::System::Boolean opened; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children, ::Il2CppArray<::System::String*>* columnLabels)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT__CTOR_1_OFFSET))(this, displayName, children, columnLabels);
		}

		::System::Boolean get_isReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GET_ISREADONLY_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_columnLabels()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GET_COLUMNLABELS_OFFSET))(this);
		}

		::System::Void set_columnLabels(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SET_COLUMNLABELS_OFFSET))(this, value);
		}

		::System::Boolean GetValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_GETVALUE_OFFSET))(this);
		}

		::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_UNITYENGINE_RENDERING_DEBUGUI_IVALUEFIELD_GETVALUE_OFFSET))(this);
		}

		::System::Void SetValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SETVALUE_OFFSET))(this, value);
		}

		::System::Object* ValidateValue(::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_VALIDATEVALUE_OFFSET))(this, value);
		}

		::System::Void SetValue_1(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_FOLDOUT_SETVALUE_1_OFFSET))(this, value);
		}
	};
}
