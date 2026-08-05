#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET UNITYSDK_OFFSET(0x18B4B8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int SubLayerExtensions_TypeDefinitionIndex = 79864;

	class SubLayerExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToTag(::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 subLayer)
		{
			return ((::System::String*(*)(::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET))(subLayer);
		}
	};
}
