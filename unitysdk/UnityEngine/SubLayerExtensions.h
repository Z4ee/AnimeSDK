#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET UNITYSDK_OFFSET(0x17927E70)

namespace UnityEngine
{
	inline static constexpr unsigned int SubLayerExtensions_TypeDefinitionIndex = 47021;

	class SubLayerExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToTag(::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E subLayer)
		{
			return ((::System::String*(*)(::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBLAYEREXTENSIONS_TOTAG_OFFSET))(subLayer);
		}
	};
}
