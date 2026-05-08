#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x1792D620)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1792D640)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x1792D630)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1792D5C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_Model_TypeDefinitionIndex = 80157;

	class UITimeWidget_Model : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* _IsEnd_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_13<::System::Boolean>* get_IsEnd()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::Class_0_16E4307DCC41950C_13<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
