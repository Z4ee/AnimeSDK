#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_PROBUILDER_PROGRIDSCONDITIONALSNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11A5A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProGridsConditionalSnapAttribute_TypeDefinitionIndex = 40794;

	class ProGridsConditionalSnapAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROGRIDSCONDITIONALSNAPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
