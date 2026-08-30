#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ProBuilder/RectSelectMode.h"

namespace System { class Object; }

#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB5AE40)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0xB5ADD0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB5AE60)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xD008370)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEPTHTEST_OFFSET UNITYSDK_OFFSET(0x182E0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_RECTSELECTMODE_OFFSET UNITYSDK_OFFSET(0x784260)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xD008470)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xD0084A0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_DEPTHTEST_OFFSET UNITYSDK_OFFSET(0x18100)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_RECTSELECTMODE_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0084C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PickerOptions_TypeDefinitionIndex = 43227;

	struct alignas(4) PickerOptions
	{
		static ::UnityEngine::ProBuilder::PickerOptions* StaticGet_k_Default()
		{
			return (::UnityEngine::ProBuilder::PickerOptions*)Il2CppClass::FromTypeDefinitionIndex(PickerOptions_TypeDefinitionIndex)->GetStaticField(0x148B0);
		}
		::System::Boolean _depthTest_k__BackingField; // 0x10
		::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS__CCTOR_OFFSET))();
		}

		::System::Boolean get_depthTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEPTHTEST_OFFSET))(this);
		}

		::System::Void set_depthTest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_DEPTHTEST_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode()
		{
			return ((::UnityEngine::ProBuilder::RectSelectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_RECTSELECTMODE_OFFSET))(this);
		}

		::System::Void set_rectSelectMode(::UnityEngine::ProBuilder::RectSelectMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::RectSelectMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_RECTSELECTMODE_OFFSET))(this, a1);
		}

		static ::UnityEngine::ProBuilder::PickerOptions get_Default()
		{
			return ((::UnityEngine::ProBuilder::PickerOptions(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::PickerOptions a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::PickerOptions a1, ::UnityEngine::ProBuilder::PickerOptions a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::PickerOptions a1, ::UnityEngine::ProBuilder::PickerOptions a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
