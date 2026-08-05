#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
template <typename T> class Class_0_16E4307DCC419505_159;

#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x18B54BD0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B54BF0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x18B54BE0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B51470)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_Model_TypeDefinitionIndex = 61323;

	class UITimeWidget_Model : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Boolean>* _IsEnd_k__BackingField; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_159<::System::Boolean>* get_IsEnd()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::Class_0_16E4307DCC419505_159<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_SET_ISEND_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_MODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
