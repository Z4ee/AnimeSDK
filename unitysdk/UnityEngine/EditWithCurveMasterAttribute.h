#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_EDITWITHCURVEMASTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C561670)

namespace UnityEngine
{
	inline static constexpr unsigned int EditWithCurveMasterAttribute_TypeDefinitionIndex = 84248;

	class EditWithCurveMasterAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EDITWITHCURVEMASTERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
