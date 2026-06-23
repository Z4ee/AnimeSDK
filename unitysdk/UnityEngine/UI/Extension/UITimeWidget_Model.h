#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
template <typename T> class Class_0_16E4307DCC419505_165;

#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x143C2550)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x143C2570)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x143C2560)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x143BF990)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_Model_TypeDefinitionIndex = 65552;

	class UITimeWidget_Model : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* _IsEnd_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_165<::System::Boolean>* get_IsEnd()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::Class_0_16E4307DCC419505_165<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
